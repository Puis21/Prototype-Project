// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCSpeakTask.h"
#include "Components/WidgetComponent.h"

UNPCSpeakTask::UNPCSpeakTask(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("NPC Speak Task");
}

EBTNodeResult::Type UNPCSpeakTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}