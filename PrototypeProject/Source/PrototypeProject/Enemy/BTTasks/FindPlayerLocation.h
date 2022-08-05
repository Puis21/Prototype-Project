// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"

#include "BehaviorTree/BehaviorTreeTypes.h"

#include "FindPlayerLocation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROTOTYPEPROJECT_API UFindPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:

	UFindPlayerLocation(FObjectInitializer const& object_initializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowPrivateAccess = "true"))
	bool SearchRandom = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowPrivateAccess = "true"))
	float SearchRadius = 150.f;

	// How far away we are willing to look for a random position to move to, in range of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Max Range From Player", Category = AI, meta = (AllowPrivateAccess = "true"))
		float m_fMaxRangeFromPlayer;

	// How close we are willing to look for a random position to move to, in range of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Min Range From Player", Category = AI, meta = (AllowPrivateAccess = "true"))
		float m_fMinRangeFromPlayer;

	// How far this new target location needs to be from our current location
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Min Distance To Cover", Category = AI, meta = (AllowPrivateAccess = "true"))
		float m_fMinDistanceToCover;

	// Amount of times that we attempt to get a random location
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Max Iterations", Category = AI, meta = (AllowPrivateAccess = "true"))
		int m_iMaxIterations;

	FVector GetNewRandomTargetLocation(const FVector kv3Origin);
};
