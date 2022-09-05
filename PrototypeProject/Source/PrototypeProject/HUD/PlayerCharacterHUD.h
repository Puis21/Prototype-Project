// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerCharacterHUD.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEPROJECT_API APlayerCharacterHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, Category = Interaction)
	TSubclassOf<class UUserWidget> InteractionWidgetClass;

	UPROPERTY(EditAnywhere, Category = Dialogue)
	TSubclassOf<class UUserWidget> DialogueWidgetClass;

	class UInteractWidget* InteractionWidget;

	class UDialogueWidget* DialogueWidget;
	
	virtual void DrawHUD() override;

	void AddInteractionOverlay();
	void RemoveInteractionOverlay();

	void AddDialogueOverlay();

protected:
	
	virtual void BeginPlay() override;
};
