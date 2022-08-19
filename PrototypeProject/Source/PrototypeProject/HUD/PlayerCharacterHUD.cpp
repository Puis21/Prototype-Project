// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterHUD.h"
#include "GameFramework/PlayerController.h"
#include "InteractWidget.h"

void APlayerCharacterHUD::DrawHUD()
{
	Super::DrawHUD();


}

void APlayerCharacterHUD::BeginPlay()
{
	Super::BeginPlay();

	//AddInteractionOverlay();
}

void APlayerCharacterHUD::RemoveInteractionOverlay()
{
	//UE_LOG(LogTemp, Log, TEXT("Hidden"));
	InteractionWidget->RemoveFromParent();
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
