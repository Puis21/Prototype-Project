// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"
#include "PrototypeProject/NPC/Components/NPCDialogueComponent.h"
#include "BehaviorTree/BlackboardComponent.h" //mby not needed :)
#include "BehaviorTree/BehaviorTree.h"
#include "PrototypeProject/NPC/NPCController.h"
#include "Components/WidgetComponent.h"
#include "PrototypeProject/HUD/PlayerCharacterHUD.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_ACNPCDialogueComponent = CreateDefaultSubobject<UNPCDialogueComponent>(TEXT("Dialogue Component"));

}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParams;
	NPCController = GetWorld()->SpawnActor<ANPCController>(SpawnParams);
}

// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCCharacter::InteractBP_Implementation(APlayerCharacter* PlayerChar)
{
	UE_LOG(LogTemp, Log, TEXT("Implementation"));
}

void ANPCCharacter::InteractPure()
{
	PlayerHUD = Cast<APlayerCharacterHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (PlayerHUD && NPCController)
	{
		PlayerHUD->AddDialogueOverlay();
		//PlayerHUD->RemoveInteractionOverlay();
		//NPCController->StartBehaviorTree();
		NPCController->GetBlackboardComponent()->InitializeBlackboard(*(BehaviorTree->BlackboardAsset));
		NPCController->RunBehaviorTree(BehaviorTree);
		//NPCController->UseBlackboard(BlackBoard, NPCController->GetBlackboardComponent());
		NPCController->GetBlackboardComponent()->SetValueAsObject(TEXT("DialogueWidget"), PlayerHUD->GetDialogueWidget());
		UE_LOG(LogTemp, Log, TEXT("Interacted"));
	}
}

void ANPCCharacter::ShowInteractionWidget()
{
	PlayerHUD = Cast<APlayerCharacterHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (PlayerHUD)
	{
		PlayerHUD->AddInteractionOverlay();
	}
}

void ANPCCharacter::HideInteractionWidget()
{
	PlayerHUD = Cast<APlayerCharacterHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (PlayerHUD)
	{
		PlayerHUD->RemoveInteractionOverlay();
	}
}

