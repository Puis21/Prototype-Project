// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"

#include "BP_EnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "PrototypeProject/BlackboardKeys.h"
#include "PrototypeProject/Player/PlayerCharacter.h"

#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AEnemyController::AEnemyController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);

	SetupPerceptionSystem();
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(InPawn == nullptr) return;

	ABP_EnemyCharacter* Enemy = Cast<ABP_EnemyCharacter>(InPawn);
	if(Enemy)
	{
		if(Enemy->GetBehaviorTree())
		{
			BlackboardComponent->InitializeBlackboard(*(Enemy->GetBehaviorTree()->BlackboardAsset));
			RunBehaviorTree(Enemy->GetBehaviorTree());
		}
	}
}

void AEnemyController::OnPawnDetected(AActor* actor, FAIStimulus const stimulus)
{
	if (auto const ch = Cast<APlayerCharacter>(actor))
	{
		GetBlackboardComponent()->SetValueAsBool(bb_keys::can_see_player, stimulus.WasSuccessfullySensed());
		//SetFocus(actor, EAIFocusPriority::Gameplay);
	}
}

void AEnemyController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
	SightConfig->SightRadius = 500.f;
	SightConfig->LoseSightRadius = SightConfig->SightRadius + 50.f;
	SightConfig->PeripheralVisionAngleDegrees = 90.f;
	SightConfig->SetMaxAge(5.f);
	//SightConfig->AutoSuccessRangeFromLastSeenLocation = 1500.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);

}
