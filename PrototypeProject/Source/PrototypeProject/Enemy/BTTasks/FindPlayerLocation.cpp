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

	/*m_fMaxRangeFromPlayer = 800.0f;
	m_fMinRangeFromPlayer = 300.0f;
	m_fMinDistanceToCover = 250.f;
	m_iMaxIterations = 10;*/
}

EBTNodeResult::Type UFindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (player)
	{
		FVector const PlayerLocation = player->GetActorLocation();
		if (SearchRandom)
		{
			FNavLocation NavLoc;

			UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
			if (NavSystem->GetRandomPointInNavigableRadius(PlayerLocation, SearchRadius, NavLoc, nullptr))
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), NavLoc.Location);
			}
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
		}

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	
	return EBTNodeResult::Failed;
}

/*// Get AI Controller
	AEnemyController* pAIBaseController = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	// Get Player Character
	ACharacter* const Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	// Get BB
	UBlackboardComponent* pBlackboardComp = pAIBaseController->GetBlackboardComponent();

	if (pAIBaseController && Player && pBlackboardComp)
	{
		// Get player location
		const FVector kv3PlayerLocation = Player->GetActorLocation();

		// Declare and get the current UNavigationSystemV1
		UNavigationSystemV1* pNavSys = UNavigationSystemV1::GetCurrent(GetWorld());
		// Declare Nav Mesh Search Location
		FNavLocation SearchLocation;
		// Declare Search Radius
		const float kfSearchRadius = 300.0f;

		// Declare bool for while loop
		// This bool will update every time we try to find a random point we can move to
		bool bFoundValidTargetLocation = false;

		// Declare a max amount of times this while loop can run
		// This makes sure one enemy doesn't freeze the entire game trying to find an impossible location
		int iCurrentAttempts = 0;

		// While we haven't found a valid location or while we haven't reached max number of attempts
		while ((!bFoundValidTargetLocation) || (iCurrentAttempts < m_iMaxIterations))
		{
			// Get random target location
			const FVector kv3NewTargetLocation = GetNewRandomTargetLocation(kv3PlayerLocation);

			// Search for the player's location in the availabe nav mesh
			bFoundValidTargetLocation = pNavSys->GetRandomPointInNavigableRadius(kv3NewTargetLocation, kfSearchRadius, SearchLocation, nullptr);

			// If found valid target location, check if it is distant enough from our current location
			if (bFoundValidTargetLocation)
			{
				// Calculate Minimum Distance Squared
				const float kfMinDistanceSquared = m_fMinDistanceToCover * m_fMinDistanceToCover;
				// Calculate New Target Location Distance Squared ( distance from our current location to the new location )
				const float kfNewTargetLocationDistanceSquared = (kv3NewTargetLocation - kv3PlayerLocation).SizeSquared();

				// If the new distance is lower than the minimum distance, turn our bool to false, this location is still not valid after all
				if (kfNewTargetLocationDistanceSquared < kfMinDistanceSquared)
				{
					bFoundValidTargetLocation = false;
				}
			}

			// Increment current attempts
			iCurrentAttempts++;
		}

		// If found a valid location
		if (bFoundValidTargetLocation)
		{
			// Update the new target location
			pBlackboardComp->SetValueAsVector("PathingTargetLocation", SearchLocation.Location);
			// Debug Message, print new target location
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, FString("Updated Target Location to ") + SearchLocation.Location.ToString());
			return EBTNodeResult::Succeeded;
		}
		// If failed to find valid location
		else
		{
			// Debug Message, print error message
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, FString("Failed trying to get Random Target Location for enemy to walk to"));
			return EBTNodeResult::Aborted;
		}
	}
	return EBTNodeResult::Failed;

FVector UFindPlayerLocation::GetNewRandomTargetLocation(const FVector kv3Origin)
{
	// Get random 2D Direction, normalized
	const FVector2D kv2RandomDirection = FVector2D(FMath::FRandRange(-1.0f, 1.0f), FMath::FRandRange(-1.0f, 1.0f)).GetSafeNormal();

	// Get random distance, inside our desired range
	const float kfRandomDistance = FMath::RandRange(m_fMinRangeFromPlayer, m_fMaxRangeFromPlayer);

	// Get how far off from the player we are moving to
	const FVector2D kv2RandomHorizontalOffset(kv2RandomDirection * kfRandomDistance);

	// Get 2D world position of our target location
	const FVector2D kv2WorldTargetLocation(kv3Origin.X + kv2RandomHorizontalOffset.X, kv3Origin.Y + kv2RandomHorizontalOffset.Y);

	// Get 3D new target world location ( Player Location + Pseudo Random Offset Within Range )
	const FVector kv3NewTargetLocation(kv2WorldTargetLocation.X, kv2WorldTargetLocation.Y, kv3Origin.Z);

	// Return new 3D target location
	return kv3NewTargetLocation;
}*/