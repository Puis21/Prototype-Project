// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasePlayer.h"
#include "PrototypeProject/Enemy/EnemyController.h"
#include "PrototypeProject/BlackboardKeys.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"

UChasePlayer::UChasePlayer(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyController* const Controller = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	FVector const PlayerLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(GetSelectedBlackboardKey());

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, PlayerLocation);

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;

}