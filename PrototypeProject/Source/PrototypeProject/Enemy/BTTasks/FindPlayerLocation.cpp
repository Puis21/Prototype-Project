// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "PrototypeProject/Enemy/EnemyController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "PrototypeProject/BlackboardKeys.h"

UFindPlayerLocation::UFindPlayerLocation(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UFindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	auto const controller = Cast<AEnemyController>(OwnerComp.GetAIOwner());

	FVector const PlayerLocation = player->GetActorLocation();
	if (SearchRandom)
	{
		FNavLocation NavLoc;

		UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
		if (NavSystem->GetRandomPointInNavigableRadius(PlayerLocation, SearchRadius, NavLoc, nullptr))
		{
			controller->GetBlackboardComponent()->SetValueAsVector(bb_keys::target_location, NavLoc.Location);
		}
	}
	else
	{
		controller->GetBlackboardComponent()->SetValueAsVector(bb_keys::target_location, PlayerLocation);
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}