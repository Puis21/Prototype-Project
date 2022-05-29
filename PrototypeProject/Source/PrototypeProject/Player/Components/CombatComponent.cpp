// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"
#include "PrototypeProject/KatanaWeapon.h"
#include "Components/CapsuleComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "PrototypeProject/Player/PlayerAnimInstance.h"
#include "PrototypeProject/Player/Abilities/Ability1/ThrownProjectile.h"
#include "PrototypeProject/Player/Abilities/Ability1/AbilityProjectile.h"
#include "PrototypeProject/Player/Camera/PlayerCameraComponent.h"
#include "Kismet/GameplayStatics.h"

#include "PrototypeProject/PrototypeProjectProjectile.h"


// Sets default values for this component's properties
UCombatComponent::UCombatComponent():
m_bIsAttacking(false),
m_bIsBlocking(false),
m_bCanDamage(false),
m_fSwingSpeed(1.f),
m_bCanQueuNextAttack(false)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_pPlayerCharacter = Cast<APlayerCharacter>(GetOwner());

	//m_pPlayerMovementComponent = m_pPlayerCharacter->GetCustomMovementComponent();

	DefaultComboAttack = TEXT("Swing_01");
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = m_pPlayerCharacter->GetMesh1P()->GetAnimInstance();

	KatanaEquipped = GetWorld()->SpawnActor<AKatanaWeapon>(Katana, m_pPlayerCharacter->GetMesh1P()->GetSocketTransform(FName("Sword_Socket")));

	if (KatanaEquipped)
	{
		const USkeletalMeshSocket* RightHandSocket = m_pPlayerCharacter->GetMesh1P()->GetSocketByName(FName("Sword_Socket"));
		if (RightHandSocket)
		{
			RightHandSocket->AttachActor(KatanaEquipped, m_pPlayerCharacter->GetMesh1P());
		}
		KatanaEquipped->SetOwner(m_pPlayerCharacter);
	}
	
	SetDefaultComboState();
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//UE_LOG(LogTemp, Log, TEXT("Section ID: %s"), *AnimInstance->Montage_GetCurrentSection(SwordComboMontage).ToString());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::Printf(TEXT("Blocking: %s"), m_bIsBlocking ? TEXT("true") : TEXT("false")));
		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::Printf(TEXT("Queued attack: %s"), m_bCanQueuNextAttack ? TEXT("true") : TEXT("false")));
	}

	if (m_bIsAttacking)
	{
		SwordAttackTrace();
	}

	FHitResult Hit;
	ThrowTracer(Hit);

}

void UCombatComponent::SwordAttack()
{

	if (AnimInstance && SwordComboMontage)
	{
		if (!m_bIsAttacking && !m_bIsBlocking)
		{
			AnimInstance->Montage_Play(SwordComboMontage, m_fSwingSpeed);
			AnimInstance->Montage_JumpToSection(ComboAttack);
			m_bIsAttacking = true;		
			//m_pPlayerCharacter->GetCustomMovementComponent()->AddImpulse(m_pPlayerCharacter->GetFirstPersonCameraComponent()->GetForwardVector() * 800.f, true);
		}
		/*if (!m_bIsAttacking)
		{
			if (AnimInstance->Montage_GetCurrentSection(SwordComboMontage) == FName("None"))
			{
				UE_LOG(LogTemp, Log, TEXT("First"));
				AnimInstance->Montage_Play(SwordComboMontage);
				AnimInstance->Montage_JumpToSection(FName("Swing_01"));
				m_bIsAttacking = true;
			}

			if (m_bCanQueuNextAttack)
			{
				if (AnimInstance->Montage_GetCurrentSection(SwordComboMontage) == FName("Swing_01"))
				{
					UE_LOG(LogTemp, Log, TEXT("Second"));
					AnimInstance->Montage_JumpToSection(FName("Swing_02"));
					m_bIsAttacking = true;
				}
				else if (AnimInstance->Montage_GetCurrentSection(SwordComboMontage) == FName("Swing_02"))
				{
					UE_LOG(LogTemp, Log, TEXT("Third"));
					AnimInstance->Montage_JumpToSection(FName("Swing_03"));
					m_bIsAttacking = true;
				}
			}
		}*/
	}
	//UE_LOG(LogTemp, Log, TEXT("Section ID: %s"), *AnimInstance->Montage_GetCurrentSection(SwordComboMontage).ToString());
}

