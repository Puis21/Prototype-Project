// Fill out your copyright notice in the Description page of Project Settings.


#include "FindRandomLoc.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "PrototypeProject/Enemy/EnemyController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "PrototypeProject/BlackboardKeys.h"

UFindRandomLoc::UFindRandomLoc(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Find Random Location");
}

EBTNodeResult::Type UFindRandomLoc::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto const controller = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	auto const npc = controller->GetPawn();

	FVector const Origin = npc->GetActorLocation();
	FNavLocation NavLoc;

	UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	if (NavSystem->GetRandomPointInNavigableRadius(Origin, SearchRadius, NavLoc, nullptr))
	{
		controller->GetBlackboardComponent()->SetValueAsVector(bb_keys::target_location, NavLoc.Location);
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}