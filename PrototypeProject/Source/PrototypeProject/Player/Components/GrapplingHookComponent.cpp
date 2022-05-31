// Fill out your copyright notice in the Description page of Project Settings.


#include "GrapplingHookComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "PrototypeProject/Player/Camera/PlayerCameraComponent.h"
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
m_fPlayerGrappleSpeed(1500.f),
m_bIsGrappling(false)
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
	AActor* TargetActor;
	//FindBestTarget(ActorsFound);

 	bool bTargetWasFound = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), SpherePos, m_fMaxGrappleDistance, ObjectTypeQuery, ActorClassFilter, ActorsToIgnore, ActorsFound);

	if (bTargetWasFound)
	{
		FindBestTarget(ActorsFound, TargetActor);

		CurrentGrappleTarget = Cast<AGrappleTarget>(TargetActor);
		if (CurrentGrappleTarget)
		{
			SetCurrentTarget(CurrentGrappleTarget);
		}
	}			
		
}

void UGrapplingHookComponent::TickFiring()
{
	if (GrappleHook->DistanceToTarget() < 50.f)
	{
		m_eGrappleState = EGrappleState::EGS_OnTarget;
	}
}

void UGrapplingHookComponent::TickNearingTarget()
{

}

void UGrapplingHookComponent::TickOnTarget(float DeltaTime)
{
	float v3Distance = UKismetMathLibrary::Vector_Distance(m_pPlayerCharacter->GetActorLocation(), CurrentGrappleTarget->GetActorLocation());
	if (v3Distance < 150.f)
	{
		StopGrapple();
	}
	else
	{
		m_pPlayerCharacter->GetCustomMovementComponent()->Velocity = GetOwnerToTarget(DeltaTime) * m_fPlayerGrappleSpeed;
	}

	//m_pPlayerCharacter->SetActorLocation(GetOwnerToTarget(DeltaTime/ 2.5f));
}

void UGrapplingHookComponent::AttemptGrapple()
{
	if (m_eGrappleState == EGrappleState::EGS_Retracted && CurrentGrappleTarget)
	{
		if (m_pGrappleHook && m_pGrappleLine)
		{
			if (!m_bIsGrappling)
			{
				FActorSpawnParameters SpawnParams;
				//SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				APawn* Instigator = nullptr;

				//GetWorld()->SpawnActor<ATestGrapple>(TestGrapple, m_pOwnerActor->GetActorLocation(), m_pOwnerActor->GetActorRotation(), SpawnParams);

				//GetWorld()->SpawnActor<AGrappleHook>(m_pGrappleHook, m_pOwnerActor->GetActorLocation(), m_pOwnerActor->GetActorRotation(), SpawnParams);

				GrappleHook = GetWorld()->SpawnActorDeferred<ATestGrapple>(TestGrapple, m_pPlayerCharacter->GetTransform(), m_pPlayerCharacter, Instigator, SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
				if (GrappleHook)
				{
					GrappleHook->SetGrappleTarget(CurrentGrappleTarget);
					UGameplayStatics::FinishSpawningActor(GrappleHook, m_pPlayerCharacter->GetTransform());
				}

				GrappleLine = GetWorld()->SpawnActor<AGrappleLine>(m_pGrappleLine, m_pPlayerCharacter->GetActorLocation(), m_pPlayerCharacter->GetActorRotation(), SpawnParams);

				GrappleLine->AttachToComponent(m_pPlayerCharacter->GetMesh1P(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_l"));

				GrappleLine->GetCableComponent()->SetAttachEndTo(GrappleHook, FName("SceneComponent"));

				m_eGrappleState = EGrappleState::EGS_Firing;

				m_bIsGrappling = true;
			}
			
		}
	}
	else if (m_bIsGrappling)
	{
		StopGrapple();
	}

}

void UGrapplingHookComponent::FindBestTarget(TArray<AActor*> Targets, AActor* &ActorOut)
{
	float fBestAngle = 0.f;
	AActor* BestTarget = nullptr;
	
	for (AActor* CurrentTarget : Targets)
	{
		FHitResult Hit;
		FVector Start = m_pPlayerCharacter->GetActorLocation();
		FVector End = CurrentTarget->GetActorLocation();

		bool TraceHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End, FColor::Red);

		if (TraceHit)
		{
			if (Hit.GetActor() == CurrentTarget)
			{
				FVector v3FromTargetToPlayerNormalized = CurrentTarget->GetActorLocation() - m_pPlayerCharacter->GetActorLocation();
				v3FromTargetToPlayerNormalized.Normalize();
				float fAngleTargetCamera = (FVector::DotProduct(m_pPlayerCamera->GetForwardVector(), v3FromTargetToPlayerNormalized));
				float fCurrentAngle = UKismetMathLibrary::DegAcos(fAngleTargetCamera);

				//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fBestAngle));
				//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fCurrentAngle));
				if (fCurrentAngle < fBestAngle || !BestTarget)
				{
					BestTarget = CurrentTarget;
					fBestAngle = fCurrentAngle;
					//SetCurrentTarget(BestGrappleTarget);
					//UE_LOG(LogTemp, Log, TEXT("Target: %s"), *ActorOut->GetName());
					//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fBestAngle));
					//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fCurrentAngle));
				}
			}
		}
		//return CurrentTarget;
	}

	ActorOut = BestTarget;
	//UE_LOG(LogTemp, Log, TEXT("Target: %s"), *ActorOut->GetName());
}

void UGrapplingHookComponent::SetCurrentTarget(AGrappleTarget* NewGrappleTarget)
{
	//UE_LOG(LogTemp, Log, TEXT("ALO1"));
	NewGrappleTarget->SetActorHiddenInGame(false);
	//if (NewGrappleTarget != CurrentGrappleTarget)
	//{
	//	UE_LOG(LogTemp, Log, TEXT("ALO2"));
	//	if (CurrentGrappleTarget)
	//	{
	//		UE_LOG(LogTemp, Log, TEXT("AL3"));
	//		CurrentGrappleTarget->SetActorHiddenInGame(true);
	//		CurrentGrappleTarget = NewGrappleTarget;
	//		if (CurrentGrappleTarget)
	//		{
	//			CurrentGrappleTarget->SetActorHiddenInGame(false);
	//		}
	//	}
	//}
}

FVector UGrapplingHookComponent::GetOwnerToTarget(float time)
{
	FVector v3PlayerToTargetDistance;
	FVector v3GrappleOffSet;
	v3GrappleOffSet = CurrentGrappleTarget->GetCharacterTargetLocation();
	//v3PlayerToTargetDistance = UKismetMathLibrary::VLerp(m_pPlayerCharacter->GetActorLocation(), v3GrappleOffSet, time);
	v3PlayerToTargetDistance = v3GrappleOffSet - m_pPlayerCharacter->GetActorLocation();
	v3PlayerToTargetDistance.Normalize();

	return v3PlayerToTargetDistance;
	
}

void UGrapplingHookComponent::StopGrapple()
{
	GrappleHook->Destroy();
	GrappleLine->Destroy();
	m_eGrappleState = EGrappleState::EGS_Retracted;
	m_bIsGrappling = false;
}