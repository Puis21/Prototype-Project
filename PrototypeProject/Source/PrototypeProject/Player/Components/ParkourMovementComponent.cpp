// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourMovementComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"

// Sets default values for this component's properties
UParkourMovementComponent::UParkourMovementComponent()
{
}

void UParkourMovementComponent::InitializeComponent()
{
	Super::InitializeComponent();
}

// Called when the game starts
void UParkourMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	m_pPlayerCharacter = Cast<APlayerCharacter>(GetOwner());
	m_pCharacterMovementComponent = Cast<UPlayerMovementComponent>(m_pPlayerCharacter->GetCustomMovementComponent());
	
}

