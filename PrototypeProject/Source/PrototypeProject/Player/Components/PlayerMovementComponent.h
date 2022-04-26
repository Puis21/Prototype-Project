// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"

#include <Components/TimelineComponent.h>

#include "PlayerMovementComponent.generated.h"

class APlayerCharacter;
class UCameraComponent;

UENUM(BlueprintType)
enum class EMovementState : uint8
{
	//Idle		UMETA(DisplayName = "Idle"),
	Walking		UMETA(DisplayName = "Walking"),
	Jumping		UMETA(DisplayName = "Jumping"),
	Sprinting	UMETA(DisplayName = "Sprinting"),
	Crouching	UMETA(DisplayName = "Crouching"),
	Sliding		UMETA(DisplayName = "Sliding"),
};

UCLASS()
class PROTOTYPEPROJECT_API UPlayerMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

private:

	UPlayerMovementComponent();

	virtual void BeginPlay();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void StartMovementStateSwitch(EMovementState eNewMovementState);

	void SetMovementState(EMovementState& eNewMovementState);

	void ResolveMovement();

	float SetMaxSpeed(float maxSpeed);

public:

	void StartSprinting();

	void StopSprinting();

	void StartCrouching();

	void UnCrouching();

	void Crouching();

	void PlayerJump();

	bool CanSprint() const;

	bool CanStand() const;

	UFUNCTION()
	void CrouchTimelineProgress(float fTransitionProgress);

private:
	
	APlayerCharacter* m_pPlayerCharacter;

	UCameraComponent* m_pCameraComponent;

	EMovementMode MoveMode;

	float m_fStandingCapsuleHalfHeight;
	float m_fStandingCameraZOffSet;
	bool m_bIsCrouching;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Jumping", meta = (AllowPrivateAccess = "true"), DisplayName = "Jump Count")
	int32 m_iJumpCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Jumping", meta = (AllowPrivateAccess = "true"), DisplayName = "Jump Height")
	float m_fJumpHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Jumping", meta = (AllowPrivateAccess = "true"), DisplayName = "Is Jumping")
	bool m_bIsJumping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Walk Speed")
	float m_fMaxWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Sprint Speed")
	float m_fMaxSprintSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Can Sprint")
	bool m_bIsSprinting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (ClampMin = "10.0", ClampMax = "60.0", AllowPrivateAccess = "true"))
	float m_fCrouchingCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (ClampMin = "10.0", ClampMax = "100.0", AllowPrivateAccess = "true"))
	float m_fCrouchingCameraZOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (AllowPrivateAccess = "true"), DisplayName = "Crouch Speed")
	float m_fMaxCrouchSpeed;

	//EMovementState GetMovementState() const;

protected:

	//Timeline for crouching
	FTimeline m_CrouchingTimeline;

	//Curve float for crouch
	UPROPERTY(EditAnywhere, Category = "Custom Movement | Crouching" ) //"Custom Movement | Crouching | Timeline | Capsule Scale Down"
	UCurveFloat* m_pCapsuleHalfHeightCurve;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementState eMovementState;

	FORCEINLINE EMovementState GetMovementState() const { return eMovementState; } 
	FORCEINLINE void SetJumpCounter(int counter) { m_iJumpCounter = counter; }
	FORCEINLINE bool GetIsCrounching() const { return m_bIsCrouching; }

	APlayerCharacter* GetPlayerChar() const { return m_pPlayerCharacter; }
};
