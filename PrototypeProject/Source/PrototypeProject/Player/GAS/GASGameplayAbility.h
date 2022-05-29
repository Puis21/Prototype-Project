// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PrototypeProject/PrototypeProject.h"
#include "GASGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEPROJECT_API UGASGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UGASGameplayAbility();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability")
	EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;

};
