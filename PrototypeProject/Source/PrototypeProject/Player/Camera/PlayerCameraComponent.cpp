// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCameraComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"

UPlayerCameraComponent::UPlayerCameraComponent():
m_fBaseFOV(90.f),
m_fSprintAddedFOV(15.f)
{
	PrimaryComponentTick.bCanEverTick = true;

	m_fChangedFOV = FieldOfView;
}

void UPlayerCameraComponent::BeginPlay()
{
}

void UPlayerCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
}

void UPlayerCameraComponent::FOVTimelineProgress(float fFOVProgress)
{

}

void UPlayerCameraComponent::UpdateFOV(EMovementState eMovementState)
{

}
