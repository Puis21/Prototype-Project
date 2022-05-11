// Fill out your copyright notice in the Description page of Project Settings.


#include "SlideComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"
#include "Camera/CameraComponent.h"
#include <Components/CapsuleComponent.h>
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


USlideComponent::USlideComponent():
m_bIsCrouching(false),
m_fCrouchCapsuleRadius(15.f),
//Slide Declarations
m_fFloorSlopeInfluenceMultiplier(330000.0f),
m_fSlideUpCounterForce(2.0f),
m_fSlidingTerminalSpeed(5000.f),
m_fSlidingBrakingDeceleration(1424.f),
m_fAutoSlideFloorAngle(23.f),
m_fSlideInitialSpeedBoost(100000.f),
m_fMaxAngleToSlideUpFromSprint(25.f)
{
	
	PrimaryComponentTick.bCanEverTick = true;

}

void USlideComponent::BeginPlay()
{
	Super::BeginPlay();

	// Set Standing Capsule Half Height
	m_fStandingCapsuleHalfHeight = GetPlayer()->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	// Set Relative Z Offset on Camera
	m_fStandingCameraZOffSet = GetPlayer()->GetFirstPersonCameraComponent()->GetRelativeLocation().Z;

	if (m_pCapsuleHalfHeightCurve)
	{
		FOnTimelineFloat TimelineProgress;
		TimelineProgress.BindUFunction(this, FName("CrouchTimelineProgress"));
		m_CrouchingTimeline.AddInterpFloat(m_pCapsuleHalfHeightCurve, TimelineProgress);
		m_CrouchingTimeline.SetLooping(false);
	}

	m_fWalkBrakingDeceleration = GetCharacterMovementComponent()->BrakingDecelerationWalking;
	m_fWalkGroundFriction = GetCharacterMovementComponent()->GroundFriction;

	m_v3LastUpdateLocation = GetCharacterMovementComponent()->GetActorLocation();
}

void USlideComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (m_CrouchingTimeline.IsPlaying())
	{
		m_CrouchingTimeline.TickTimeline(DeltaTime);
	}

	//CLEAN
	EMovementState eMovementState = GetCharacterMovementComponent()->GetMovementState();

	if ((eMovementState == EMovementState::Crouching) && (CanStand()))
	{
		//ResolveMovement();
	}

	if (eMovementState == EMovementState::Sliding)
	{

		// Get Current Player Velocity
		FVector v3CurrentPlayerVelocity = (GetPlayer()->GetActorLocation() - m_v3LastUpdateLocation) / GetWorld()->GetDeltaSeconds();
		// Get Current Floor Normal
		const FVector kv3GroundNormal = GetCharacterMovementComponent()->CurrentFloor.HitResult.Normal;

		// Update Braking Decelaration and Ground Friction if needed
		UpdateSlidePhysicalProperties(v3CurrentPlayerVelocity, kv3GroundNormal);

		//Inclined surf
		if (!kv3GroundNormal.Equals(FVector::UpVector))
		{
			FVector v3FloorInfluenceDirection = CalculateFloorInfluence(kv3GroundNormal);

			float fFloorSlopeInfluence = (FVector::DotProduct(kv3GroundNormal, FVector::UpVector));
			fFloorSlopeInfluence = fFloorSlopeInfluence * fFloorSlopeInfluence * fFloorSlopeInfluence * fFloorSlopeInfluence;
			fFloorSlopeInfluence = 1.0f - fFloorSlopeInfluence;

			FVector v3PlayerVelocityNormalized = v3CurrentPlayerVelocity;
			v3PlayerVelocityNormalized.Normalize();

			const float kfUpwardsMovementAmount = FVector::DotProduct(v3PlayerVelocityNormalized, FVector::UpVector);

			if (kfUpwardsMovementAmount > 0.0f)
			{
				fFloorSlopeInfluence += kfUpwardsMovementAmount * m_fSlideUpCounterForce;
			}

			GetCharacterMovementComponent()->AddForce(v3FloorInfluenceDirection * m_fFloorSlopeInfluenceMultiplier * fFloorSlopeInfluence);
		}

		const float kfCurrentSpeedSquared = v3CurrentPlayerVelocity.SizeSquared();
		float fMaxSlideSpeedSquared = m_fSlidingTerminalSpeed * m_fSlidingTerminalSpeed;
		if (kfCurrentSpeedSquared > fMaxSlideSpeedSquared)
		{
			v3CurrentPlayerVelocity.Normalize();
			v3CurrentPlayerVelocity *= m_fSlidingTerminalSpeed;
			GetCharacterMovementComponent()->Velocity = v3CurrentPlayerVelocity;
		}

		const float kfPlayerSpeedSquared = v3CurrentPlayerVelocity.SizeSquared();
		float fMinimumSlideSpeed = this->m_fMaxCrouchSpeed * 0.2f;
		float fMinimumSlideSpeedSquared = fMinimumSlideSpeed * fMinimumSlideSpeed;
		float fMaxSpeedForSlideUnlock = GetCharacterMovementComponent()->GetPlayerSprintSpeed();
		float fMaxSpeedForSlideUnlockSquared = fMaxSpeedForSlideUnlock * fMaxSpeedForSlideUnlock;
		// Stop sprint
		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fMinimumSlideSpeedSquared));
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fMaxSpeedForSlideUnlockSquared));
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Blue, FString::SanitizeFloat(kfPlayerSpeedSquared / 100));
		if (kfPlayerSpeedSquared / 100 > 10000.f)
		{
			GetCharacterMovementComponent()->SetPlayerSpeed(300);
			//UE_LOG(LogTemp, Log, TEXT("Prima"));
			//StopSliding();
		}
		else if (kfPlayerSpeedSquared / 100 <= 700.f)
		{

			//UE_LOG(LogTemp, Log, TEXT("A doua"));
			GetCharacterMovementComponent()->StartMovementStateSwitch( EMovementState::Crouching );
			GetCharacterMovementComponent()->StopSprinting();
			StopSliding();
		}

	}

	m_v3LastUpdateLocation = GetPlayer()->GetActorLocation();

}

void USlideComponent::CrouchTimelineProgress(float fTransitionProgress)
{
	float fNewHalfHeight = FMath::Lerp(m_fStandingCapsuleHalfHeight, m_fCrouchingCapsuleHalfHeight, fTransitionProgress);

	GetPlayer()->GetCapsuleComponent()->SetCapsuleHalfHeight(fNewHalfHeight);

	float fNewCameraRelativeZ = FMath::Lerp(m_fStandingCameraZOffSet, m_fCrouchingCameraZOffset, fTransitionProgress);

	FVector v3CameraRelativeLocation = GetPlayer()->GetFirstPersonCameraComponent()->GetRelativeLocation();
	v3CameraRelativeLocation.Z = fNewCameraRelativeZ;
	GetPlayer()->GetFirstPersonCameraComponent()->SetRelativeLocation(v3CameraRelativeLocation);
}

