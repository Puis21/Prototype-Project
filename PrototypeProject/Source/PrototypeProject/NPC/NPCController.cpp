// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCController.h"
#include "PrototypeProject/NPC/NPCCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

ANPCController::ANPCController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);
}

void ANPCController::BeginPlay()
{
	Super::BeginPlay();

}

void ANPCController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (InPawn == nullptr) return;

	NPC = Cast<ANPCCharacter>(InPawn);
	if (NPC)
	{
		/*if (NPC->GetBehaviorTree())
		{
			RunBehaviorTree(NPC->GetBehaviorTree());
			UseBlackboard(NPC->GetBlackboard(), BlackboardComponent);
			BlackboardComponent->SetValueAsObject(TEXT("DialogueWidget"), NPC->GetDialogueWidget());
		}*/
	}
}

void ANPCController::StartBehaviorTree()
{
	UE_LOG(LogTemp, Log, TEXT("BehaviorTree"));
	if (NPC)
	{
		if (NPC->GetBehaviorTree())
		{
			BlackboardComponent->InitializeBlackboard(*(NPC->GetBehaviorTree()->BlackboardAsset));
			RunBehaviorTree(NPC->GetBehaviorTree());
			UseBlackboard(NPC->GetBlackboard(), BlackboardComponent);
			BlackboardComponent->SetValueAsObject(TEXT("DialogueWidget"), NPC->GetDialogueWidget());
			UE_LOG(LogTemp, Log, TEXT("BehaviorTree2"));
		}
	}
}
