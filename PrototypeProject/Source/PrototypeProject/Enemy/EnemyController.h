// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "Perception/AIPerceptionTypes.h"

#include "EnemyController.generated.h"

UENUM(BlueprintType)
enum class EEnemyState: uint8
{
	Patrolling		UMETA(DisplayName = "Patrolling"),
	Chasing			UMETA(DisplayName = "Chasing"),
	Investigating	UMETA(DisplayName = "Investigating"),
	Combat			UMETA(DisplayName = "Combat"),
	Attacking		UMETA(DisplayName = "Attacking")

};

UCLASS()
class PROTOTYPEPROJECT_API AEnemyController : public AAIController
{
	GENERATED_BODY()

public:

	AEnemyController();
	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category= " AI Behavior", meta = (AlowPrivateAccess = "true"))
	class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = " AI Behavior", meta = (AlowPrivateAccess = "true"))
	class UBehaviorTreeComponent* BehaviorTreeComponent;

	class UAISenseConfig_Sight* SightConfig;
	class UAISenseConfig_Prediction* PredictionConfig;

	class UAIPerceptionSystem* PercSystemation;

	class UAISense_Prediction* PredictionSense;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* TargetFocus;

	class ABP_EnemyCharacter* Enemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEnemyState eEnemyState;

private:

	UFUNCTION()
	void OnPawnDetected(AActor* actor, FAIStimulus const stimulus);

	UFUNCTION()
	void OnTargetDetected(TArray<AActor*> const& Actors);

	void SetupPerceptionSystem();

	void SetMovementState(EEnemyState& eNewMovementState);

	UFUNCTION(BlueprintCallable)
	void StartMovementStateSwitch(EEnemyState eNewMovementState);

	bool m_bPlayerDetected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float m_fMeleeRange;

public:

	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
	FORCEINLINE ABP_EnemyCharacter* GetEnemy() const { return Enemy; }

};
