// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"
#include "PrototypeProject/Player/Components/SlideComponent.h"
#include "PrototypeProject/Player/Components/CombatComponent.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	m_pOwnerPawn = Cast<APlayerCharacter>(TryGetPawnOwner());
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (m_pOwnerPawn ==  nullptr)
	{
		m_pOwnerPawn = Cast<APlayerCharacter>(TryGetPawnOwner());
	}
	if(m_pOwnerPawn == nullptr) return;

	FVector Velocity = m_pOwnerPawn->GetVelocity();
	Velocity.Z = 0.f;
	speed = Velocity.Size();
	bIsInAir = m_pOwnerPawn->GetCharacterMovement()->IsFalling();
	bIsAccelerating = m_pOwnerPawn->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f ? true : false;
	bIsCrouching = m_pOwnerPawn->GetSlideComponent()->GetIsCrouched();
	bIsSliding = m_pOwnerPawn->GetSlideComponent()->GetIsSliding();
	bIsBlocking = m_pOwnerPawn->GetCombatComponent()->GetIsBlocking();
	bCasting = m_pOwnerPawn->GetCombatComponent()->GetStarting();
}
