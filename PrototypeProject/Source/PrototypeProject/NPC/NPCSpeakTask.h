// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "NPCSpeakTask.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEPROJECT_API UNPCSpeakTask : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	UNPCSpeakTask(FObjectInitializer const& object_initializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	class UWidgetComponent* InteractionWidget;

};
