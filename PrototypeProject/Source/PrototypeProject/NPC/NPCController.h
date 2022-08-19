// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPCController.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEPROJECT_API ANPCController : public AAIController
{
	GENERATED_BODY()

public:

	ANPCController();
	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	class ANPCCharacter* NPC;
	
};