void UCombatComponent::SwordAttackTrace()
{
	FHitResult Hit;
	FVector Start = KatanaEquipped->GetMesh()->GetSocketLocation(FName("Katana_Bottom"));
	FVector End = KatanaEquipped->GetMesh()->GetSocketLocation(FName("Katana_Top"));;
	UWorld* World = GetWorld();
	FCollisionQueryParams Params;

	if (World)
	{
		World->LineTraceSingleByChannel(
			Hit,
			Start,
			End, 
			ECC_Visibility,
			Params
		);

		if (Hit.bBlockingHit && m_bCanDamage)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::Printf(TEXT("Hit: %s"), *Hit.GetActor()->GetName())); 
			}
			//DrawDebugLine(World, Start, End, FColor::Green, false, 2.f);
		}
		else
		{
		//	DrawDebugLine(World, Start, End, FColor::Red, false, 2.f);
		}
	}
	
}

void UCombatComponent::StartSwordBlock()
{
	m_bIsBlocking = true;
	m_pPlayerCharacter->GetCustomMovementComponent()->StopSprinting();
	UE_LOG(LogTemp, Log, TEXT("BlockingStart"));
}

void UCombatComponent::EndSwordBlock()
{
	m_bIsBlocking = false;
	UE_LOG(LogTemp, Log, TEXT("BlockingEnd"));
}

void UCombatComponent::EndAttack()
{
	m_bIsAttacking = false;
}

void UCombatComponent::NextAttackedQueued()
{
	m_bCanQueuNextAttack = true;
}


void UCombatComponent::SetNextComboSegment(FName Combo)
{
	ComboAttack = Combo;
}

void UCombatComponent::SetDefaultComboState()
{
	ComboAttack = DefaultComboAttack;
}

void UCombatComponent::StartFiringProj()
{
	m_bStartingAbility1 = true;

	AbilityProjectile = GetWorld()->SpawnActor<AAbilityProjectile>(AbilityClass, m_pPlayerCharacter->GetMesh1P()->GetSocketTransform(FName("LeftHand_Socket")));

	if (AbilityProjectile)
	{
		//AbilityProjectile->Throw(false);
		const USkeletalMeshSocket* LeftHandSocket = m_pPlayerCharacter->GetMesh1P()->GetSocketByName(FName("LeftHand_Socket"));
		if (LeftHandSocket)
		{
			LeftHandSocket->AttachActor(AbilityProjectile, m_pPlayerCharacter->GetMesh1P());
		}
		AbilityProjectile->SetOwner(m_pPlayerCharacter);
	}

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Orange, FString::Printf(TEXT("Ability")));
}

void UCombatComponent::ShootProjectile()
{
	AbilityProjectile->Destroy();
	
	const USkeletalMeshSocket* HandSocket = m_pPlayerCharacter->GetMesh1P()->GetSocketByName(FName("LeftHand_Socket"));
	FTransform SocketTransform = HandSocket->GetSocketTransform(m_pPlayerCharacter->GetMesh1P());

	FVector ToTarget = HitTarget - SocketTransform.GetLocation();
	FRotator TargetRotation = ToTarget.Rotation();
	FActorSpawnParameters SpawnParams;

	AbilityProjectile = GetWorld()->SpawnActor<AAbilityProjectile>(AbilityClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);

	if (AbilityProjectile)
	{
		AbilityProjectile->Throw();
		AbilityProjectile->SetOwner(m_pPlayerCharacter);
		m_bStartingAbility1 = false;
	}

	//AbilityProjectile->Throw();

}

void UCombatComponent::ThrowTracer(FHitResult& TracerHitResult)
{
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection
	);

	if (bScreenToWorld)
	{
		FVector Start = CrosshairWorldPosition;

		FVector End = Start + CrosshairWorldDirection * 8000.f;

		GetWorld()->LineTraceSingleByChannel(
			TracerHitResult,
			Start,
			End,
			ECollisionChannel::ECC_Visibility
		);
		if (!TracerHitResult.bBlockingHit)
		{
			TracerHitResult.ImpactPoint = End;
			HitTarget = End;
		}
		else
		{
			HitTarget = TracerHitResult.ImpactPoint;
			DrawDebugSphere(
				GetWorld(),
				TracerHitResult.ImpactPoint,
				12.f,
				12,
				FColor::Red
			);
		}
	}

}
