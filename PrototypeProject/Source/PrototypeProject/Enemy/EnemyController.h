// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "Perception/AIPerceptionTypes.h"

#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEPROJECT_API AEnemyController : public AAIController
{
	GENERATED_BODY()

public:

	AEnemyController();
	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category= " AI Behavior", meta = (AlowPrivateAccess = "true"))
	class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = " AI Behavior", meta = (AlowPrivateAccess = "true"))
	class UBehaviorTreeComponent* BehaviorTreeComponent;

	class UAISenseConfig_Sight* SightConfig;

private:

	UFUNCTION()
	void OnPawnDetected(AActor* actor, FAIStimulus const stimulus);

	void SetupPerceptionSystem();

public:

	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
};
