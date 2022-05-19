// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerMovementComponent.generated.h"

class APlayerCharacter;

class UPlayerCameraComponent;
class UCharacterMovementComponent;
class USlideComponent;
class UVautingComponent;
class UCombatComponent;
class USoundBase;

UENUM(BlueprintType)
enum class EMovementState : uint8
{
	//Idle		UMETA(DisplayName = "Idle"),
	Walking		UMETA(DisplayName = "Walking"),
	Jumping		UMETA(DisplayName = "Jumping"),
	Sprinting	UMETA(DisplayName = "Sprinting"),
	Crouching	UMETA(DisplayName = "Crouching"),
	Sliding		UMETA(DisplayName = "Sliding"),
	Vaulting	UMETA(DisplayName = "Vaulting")
};

UCLASS()
class PROTOTYPEPROJECT_API UPlayerMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

private:

	UPlayerMovementComponent();

	virtual void BeginPlay();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetMovementState(EMovementState& eNewMovementState);

	float SetMaxSpeed(float maxSpeed);

public:

	void StartMovementStateSwitch(EMovementState eNewMovementState);

	void ResolveMovement();

	void StartSprinting();

	void StopSprinting();

	void PlayerJump();

	bool CanSprint() const;

	bool CheckIfMovingXY();

	void OnLanded(const FHitResult& Hit);

	void MovingSounds();

	void FootStepsPlayRate(EMovementState eSoundMovementState);

private:
	
	APlayerCharacter* m_pPlayerCharacter;

	UPlayerCameraComponent* m_pCameraComponent;

	UCharacterMovementComponent* m_pCharacterMovement;

	USlideComponent* m_pSlideComponent;

	UVautingComponent* m_pVaultingComponent;

	UCombatComponent* m_pCombatComponent;

	EMovementMode MoveMode;

	FTimerHandle FootstepsTimer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sounds | Movement", meta = (AllowPrivateAccess = "true"))
	float m_fFootstepsPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sounds | Movement", meta = (AllowPrivateAccess = "true"))
	USoundBase* FootStepSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Jumping", meta = (AllowPrivateAccess = "true"), DisplayName = "Jump Count")
	int32 m_iJumpCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Jumping", meta = (AllowPrivateAccess = "true"), DisplayName = "Jump Height")
	float m_fJumpHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Jumping", meta = (AllowPrivateAccess = "true"), DisplayName = "Is Jumping")
	bool m_bIsJumping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Walk Speed")
	float m_fMaxWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Sprint", meta = (AllowPrivateAccess = "true"), DisplayName = "Sprint Speed")
	float m_fMaxSprintSpeed;

	UPROPERTY(Category = "Custom Movement | Sprint", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.88", ClampMax = "1.0", AllowPrivateAccess = "true"), DisplayName = "Minimum value of forwards axis to begin sprint")
	float m_fSprintMinForward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Can Sprint")
	bool m_bIsSprinting;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementState eMovementState;

	FORCEINLINE EMovementState GetMovementState() const { return eMovementState; } 
	FORCEINLINE void SetJumpCounter(int counter) { m_iJumpCounter = counter; }
	FORCEINLINE UCharacterMovementComponent* GetMovementComponent() const { return m_pCharacterMovement; }
	FORCEINLINE float GetPlayerSpeed() const { return MaxWalkSpeed; }
	FORCEINLINE float GetPlayerSprintSpeed() const { return m_fMaxSprintSpeed; }
	FORCEINLINE float GetPlayerWalkSpeed() const { return m_fMaxWalkSpeed; }
	FORCEINLINE USlideComponent* GetSlideComponent() const { return m_pSlideComponent; }

	FORCEINLINE void SetPlayerSpeed(float speed) { MaxWalkSpeed = speed; }

	APlayerCharacter* GetPlayerChar() const { return m_pPlayerCharacter; }
};
