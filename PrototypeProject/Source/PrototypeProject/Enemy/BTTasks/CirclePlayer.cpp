// Fill out your copyright notice in the Description page of Project Settings.


#include "CirclePlayer.h"
#include "PrototypeProject/Enemy/EnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

UCirclePlayer::UCirclePlayer(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Circle Player");
}

EBTNodeResult::Type UCirclePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* const Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	auto const Controller = Cast<AEnemyController>(OwnerComp.GetAIOwner());
	auto const Enemy = Controller->GetPawn();	

	FVector v3ForwardOffset = Enemy->GetActorForwardVector() * 150.f;
	FVector v3RightOffset = Enemy->GetActorRightVector() * 150.f;
	FVector v3EnemyLoc = Enemy->GetActorLocation();

	int RandomInt = UKismetMathLibrary::RandomIntegerInRange(0, 1);

	if (RandomInt == 0)
	{
		FVector v3RightStrafe = v3EnemyLoc + v3ForwardOffset + v3RightOffset;
		DrawDebugLine(GetWorld(), v3EnemyLoc, v3RightStrafe, FColor::Purple, false, 2.5f);
		Controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), v3RightStrafe);

		UE_LOG(LogTemp, Log, TEXT("RIGHT"));

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;

	}
	else if (RandomInt == 1)
	{
		FVector v3LeftStrafe = v3EnemyLoc + v3ForwardOffset + (-v3RightOffset);
		DrawDebugLine(GetWorld(), v3EnemyLoc, v3LeftStrafe, FColor::Purple, false, 2.5f);
		Controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), v3LeftStrafe);

		UE_LOG(LogTemp, Log, TEXT("LEFT"));

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;

	}

	return EBTNodeResult::Failed;

}