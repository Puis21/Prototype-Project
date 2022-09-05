// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PrototypeProject/Player/Components/InteractionInterface.h"

#include "NPCCharacter.generated.h"

class UNPCDialogueComponent;
class UWidgetComponent;
class ANPCController;

UCLASS()
class PROTOTYPEPROJECT_API ANPCCharacter : public ACharacter, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCCharacter();

	UPROPERTY(Category = NPC, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Dialogue Component")
	UNPCDialogueComponent* m_ACNPCDialogueComponent;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Interaction Widget")
	UWidgetComponent* InteractionWidget;

	UPROPERTY(EditAnywhere, Category = "Behavior Tree", meta = (AlowPrivateAccess = "true"))
	class UBehaviorTree* BehaviorTree;

	ANPCController* NPCController;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact_Implementation() override; // Also include a blueprint function

	virtual void InteractPure() override; // C++ only function
	virtual void ShowInteractionWidget() override;
	virtual void HideInteractionWidget() override;

public:

	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return BehaviorTree; }

};
