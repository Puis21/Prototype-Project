// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCController.h"

ANPCController::ANPCController()
{

}

void ANPCController::BeginPlay()
{
	Super::BeginPlay();

}

void ANPCController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (InPawn == nullptr) return;

	NPC = Cast<ANPCCharacter>(InPawn);

}
