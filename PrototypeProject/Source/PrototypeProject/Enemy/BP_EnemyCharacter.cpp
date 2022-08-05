// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_EnemyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABP_EnemyCharacter::ABP_EnemyCharacter():
m_bIsAttacking(false),
m_bCanDamage(false),
m_fSwingSpeed(1.f),
m_bCanQueuNextAttack(false)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 600.f, 0.f);

	DefaultComboAttack = TEXT("Swing_01");
}

// Called when the game starts or when spawned
void ABP_EnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	AnimInstance = GetMesh()->GetAnimInstance();

}

// Called every frame
void ABP_EnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_bIsAttacking)
	{
		SwordAttackTrace();
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::Printf(TEXT("Enemy Attacking: %s"), m_bIsAttacking ? TEXT("true") : TEXT("false")));
	}

}

void ABP_EnemyCharacter::SwordAttack()
{
	UE_LOG(LogTemp, Log, TEXT("Attacked1"));
	if (AnimInstance && SwordComboMontage)
	{
		UE_LOG(LogTemp, Log, TEXT("Attacked2"));
		if (!m_bIsAttacking)
		{
			UE_LOG(LogTemp,Log,TEXT("Attacked3"));
			AnimInstance->Montage_Play(SwordComboMontage, m_fSwingSpeed);
			AnimInstance->Montage_JumpToSection(ComboAttack);
			//m_bIsAttacking = true;
		}
	}

}

void ABP_EnemyCharacter::SwordAttackTrace()
{
	/*FHitResult Hit;
	FVector Start = KatanaEquipped->GetMesh()->GetSocketLocation(FName("Katana_Bottom"));
	FVector End = KatanaEquipped->GetMesh()->GetSocketLocation(FName("Katana_Top"));
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
	}*/
}

void ABP_EnemyCharacter::EndAttack()
{
	m_bIsAttacking = false;
	UE_LOG(LogTemp, Log, TEXT("End Attack"));
}

void ABP_EnemyCharacter::NextAttackedQueued()
{
	m_bCanQueuNextAttack = true;
}

void ABP_EnemyCharacter::SetNextComboSegment(FName Combo)
{
	ComboAttack = Combo;
}

void ABP_EnemyCharacter::SetDefaultComboState()
{
	ComboAttack = DefaultComboAttack;
}