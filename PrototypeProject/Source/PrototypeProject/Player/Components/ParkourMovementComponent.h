// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ParkourMovementComponent.generated.h"


class APlayerCharacter;				
class UPlayerMovementComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPEPROJECT_API UParkourMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UParkourMovementComponent();

	virtual void InitializeComponent() override;

private:

	APlayerCharacter* m_pPlayerCharacter;

	UPlayerMovementComponent* m_pCharacterMovementComponent;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	APlayerCharacter* GetPlayer() const { return m_pPlayerCharacter; }
	UPlayerMovementComponent* GetCharacterMovementComponent() const { return m_pCharacterMovementComponent; }
		
};
