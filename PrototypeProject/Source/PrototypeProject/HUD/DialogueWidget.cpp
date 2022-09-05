// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWidget.h"
#include "Components/TextBlock.h"
#include "Components/SizeBox.h"

void UDialogueWidget::Speak(FText NPCSpeakText)
{
	SpeakText->SetText(NPCSpeakText);
	SetDialogueState(EDialogueState::Speak);
}

void UDialogueWidget::Reply(TArray<FText> NPCRepliesText)
{
	SetDialogueState(EDialogueState::Reply);
}

void UDialogueWidget::Exit()
{

}

void UDialogueWidget::SetDialogueState(EDialogueState eNewDialogueState)
{
	switch (eNewDialogueState)
	{
		case EDialogueState::Reply:
		{
			ReplySizeBox->SetVisibility(ESlateVisibility::HitTestInvisible);
			SpeakSizeBox->SetVisibility(ESlateVisibility::Collapsed);
		}
		break;
		case EDialogueState::Speak:
		{
			ReplySizeBox->SetVisibility(ESlateVisibility::Collapsed);
			SpeakSizeBox->SetVisibility(ESlateVisibility::HitTestInvisible);
		}
		break;
	}
}