void USlideComponent::SlideOnLand(const FVector& kv3GroundNormal)
{
	m_v3OnLandedFloorNormal = kv3GroundNormal;

	// Get the holding crouch flag
	const bool kbIsCrouching = m_bIsCrouching;

	// Get Player Velocity
	FVector v3PlayerVelocity = GetPlayer()->GetVelocity();

	// Calculate Floor Angle through the Arccos of the dot product between the v3GroundNormal and the UpVector
	const float kfFloorAngle = FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(kv3GroundNormal, FVector::UpVector)));
	// Get the AutoSlide Floor Angle ( adjustable angle that will always enable sliding )
	const float kfAutoSlideFloorAngle = m_fAutoSlideFloorAngle;
	// kbAutoSlide indicates if the current floor angle enables AutoSlide
	const bool kbAutoSlide = kfFloorAngle >= kfAutoSlideFloorAngle;
	// Predict the velocity at which the player will be moving once they land into a slide
	const FVector kv3PlayerSlideVelocity = GetSlideVelocityAfterLanding(kv3GroundNormal);
	// The minimum speed for starting the slide from landing will be 90% of the sprint speed
	const float kfMinSpeedSquared = (GetCharacterMovementComponent()->GetPlayerWalkSpeed() * 0.9f) * (GetCharacterMovementComponent()->GetPlayerWalkSpeed() * 0.9f);
	// If the speed at which the player would move after landing into a slide is bigger than 90% of the sprint speed, kbHasSpeed is true
	const bool kbHasSpeed = kv3PlayerSlideVelocity.SizeSquared() >= kfMinSpeedSquared;

	UE_LOG(LogTemp, Log, TEXT("sppeed: %s"), kbHasSpeed ? TEXT("true") : TEXT("false"));
	// If the player is holding crouch and 
	// they either will have enough speed to start sliding OR this floor is so steep that AutoSlide is enabled
	if (kbIsCrouching && (kbHasSpeed || kbAutoSlide))
	{
		// Begin transition to slide
		GetCharacterMovementComponent()->StartMovementStateSwitch(EMovementState::Sliding);
	}
}

const FVector USlideComponent::GetSlideVelocityAfterLanding(const FVector& kv3FloorNormal) const
{
	// Get Player Velocity
	FVector v3PlayerVelocity = GetPlayer()->GetVelocity();
	// Get Player XY Velocity
	FVector v3PlayerXYVelocity = v3PlayerVelocity;
	v3PlayerXYVelocity.Z = 0.0f;

	// If the normal of the ground is not equal to the world Up Vector, it means the direction of the slide will be influenced by the floor direction
	if (!kv3FloorNormal.Equals(FVector::UpVector))
	{
		// Properly calculate floor direction
		FVector v3FloorInfluenceDirection = CalculateFloorInfluence(kv3FloorNormal);

		FVector v3PlayerXYVelocityDirection = v3PlayerXYVelocity;
		v3PlayerXYVelocityDirection.Normalize();

		FVector v3TransitionPlayerVelocity = v3PlayerVelocity;

		float fDotProductPlayerXYDirWithFloorInfluenceDir = FVector::DotProduct(v3PlayerXYVelocityDirection, v3FloorInfluenceDirection);
		if (fDotProductPlayerXYDirWithFloorInfluenceDir < 0.0f)
		{
			FVector v3PlayerXYProjected = FVector::VectorPlaneProject(v3PlayerXYVelocity, kv3FloorNormal);
			v3TransitionPlayerVelocity.X = v3PlayerXYProjected.X;
			v3TransitionPlayerVelocity.Y = v3PlayerXYProjected.Y;
		}

		v3TransitionPlayerVelocity.Z *= FVector::DotProduct(FVector::DownVector, v3FloorInfluenceDirection);


		// If player has no XY movement, the slide direction will be the same as the floor influence direction
		FVector v3SlideDirection = v3FloorInfluenceDirection;

		// If player has XY movement, we need to properly calculate the v3SlideDirection
		if (v3PlayerXYVelocity.SizeSquared() > 0.0f)
		{
			// The slide direction will take the player's initial velocity into account,
			// we project the player velocity onto the surface plane so see where the player would end up moving towards
			v3SlideDirection = FVector::VectorPlaneProject(v3TransitionPlayerVelocity, kv3FloorNormal);
			v3SlideDirection.Normalize();
		}

		// Finally, the new player velocity will have the same direction as v3SlideDirection, and its length equal to the amount of speed that passed through the transition
		return (v3SlideDirection * v3TransitionPlayerVelocity.Size());
	}

	// If on horizontal surface, just update velocity to be the same as before landing, except we ignore the Z component.
	else
	{
		// This way, no horizontal speed is lost, and we don't do any complicated maths. 
		return v3PlayerXYVelocity;
	}
}

