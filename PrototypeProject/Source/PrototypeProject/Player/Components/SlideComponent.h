// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PrototypeProject/Player/Components/ParkourMovementComponent.h"

#include <Components/TimelineComponent.h>

#include "SlideComponent.generated.h"

enum class EMovementState : uint8;
class UCurveFloat;

UCLASS()
class PROTOTYPEPROJECT_API USlideComponent : public UParkourMovementComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USlideComponent();

	void StartCrouching();

	void UnCrouching();

	void Crouching();

	void StartSliding(bool bFromSprint);

	void StopSliding();

	void SlideOnLand(const FVector& kv3GroundNormal);

	const FVector GetSlideVelocityAfterLanding(const FVector& kv3FloorNormal) const;

	bool GetCanSlideFromSprint(const FVector& v3GroundNormal) const;

	bool GetCanOccupyStandingSpace() const;

	bool CheckCapsuleCollision(FVector Center, float HalfHeight, float Radius, bool DrawDebug)const;

	bool CanStand() const;

	FVector CalculateFloorInfluence( const FVector& kv3FloorNormal) const;

	void UpdateSlidePhysicalProperties(const FVector& v3CurrentPlayerVelocity, const FVector& kv3GroundNormal);

	UFUNCTION()
	void CrouchTimelineProgress(float fTransitionProgress);

protected: 
	
	virtual void BeginPlay();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Timeline for crouching
	FTimeline m_CrouchingTimeline;

	//Curve float for crouch
	UPROPERTY(EditAnywhere, Category = "Custom Movement | Crouching") //"Custom Movement | Crouching | Timeline | Capsule Scale Down"
	UCurveFloat* m_pCapsuleHalfHeightCurve;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (ClampMin = "10.0", ClampMax = "60.0", AllowPrivateAccess = "true"))
	float m_fCrouchingCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (ClampMin = "10.0", ClampMax = "100.0", AllowPrivateAccess = "true"))
	float m_fCrouchingCameraZOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (AllowPrivateAccess = "true"), DisplayName = "Crouch Speed")
	float m_fMaxCrouchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Movement | Crouching", meta = (AllowPrivateAccess = "true"), DisplayName = "Crouch Capsule Radius")
	float m_fCrouchCapsuleRadius;


	float m_fStandingCapsuleHalfHeight;
	float m_fStandingCameraZOffSet;
	bool m_bIsCrouching;
	bool m_bIsSliding;

	FVector m_v3LastUpdateLocation;

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
	float m_fMaxAngleToSlideUpFromSprint;

public:

	FORCEINLINE bool GetIsCrouched() const { return m_bIsCrouching; }
	FORCEINLINE bool GetIsSliding() const { return m_bIsSliding; }
	FORCEINLINE float GetCrouchSpeed() const { return m_fMaxCrouchSpeed; }
};
