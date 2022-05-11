// Fill out your copyright notice in the Description page of Project Settings.


#include "GrapplingHookComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "PrototypeProject/Player/GrappleTarget.h"
#include "PrototypeProject/Player/GrappleHook.h"
#include "PrototypeProject/Player/GrappleLine.h"
#include "Kismet/KismetMathLibrary.h"
#include "CableComponent.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"

#include "PrototypeProject/TESTS/TestGrapple.h"

// Sets default values for this component's properties
UGrapplingHookComponent::UGrapplingHookComponent():
m_fMaxGrappleDistance(1000.f),
m_fPlayerGrappleSpeed(1500.f)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_eGrappleState = EGrappleState::EGS_Retracted;

}

// Called when the game starts
void UGrapplingHookComponent::BeginPlay()
{
	Super::BeginPlay();


	m_pPlayerCharacter = Cast<APlayerCharacter>(GetOwner());
	if (m_pPlayerCharacter)
	{
		m_pPlayerCamera = m_pPlayerCharacter->GetFirstPersonCameraComponent();
	}
	//if( pPlayer )

}


// Called every frame
void UGrapplingHookComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	switch (m_eGrappleState)
	{
	case EGrappleState::EGS_Retracted:
	{
		TickRetracted();
	}
	break;
	case EGrappleState::EGS_Firing:
	{
		TickFiring();
	}
	break;
	case EGrappleState::EGS_NearingTarget:
	{
		TickNearingTarget();
	}
	break;
	case EGrappleState::EGS_OnTarget:
	{
		TickOnTarget(DeltaTime);
	}
	break;
	default:
		break;
	}
}

void UGrapplingHookComponent::TickRetracted()
{
	FVector SpherePos = m_pPlayerCharacter->GetActorLocation();
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
	ObjectTypeQuery.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
	TArray<AActor*> ActorsToIgnore;
	UClass* ActorClassFilter = AGrappleTarget::StaticClass();
	TArray<AActor*> ActorsFound;
	//FindBestTarget(ActorsFound);

 	bool bTargetWasFound = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), SpherePos, m_fMaxGrappleDistance, ObjectTypeQuery, ActorClassFilter, ActorsToIgnore, ActorsFound);

	if (bTargetWasFound)
	{
		//FindBestTarget(ActorsFound);
		for (AActor* CurrentTarget : ActorsFound)
		{
			FHitResult Hit;
			FVector Start = m_pPlayerCharacter->GetActorLocation();
			FVector End = CurrentTarget->GetActorLocation();

			GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);

			if (Hit.GetActor() == CurrentTarget)
			{
				//Calculate Angle to Target
				FVector v3FromTargetToPlayerNormalized = CurrentTarget->GetActorLocation() - m_pPlayerCharacter->GetActorLocation();
				v3FromTargetToPlayerNormalized.Normalize();
				float fAngleTargetCamera = (FVector::DotProduct(m_pPlayerCamera->GetForwardVector(), v3FromTargetToPlayerNormalized));
				float fCurrentAngle = UKismetMathLibrary::DegAcos(fAngleTargetCamera);
				
				GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fBestAngle));
				GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fCurrentAngle));
				if (fCurrentAngle < fBestAngle || !BestGrappleTarget)
				{
					BestGrappleTarget = CurrentTarget;
					fBestAngle = fCurrentAngle;
					if (BestGrappleTarget)
					{
						//BestGrappleTarget->SetActorHiddenInGame(true);
					}

					//SetCurrentTarget(BestGrappleTarget);
					UE_LOG(LogTemp, Log, TEXT("Target: %s"), *BestGrappleTarget->GetName());
					//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fBestAngle));
					//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fCurrentAngle));
				}

			}

				//UE_LOG(LogTemp, Log, TEXT("CurrentAngle: %f"), fBestAngle);
				//UE_LOG(LogTemp, Log, TEXT("Target: %s"), *BestTarget->GetName());

			DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.f, 1, 1.f);
		}
	}
	else
	{
		BestGrappleTarget = nullptr;
		fBestAngle = 0.f;
	}

	//UE_LOG(LogTemp, Log, TEXT("Target: %s"), *BestTarget->GetName());
	//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fBestAngle));
	//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Green, FString::Printf(TEXT("Best Target: %s"), *BestTarget->GetName()));

	//UE_LOG(LogTemp, Log, TEXT("Found: %s"), found ? TEXT("true") : TEXT("false"));
}