void USlideComponent::StartCrouching()
{
	EMovementState eMovementState = GetCharacterMovementComponent()->GetMovementState();

	if (eMovementState == EMovementState::Walking)
	{
		GetCharacterMovementComponent()->StartMovementStateSwitch(EMovementState::Crouching);
	}
	else if (eMovementState == EMovementState::Sprinting && GetCanSlideFromSprint(GetCharacterMovementComponent()->CurrentFloor.HitResult.Normal))
	{
		GetCharacterMovementComponent()->StartMovementStateSwitch(EMovementState::Sliding);
	}

}

bool USlideComponent::GetCanSlideFromSprint(const FVector& v3GroundNormal) const
{
	if (v3GroundNormal.Equals(FVector::UpVector))
	{
		return true;
	}
	// If on inclined surface
	else
	{
		// Get floor direction
		FVector v3FloorInfluenceDir = CalculateFloorInfluence(v3GroundNormal);
		// Get Player movement vector aligned with the floor surface
		FVector v3PlayerMoveDir = FVector::VectorPlaneProject(GetPlayer()->GetVelocity(), v3GroundNormal);
		v3PlayerMoveDir.Normalize();

		// Check if player is going up / down the slope
		const float kfDotProductPlayerDirWithFloorDir = FVector::DotProduct(v3PlayerMoveDir, v3FloorInfluenceDir);
		// If dot product >= 0.0f, player is going down, can always slide
		if (kfDotProductPlayerDirWithFloorDir >= 0.0f)
		{
			return true;
		}
		// If dot product < 0.0f, player is going up the slope, we must check how far up the player is going
		else
		{
			// Get player horizontal movement unit vector
			FVector v3PlayerMoveXYDir = v3PlayerMoveDir;
			v3PlayerMoveXYDir.Z = 0.0f;
			v3PlayerMoveXYDir.Normalize();


			const float kfUpMovementAngle = FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(v3PlayerMoveDir, v3PlayerMoveXYDir)));
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::SanitizeFloat(kfUpMovementAngle));
			return kfUpMovementAngle <= m_fMaxAngleToSlideUpFromSprint;
		}

	}
}

void USlideComponent::Crouching()
{
	m_CrouchingTimeline.Play();
	m_bIsCrouching = true;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Began Crouch"));
	}
}

void USlideComponent::UnCrouching()
{
	EMovementState eMovementState = GetCharacterMovementComponent()->GetMovementState();

	if (CanStand())
	{
		if (eMovementState == EMovementState::Sliding)
		{
			StopSliding();
		}
	 	GetCharacterMovementComponent()->ResolveMovement();
		m_CrouchingTimeline.Reverse();
		m_bIsCrouching = false;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Stopped Crouch"));
		}
	}
}

void USlideComponent::StartSliding(bool bFromSprint)
{

	Crouching();

	// Apply initial speed boost if applicable
	if (bFromSprint)
	{
		// Slide towards where the player is currently moving
		const FVector kv3NewVelocity = GetPlayer()->GetVelocity().GetSafeNormal() * GetCharacterMovementComponent()->GetPlayerSprintSpeed();
		GetCharacterMovementComponent()->Velocity = kv3NewVelocity;

		FVector v3DashDirection = FVector::ZeroVector;
		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Cyan, TEXT("Sprint"));

		// Get floor normal
		FVector v3GroundNormal = GetCharacterMovementComponent()->CurrentFloor.HitResult.Normal;
		// If standing on a flat surface, just use forward vector for dash
		if (v3GroundNormal.Equals(FVector::UpVector))
		{
			v3DashDirection = GetPlayer()->GetActorForwardVector();
		}
		// If not standing on a flat surface, we need to calculate the dash direction,
		// which is parallel to the surface plane but still follows the player's facing direction
		else
		{
			v3DashDirection = FVector::CrossProduct(GetPlayer()->GetActorRightVector(), v3GroundNormal);
		}
		// Add dash impulse
		GetCharacterMovementComponent()->AddImpulse(v3DashDirection * m_fSlideInitialSpeedBoost);
		// Start Dash Jump Lock Time
		//GetCharacterMovementComponent()->SetJumpControlState( EFPJumpControlState::SlideDashing );
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Cyan, TEXT("Non sprint"));
		GetSlideVelocityAfterLanding(m_v3OnLandedFloorNormal);
	}
	// Make player slidy
	FVector v3Velocity = GetPlayer()->GetVelocity();

	UpdateSlidePhysicalProperties(v3Velocity, m_v3OnLandedFloorNormal);
}

