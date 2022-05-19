// Fill out your copyright notice in the Description page of Project Settings.


#include "Notify_EndAttack.h"
#include "PrototypeProject/Player/Components/CombatComponent.h"

void UNotify_EndAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
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
				m_pAMeleeComp->EndAttack();
			}
		}
	}
}