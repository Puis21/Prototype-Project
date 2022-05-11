// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"

#include <Components/TimelineComponent.h>

#include "PlayerMovementComponent.generated.h"

class APlayerCharacter;
class UCameraComponent;
class UCharacterMovementComponent;
class USlideComponent;

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

UENUM(BlueprintType)
enum class EVaultingState : uint8
{
	Ready			UMETA(DisplayName = "Ready"),
	WantsToVault		UMETA(DisplayName = "WantsToVault"),
	Vaulting		UMETA(DisplayName = "Vaulting"),
	Unavailable		UMETA(DisplayName = "Unavailable")
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

	/*void StartCrouching();

	void UnCrouching();

	void Crouching();

	void StartSliding( bool bFromSprint);

	void StopSliding();

	void SlideOnLand(const FVector& kv3GroundNormal);

	const FVector GetSlideVelocityAfterLanding(const FVector& kv3FloorNormal) const;

	bool GetCanSlideFromSprint(const FVector& v3GroundNormal) const;

	bool GetCanOccupyStandingSpace() const;

	bool CheckCapsuleCollision(FVector Center, float HalfHeight, float Radius, bool DrawDebug)const;*/

	void PlayerJump();

	bool CanSprint() const;

	//bool CanStand() const;

	void OnLanded(const FHitResult& Hit);

	//Slide functions
	/*FVector CalculateFloorInfluence( const FVector& kv3FloorNormal) const;

	void UpdateSlidePhysicalProperties(const FVector& v3CurrentPlayerVelocity, const FVector& kv3GroundNormal);

	UFUNCTION()
	void CrouchTimelineProgress(float fTransitionProgress);*/

	//Vault Functions
	bool CanVault();

	bool CanVaultToHit(UCapsuleComponent* CapsuleComponent, FHitResult HitResult);

private:
	
	APlayerCharacter* m_pPlayerCharacter;

	UCameraComponent* m_pCameraComponent;

	UCharacterMovementComponent* m_pCharacterMovement;

	USlideComponent* m_pSlideComponent;

	EMovementMode MoveMode;

	/*float m_fStandingCapsuleHalfHeight;
	float m_fStandingCameraZOffSet;
	bool m_bIsCrouching;*/

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Crouch Speed")
	float m_fMaxCrouchSpeed;

	UPROPERTY(Category = "Movement | Sprint", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.88", ClampMax = "1.0", AllowPrivateAccess = "true"), DisplayName = "Minimum value of forwards axis to begin sprint")
	float m_fSprintMinForward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Movement | Walking", meta = (AllowPrivateAccess = "true"), DisplayName = "Can Sprint")
	bool m_bIsSprinting;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (ClampMin = "10.0", ClampMax = "60.0", AllowPrivateAccess = "true"))
	float m_fCrouchingCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (ClampMin = "10.0", ClampMax = "100.0", AllowPrivateAccess = "true"))
	float m_fCrouchingCameraZOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (AllowPrivateAccess = "true"), DisplayName = "Crouch Capsule Radius")
	float m_fCrouchCapsuleRadius;*/

	//Slide variables
	/*FVector m_v3LastUpdateLocation;

	FVector m_v3OnLandedFloorNormal;

	float m_fWalkBrakingDeceleration;
	float m_fWalkGroundFriction;

	float m_fAutoSlideFloorAngle;

	UPROPERTY(Category = "Custom Movement | Sliding", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "100000.0", ClampMax = "1000000.0", AllowPrivateAccess = "true"))
	float m_fFloorSlopeInfluenceMultiplier;

	UPROPERTY(Category = "Custom Movement | Sliding", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.25", ClampMax = "3.0", AllowPrivateAccess = "true"))
	float m_fSlideUpCounterForce;

	UPROPERTY(Category = "Custom Movement | Sliding", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "4000.0", ClampMax = "9000.0", AllowPrivateAccess = "true"))
	float m_fSlidingTerminalSpeed;

	UPROPERTY(Category = "Custom Movement | Sliding", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "800.0", ClampMax = "3000.0", AllowPrivateAccess = "true"))
	float m_fSlidingBrakingDeceleration;

	UPROPERTY(Category = "Custom Movement | Sliding", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "20000.0", ClampMax = "300000.0", AllowPrivateAccess = "true"))
	float m_fSlideInitialSpeedBoost;

	UPROPERTY(Category = "Custom Movement | Sliding", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "5.0", ClampMax = "30.0", AllowPrivateAccess = "true"))
	float m_fMaxAngleToSlideUpFromSprint;*/

	//EMovementState GetMovementState() const;

	//Vault Variables

	EVaultingState m_eVaultingState;

	UPROPERTY(EditDefaultsOnly, Category = "Custom Movement | Vaulting",
		meta = (AllowPrivateAccess = "true", ClampMin = "0.0", ClampMax = "200.0", UIMin = "0.0", UIMax = "200.0"),
		DisplayName = "Vaulting Horizontal Distance")
		float m_fHorizontalDistance;

	int m_iMinVaultingHeight;

	int m_iMaxVaultingHeight;

	FVector m_v3VaultEndLocation;

protected:

	////Timeline for crouching
	//FTimeline m_CrouchingTimeline;

	////Curve float for crouch
	//UPROPERTY(EditAnywhere, Category = "Custom Movement | Crouching" ) //"Custom Movement | Crouching | Timeline | Capsule Scale Down"
	//UCurveFloat* m_pCapsuleHalfHeightCurve;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementState eMovementState;

	FORCEINLINE EMovementState GetMovementState() const { return eMovementState; } 
	FORCEINLINE void SetJumpCounter(int counter) { m_iJumpCounter = counter; }
	//FORCEINLINE bool GetIsCrounching() const { return m_bIsCrouching; }
	//FORCEINLINE float GetCrouchCapsuleRadius() const { return m_fCrouchCapsuleRadius; }
	FORCEINLINE UCharacterMovementComponent* GetMovementComponent() const { return m_pCharacterMovement; }
	FORCEINLINE float GetPlayerSpeed() const { return MaxWalkSpeed; }
	FORCEINLINE float GetPlayerSprintSpeed() const { return m_fMaxSprintSpeed; }
	FORCEINLINE float GetPlayerWalkSpeed() const { return m_fMaxWalkSpeed; }

	FORCEINLINE void SetPlayerSpeed(float speed) { MaxWalkSpeed = speed; }

	APlayerCharacter* GetPlayerChar() const { return m_pPlayerCharacter; }
};
