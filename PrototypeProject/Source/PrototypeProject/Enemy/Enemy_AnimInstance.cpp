// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_AnimInstance.h"
#include "PrototypeProject/Enemy/BP_EnemyCharacter.h"


void UEnemy_AnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	//m_pOwnerPawn = Cast<ABP_EnemyCharacter>(TryGetPawnOwner());
}

void UEnemy_AnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	/*if (m_pOwnerPawn == nullptr)
	{
		m_pOwnerPawn = Cast<ABP_EnemyCharacter>(TryGetPawnOwner());
	}
	if (m_pOwnerPawn == nullptr) return;

	FVector Velocity = m_pOwnerPawn->GetVelocity();
	Velocity.Z = 0.f;
	speed = Velocity.Size();*/
}

void UEnemy_AnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (m_pOwnerPawn == nullptr)
	{
		m_pOwnerPawn = Cast<ABP_EnemyCharacter>(TryGetPawnOwner());
	}

	if (m_pOwnerPawn)
	{
		FVector Velocity = m_pOwnerPawn->GetVelocity();
		Velocity.Z = 0.f;
		speed = Velocity.Size();
	}
}