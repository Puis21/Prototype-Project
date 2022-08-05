// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyEndAttack.h"
#include "PrototypeProject/Enemy/BP_EnemyCharacter.h"

void UEnemyEndAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			ABP_EnemyCharacter* m_pEnemy = nullptr;
			m_pEnemy = Cast<ABP_EnemyCharacter>(Owner->GetComponentByClass(ABP_EnemyCharacter::StaticClass()));
			if (nullptr != m_pEnemy)
			{
				m_pEnemy->EndAttack();
			}
		}
	}
}