void UGrapplingHookComponent::TickFiring()
{
	
}

void UGrapplingHookComponent::TickNearingTarget()
{

}

void UGrapplingHookComponent::TickOnTarget(float DeltaTime)
{
	m_pPlayerCharacter->GetCustomMovementComponent()->Velocity = GetOwnerToTarget() * m_fPlayerGrappleSpeed;
}

void UGrapplingHookComponent::AttemptGrapple()
{
	if (m_eGrappleState == EGrappleState::EGS_Retracted && BestGrappleTarget)
	{
		if (m_pGrappleHook && m_pGrappleLine)
		{
			FActorSpawnParameters SpawnParams;
			//SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			APawn* Instigator = nullptr;

			//GetWorld()->SpawnActor<ATestGrapple>(TestGrapple, m_pOwnerActor->GetActorLocation(), m_pOwnerActor->GetActorRotation(), SpawnParams);
			
			//GetWorld()->SpawnActor<AGrappleHook>(m_pGrappleHook, m_pOwnerActor->GetActorLocation(), m_pOwnerActor->GetActorRotation(), SpawnParams);

			ATestGrapple* GrappleHook = GetWorld()->SpawnActorDeferred<ATestGrapple>(TestGrapple, m_pPlayerCharacter->GetTransform(), m_pPlayerCharacter, Instigator, SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
			if (GrappleHook)
			{
				GrappleHook->SetGrappleTarget(BestGrappleTarget);
				UGameplayStatics::FinishSpawningActor(GrappleHook, m_pPlayerCharacter->GetTransform());
			}

			AGrappleLine* GrappleLine = GetWorld()->SpawnActor<AGrappleLine>(m_pGrappleLine, m_pPlayerCharacter->GetActorLocation(), m_pPlayerCharacter->GetActorRotation(), SpawnParams);

			GrappleLine->AttachToComponent(m_pPlayerCharacter->GetMesh1P(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_l"));

			GrappleLine->GetCableComponent()->SetAttachEndTo(GrappleHook, FName("SceneComponent"));

			m_eGrappleState = EGrappleState::EGS_OnTarget;
		}
	}
}

AActor* UGrapplingHookComponent::FindBestTarget(TArray<AActor*> Targets)
{
	for (AActor* CurrentTarget : Targets)
	{
		FHitResult Hit;
		FVector Start = m_pPlayerCharacter->GetActorLocation();
		FVector End = CurrentTarget->GetActorLocation();

		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End, FColor::Red);

		return CurrentTarget;

		UE_LOG(LogTemp, Log, TEXT("Da "));
	}

	UE_LOG(LogTemp, Log, TEXT("Nu "));
	return nullptr;
}

void UGrapplingHookComponent::SetCurrentTarget(AActor* NewGrappleTarget)
{
	UE_LOG(LogTemp, Log, TEXT("ALO1"));
	if (NewGrappleTarget != LastGrappleTarget)
	{
		UE_LOG(LogTemp, Log, TEXT("ALO2"));
		if (LastGrappleTarget)
		{
			UE_LOG(LogTemp, Log, TEXT("AL3"));
			/*LastGrappleTarget->SetActorHiddenInGame(true);
			LastGrappleTarget = NewGrappleTarget;
			if (LastGrappleTarget)
			{
				LastGrappleTarget->SetActorHiddenInGame(false);
			}*/
		}
	}
}

FVector UGrapplingHookComponent::GetOwnerToTarget()
{
	FVector v3PlayerToTargetDistance;
	FVector v3GrappleOffSet;
	v3GrappleOffSet = BestGrappleTarget->GetActorLocation() + FVector(0,0,100);
	v3PlayerToTargetDistance = v3GrappleOffSet - m_pPlayerCharacter->GetActorLocation();
	v3PlayerToTargetDistance.Normalize();

	return v3PlayerToTargetDistance;
	
}