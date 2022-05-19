// Fill out your copyright notice in the Description page of Project Settings.


#include "NotifyState_Combo.h"
#include "PrototypeProject/Player/Components/CombatComponent.h"

void UNotifyState_Combo::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
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
				m_pAMeleeComp->SetNextComboSegment(NextCombo);
			}
		}
	}
}

void UNotifyState_Combo::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
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
				m_pAMeleeComp->SetDefaultComboState();
			}
		}
	}
}