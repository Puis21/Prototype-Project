// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "CirclePlayer.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROTOTYPEPROJECT_API UCirclePlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:

	UCirclePlayer(FObjectInitializer const& object_initializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
