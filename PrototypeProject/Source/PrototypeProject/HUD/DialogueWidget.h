// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueWidget.generated.h"

class UGridPanel;
class USizeBox;
class UTextBlock;
class UBorder;
class UListView;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitDelegate);


UENUM(BlueprintType)
enum class EDialogueState : uint8
{
	Speak		UMETA(DisplayName = "Speaking"),
	Reply		UMETA(DisplayName = "Replying"),

};

UCLASS()
class PROTOTYPEPROJECT_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	//UPROPERTY(meta = (BindWidget))
	//UGridPanel* DialogueGrid;
	
	UPROPERTY(meta = (BindWidget))
	USizeBox* SpeakSizeBox;

	UPROPERTY(meta = (BindWidget))
	USizeBox* ReplySizeBox;

	UPROPERTY(meta = (BindWidget))
	UBorder* SpeakBorder;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SpeakText;

	UPROPERTY(meta = (BindWidget))
	UListView* ReplyListView;

	UPROPERTY(BlueprintAssignable, Category = "OnExit")
	FOnExitDelegate OnExitDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDialogueState eDialogueState;

public:

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void Speak(FText NPCSpeakText);

	void Reply(TArray<FText> NPCRepliesText);

	void Exit();

	void SetDialogueState(EDialogueState eNewDialogueState);

};
