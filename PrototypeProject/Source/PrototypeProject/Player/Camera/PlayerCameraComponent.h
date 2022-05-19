// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"

#include "Components/TimelineComponent.h"

#include "PlayerCameraComponent.generated.h"

enum class EMovementState : uint8;
class UPlayerMovementComponent;
class APlayerCharacter;
class UCameraShakeBase;

UCLASS()
class PROTOTYPEPROJECT_API UPlayerCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
	
	UPlayerCameraComponent();

protected:

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void FOVTimelineProgress(float fFOVProgress);

	void UpdateCameraShake();

private:

	APlayerCharacter* m_pOwningPlayer;

	UPlayerMovementComponent* m_pMovementComponent;

	//UPROPERTY(EditAnywhere, Category = "Camera | Camera Shake", DisplayName = "Movement Camera Shake Class")
	//TSubclassOf<UMatineeCameraShake> m_cMovementCameraShakeClass;

	UPROPERTY(EditAnywhere, Category = "Camera | Camera Shake", DisplayName = "Movement Camera Shake Class")
	TSubclassOf<UCameraShakeBase> CameraShake;

	UCameraShakeBase* CamShake;

	//TSubclassOf<UMatineeCameraShake> Matinee;

	UPROPERTY(EditDefaultsOnly, Category = FOV, DisplayName = "Walk FOV")
	float m_fBaseFOV;

	UPROPERTY(EditDefaultsOnly, Category = FOV, DisplayName = "Sprint FOV")
	float m_fSprintAddedFOV;

	UPROPERTY(EditDefaultsOnly, Category = FOV, DisplayName = "Crouch FOV")
	float m_fCrouchAddedFOV;

	UPROPERTY(EditDefaultsOnly, Category = FOV, DisplayName = "Slinde FOV")
	float m_fSlideAddedFOV;

	float m_fChangedFOV;

	UPROPERTY(EditDefaultsOnly, Category = FOV, DisplayName = "Curve float")
	UCurveFloat* m_pCameraFOVCurve;

	FTimeline FOVTimeline;

	float m_fCameraShakeStrength;

public:

	void UpdateFOV(EMovementState eMovementState);

	void StartMovementCameraShake();

	void StopMovementCameraShake();

};
