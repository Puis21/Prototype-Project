// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"
#include "PrototypeProject/NPC/Components/NPCDialogueComponent.h"
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
	
}

// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCCharacter::Interact_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("Implementation"));
}

void ANPCCharacter::InteractPure()
{
	UE_LOG(LogTemp, Log, TEXT("Pure"));
}

void ANPCCharacter::ShowInteractionWidget()
{
	APlayerCharacterHUD* HUD = Cast<APlayerCharacterHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (HUD)
	{
		HUD->AddInteractionOverlay();
	}
}

void ANPCCharacter::HideInteractionWidget()
{
	APlayerCharacterHUD* HUD = Cast<APlayerCharacterHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (HUD)
	{
		HUD->RemoveInteractionOverlay();
	}
}

