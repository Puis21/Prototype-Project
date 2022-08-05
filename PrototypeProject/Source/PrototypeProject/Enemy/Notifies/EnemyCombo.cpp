// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombo.h"
#include "PrototypeProject/Enemy/BP_EnemyCharacter.h"

void UEnemyCombo::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
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
				m_pEnemy->SetNextComboSegment(NextCombo);
				m_pEnemy->EndAttack();
			}
		}
	}
}

void UEnemyCombo::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
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
				m_pEnemy->SetDefaultComboState();
			}
		}
	}
}