void USlideComponent::StopSliding()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Ended Slide"));
	}

	// Reset ground friction and deceleration values
	GetCharacterMovementComponent()->GroundFriction = m_fWalkGroundFriction;
	GetCharacterMovementComponent()->BrakingDecelerationWalking = m_fWalkBrakingDeceleration;

	/*if (eMovementState != EMovementState::Crouching)
	{
		UnCrouching();
	}*/
}

bool USlideComponent::CanStand() const
{
	/*if (m_bIsCrouching)
	{
		UE_LOG(LogTemp, Log, TEXT("ALO??"));
		return false;
	}*/

	/*if ((eMovementState != EMovementState::Crouching && eMovementState != EMovementState::Sliding))
	{
		return true;
	}*/

	return GetCanOccupyStandingSpace();
}

FVector USlideComponent::CalculateFloorInfluence(const FVector& kv3FloorNormal) const
{
	if (kv3FloorNormal.Equals(FVector::UpVector))
	{
		return FVector::ZeroVector;
	}
	else
	{
		FVector v3SlideDirection = FVector::CrossProduct(FVector::CrossProduct(FVector::UpVector, kv3FloorNormal), kv3FloorNormal);
		v3SlideDirection.Normalize();
		return v3SlideDirection;
	}
}

void USlideComponent::UpdateSlidePhysicalProperties(const FVector& v3CurrentPlayerVelocity, const FVector& v3FloorNormal)
{
	// If On Horizontal Surface
	if (v3FloorNormal.Equals(FVector::UpVector))
	{
		GetCharacterMovementComponent()->BrakingDecelerationWalking = m_fSlidingBrakingDeceleration;
	}
	// Else, is on an inclined surface
	else
	{
		float fDotProductUpWithFloorNormal = FVector::DotProduct(FVector::UpVector, v3FloorNormal);
		fDotProductUpWithFloorNormal = fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal;
		float fNewBrakingDecelaration = m_fSlidingBrakingDeceleration * fDotProductUpWithFloorNormal;
		GetCharacterMovementComponent()->BrakingDecelerationWalking = fNewBrakingDecelaration;
		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fNewBrakingDecelaration));
	}

	const float kfCurrentSpeedSquared = v3CurrentPlayerVelocity.SizeSquared();
	// Calculate the max speed before applying a friction change (It's the speed the player starts the slide coming from a sprint)
	const float kfMaxSpeedBeforeFriction = GetCharacterMovementComponent()->GetPlayerSprintSpeed() + 1100.0f;
	// Calculate max speed squared for runtime efficiency
	const float kfMaxSpeedBeforeFrictionSquared = kfMaxSpeedBeforeFriction * kfMaxSpeedBeforeFriction;

	// If going too fast
	if (kfCurrentSpeedSquared > kfMaxSpeedBeforeFrictionSquared)
	{
		// Find out how inclined the surface is
		const float kfFloorAngle = FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(v3FloorNormal, FVector::UpVector)));
		// Check if player is accelerating or decelarating
		if (kfFloorAngle < m_fAutoSlideFloorAngle)
		{
			const float kfAngleMultiplier = (m_fAutoSlideFloorAngle - kfFloorAngle) / m_fAutoSlideFloorAngle;
			const float kfExtraSpeed = v3CurrentPlayerVelocity.Size() - kfMaxSpeedBeforeFriction;

			float fNewGroundFriction = kfExtraSpeed * kfAngleMultiplier * 0.1f;
			// Clamp to a max friction
			if (fNewGroundFriction > 2.0f)
			{
				fNewGroundFriction = 2.0f;
			}
			//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fNewGroundFriction));
			GetCharacterMovementComponent()->GroundFriction = fNewGroundFriction;
		}
		else
		{
			GetCharacterMovementComponent()->GroundFriction = 0.0f;
		}
	}
	else
	{
		GetCharacterMovementComponent()->GroundFriction = 0.0f;
	}
}

