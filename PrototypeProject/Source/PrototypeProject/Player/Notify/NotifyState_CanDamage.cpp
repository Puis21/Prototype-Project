// Fill out your copyright notice in the Description page of Project Settings.


#include "NotifyState_CanDamage.h"
#include "PrototypeProject/Player/Components/CombatComponent.h"

void UNotifyState_CanDamage::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			UCombatComponent* m_pAMeleeComp = nullptr;
			m_pAMeleeComp = Cast<UCombatComponent>(Owner->GetComponentByClass(UCombatComponent::StaticClass()));
			if (nullptr != m_pAMeleeComp)
			{
				m_pAMeleeComp->SetCanDamage(true);
			}
		}
	}
}

void UNotifyState_CanDamage::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			UCombatComponent* m_pAMeleeComp = nullptr;
			m_pAMeleeComp = Cast<UCombatComponent>(Owner->GetComponentByClass(UCombatComponent::StaticClass()));
			if (nullptr != m_pAMeleeComp)
			{
				m_pAMeleeComp->SetCanDamage(false);
			}
		}
	}
}