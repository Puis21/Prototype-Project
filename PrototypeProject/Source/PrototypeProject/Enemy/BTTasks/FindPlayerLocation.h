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
};
