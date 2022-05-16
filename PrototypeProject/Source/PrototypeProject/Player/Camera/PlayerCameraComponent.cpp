// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCameraComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"

UPlayerCameraComponent::UPlayerCameraComponent():
m_fBaseFOV(90.f),
m_fSprintAddedFOV(10.f),
m_fCrouchAddedFOV(-5.f),
m_fSlideAddedFOV(15.f)
{
	PrimaryComponentTick.bCanEverTick = true;

	m_fChangedFOV = FieldOfView;
}

void UPlayerCameraComponent::BeginPlay()
{
	m_pOwningPlayer = Cast<APlayerCharacter>(GetOwner());

	if (m_pCameraFOVCurve)
	{
		FOnTimelineFloat FOVTimelineProgress;
		FOVTimelineProgress.BindUFunction(this, FName("FOVTimelineProgress"));
		FOVTimeline.AddInterpFloat(m_pCameraFOVCurve, FOVTimelineProgress);
	}
	
}

void UPlayerCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (FOVTimeline.IsPlaying())
	{
		FOVTimeline.TickTimeline(DeltaTime);
	}
}

void UPlayerCameraComponent::FOVTimelineProgress(float fFOVProgress)
{
	float FOV = FieldOfView;
	FOV = FMath::Lerp(FieldOfView, m_fChangedFOV, fFOVProgress);
	FieldOfView = FOV;
}

void UPlayerCameraComponent::UpdateCameraShake()
{

}

void UPlayerCameraComponent::UpdateFOV(EMovementState eMovementState)
{

	switch (eMovementState)
	{
	case EMovementState::Walking:
		m_fChangedFOV = m_fBaseFOV;
		break;
	case EMovementState::Sprinting:
		m_fChangedFOV = m_fBaseFOV + m_fSprintAddedFOV;
		break;
	case EMovementState::Crouching:
		m_fChangedFOV = m_fBaseFOV + m_fCrouchAddedFOV;
		break;
	case EMovementState::Sliding:
		m_fChangedFOV = m_fBaseFOV + m_fSprintAddedFOV;
		break;
	default:
		m_fChangedFOV = m_fBaseFOV;
		break;
	}
	
	if (FOVTimeline.IsPlaying())
	{
		FOVTimeline.Stop();
	}

	FOVTimeline.PlayFromStart();
}

void UPlayerCameraComponent::StartMovementCameraShake()
{

}

void UPlayerCameraComponent::StopMovementCameraShake()
{

}