bool USlideComponent::GetCanOccupyStandingSpace() const
{
	//if (m_bIsCrouching)
	//{
	//	return true;
	//}

	UCapsuleComponent* PlayerCapsuleComponent = GetPlayer()->GetCapsuleComponent();
	if (PlayerCapsuleComponent)
	{
		//Previus Capsule Trace
		/*FVector CapsuleFeetLocation = m_pPlayerCharacter->GetActorLocation();
		CapsuleFeetLocation.Z = PlayerCapsuleComponent->GetScaledCapsuleHalfHeight();
		FVector CapsuleHeadLocation = m_pPlayerCharacter->GetActorLocation();
		CapsuleHeadLocation.Z = PlayerCapsuleComponent->GetScaledCapsuleHalfHeight();
		CapsuleHeadLocation.Z += m_fStandingCapsuleHalfHeight * 2;
		TArray<FHitResult> OutHits;

	FCollisionShape CollisionShape = FCollisionShape::MakeCapsule(m_fCrouchCapsuleRadius, PlayerCapsuleComponent->GetScaledCapsuleHalfHeight());

	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, CapsuleFeetLocation, CapsuleHeadLocation, FQuat::Identity, ECollisionChannel::ECC_Visibility, CollisionShape);

	if (isHit && m_bIsCrouching)
	{
		return false;
	}
	else if (!isHit && m_bIsCrouching)
	{
		return true;
	}

	for(auto& Hit : OutHits)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Hit Result: %s"), *Hit.GetActor()->GetName()));
		}
	}*/

	// Define CapsuleTraceLocation
	// This will be the centre location of the Walking state player capsule
	// 1. Get location of centre of small crouched capsule 
		FVector CapsuleTraceLocation = GetPlayer()->GetActorLocation();
		// 2. Subtract half the height, get location of bottom of the capsule
		CapsuleTraceLocation.Z -= PlayerCapsuleComponent->GetScaledCapsuleHalfHeight();
		// 3. Add the standing half height, we have reached the centre of the standing capsule
		CapsuleTraceLocation.Z += m_fStandingCapsuleHalfHeight;

		bool bSpaceOccluded = CheckCapsuleCollision(CapsuleTraceLocation, m_fStandingCapsuleHalfHeight, m_fCrouchCapsuleRadius, false);

		if (bSpaceOccluded && m_bIsCrouching)
		{
			//UE_LOG(LogTemp, Log, TEXT("Ouch: %s"), *CapsuleHit.GetActor()->GetName());
			return false;
		}
		else if (!bSpaceOccluded && m_bIsCrouching)
		{
			return true;
		}

	}
	return false;
}

bool USlideComponent::CheckCapsuleCollision(FVector Center, float HalfHeight, float Radius, bool DrawDebug)const
{
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
	ObjectTypeQuery.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(GetPlayer());
	UClass* ActorClassFilter = AActor::StaticClass();
	TArray<AActor*> ActorsFound;
	bool bOverlapDetected = UKismetSystemLibrary::CapsuleOverlapActors(GetWorld(), Center, Radius, HalfHeight, ObjectTypeQuery, ActorClassFilter, ActorsToIgnore, ActorsFound);

	if (DrawDebug)
	{
		FColor DebugColour = FColor::Red;
		if (!bOverlapDetected)
		{
			DebugColour = FColor::Green;
		}
		DrawDebugCapsule(GetWorld(), Center, HalfHeight, Radius, FRotator(0.f, 0.f, 0.f).Quaternion(), DebugColour, false, 2.0f);
	}
	return bOverlapDetected;
}