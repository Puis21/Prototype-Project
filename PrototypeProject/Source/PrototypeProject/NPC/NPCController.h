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

	void StartBehaviorTree();

public:

	UPROPERTY(BlueprintReadWrite, Category = " NPC Behavior", meta = (AlowPrivateAccess = "true"))
	class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = " NPC Behavior", meta = (AlowPrivateAccess = "true"))
	class UBehaviorTreeComponent* BehaviorTreeComponent;

	class ANPCCharacter* NPC;

public:

	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
	FORCEINLINE ANPCCharacter* GetNPC() const { return NPC; }
	
};
