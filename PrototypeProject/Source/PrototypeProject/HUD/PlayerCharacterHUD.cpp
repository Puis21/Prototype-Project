// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterHUD.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "DialogueWidget.h"
#include "InteractWidget.h"

void APlayerCharacterHUD::DrawHUD()
{
	Super::DrawHUD();


}

void APlayerCharacterHUD::BeginPlay()
{
	Super::BeginPlay();

	//AddInteractionOverlay();
	//AddDialogueOverlay();
}

void APlayerCharacterHUD::AddDialogueOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController && DialogueWidgetClass && InteractionWidget)
	{
		DialogueWidget = CreateWidget<UDialogueWidget>(PlayerController, DialogueWidgetClass);
		UWidgetLayoutLibrary::RemoveAllWidgets(InteractionWidget);
		DialogueWidget->AddToViewport();
		PlayerController->SetInputMode(FInputModeUIOnly());
		PlayerController->SetShowMouseCursor(true);
	}
}

void APlayerCharacterHUD::RemoveInteractionOverlay()
{
	//UE_LOG(LogTemp, Log, TEXT("Hidden"));
	if (InteractionWidget)
	{
		UWidgetLayoutLibrary::RemoveAllWidgets(InteractionWidget);
		//InteractionWidget->RemoveFromViewport();
	}
}

void APlayerCharacterHUD::AddInteractionOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController && InteractionWidgetClass)
	{
		InteractionWidget = CreateWidget<UInteractWidget>(PlayerController, InteractionWidgetClass);
		InteractionWidget->AddToViewport();
	}
	
}
