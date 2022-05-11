// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMovementComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/SlideComponent.h"
#include <Components/CapsuleComponent.h>
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent():
m_iJumpCounter(0),
m_fJumpHeight(600.f),
m_bIsJumping(false),
m_fMaxWalkSpeed(600.f),
m_fMaxSprintSpeed(1000.f),
m_fSprintMinForward(0.9f),
m_bIsSprinting(false),
//m_bIsCrouching(false),
//m_fCrouchCapsuleRadius(15.f),
//Slide Declarations
//m_fFloorSlopeInfluenceMultiplier(330000.0f),
//m_fSlideUpCounterForce(2.0f),
//m_fSlidingTerminalSpeed(5000.f),
//m_fSlidingBrakingDeceleration(1424.f),
//m_fAutoSlideFloorAngle(23.f),
//m_fSlideInitialSpeedBoost(100000.f),
//m_fMaxAngleToSlideUpFromSprint(25.f),
//Vault Declarations
m_fHorizontalDistance(200.f),
m_iMinVaultingHeight(50.f),
m_iMaxVaultingHeight(170.f)
{
	MaxWalkSpeed = m_fMaxWalkSpeed;
	AirControl = 0.5f;
	AirControlBoostMultiplier = 2;

}

void UPlayerMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	m_pPlayerCharacter = Cast<APlayerCharacter>(GetOwner());
	if (m_pPlayerCharacter)
	{
        m_pCameraComponent = m_pPlayerCharacter->GetFirstPersonCameraComponent();
	}

	m_pSlideComponent = m_pPlayerCharacter->GetSlideComponent();

 //   // Set Standing Capsule Half Height
	//m_fStandingCapsuleHalfHeight = m_pPlayerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	//// Set Relative Z Offset on Camera
	//m_fStandingCameraZOffSet = m_pCameraComponent->GetRelativeLocation().Z;

 //   if (m_pCapsuleHalfHeightCurve)
	//{
	//	FOnTimelineFloat TimelineProgress;
	//	TimelineProgress.BindUFunction(this, FName("CrouchTimelineProgress"));
	//	m_CrouchingTimeline.AddInterpFloat(m_pCapsuleHalfHeightCurve, TimelineProgress);
	//	m_CrouchingTimeline.SetLooping(false);
	//}

	//m_fWalkBrakingDeceleration = this->BrakingDecelerationWalking;
	//m_fWalkGroundFriction = this->GroundFriction;

	StartMovementStateSwitch(EMovementState::Walking);

	m_eVaultingState = EVaultingState::Ready;
}

void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	/*   if (m_CrouchingTimeline.IsPlaying())
	   {
		   m_CrouchingTimeline.TickTimeline(DeltaTime);
	   }*/

	if ((eMovementState == EMovementState::Crouching) && (m_pSlideComponent->CanStand()))
	{
		//ResolveMovement();
	}

	//const UEnum* MovementStateEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EMovementState"));
	//const TEnumAsByte<EMovementMode> SurfaceEnum = MoveMode;
	//FString EnumAsString = UEnum::GetValueAsString(SurfaceEnum.GetValue());

	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Black, EnumAsString);
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Cyan, FString::SanitizeFloat(m_pPlayerCharacter->GetVelocity().Size()));
	}

	//UE_LOG(LogTemp, Log, TEXT("MyBool is %f"), MaxWalkSpeed);
	//UE_LOG(LogTemp, Log, TEXT("my enum: %s"), *UEnum::GetValueAsName(eMovementState).ToString());
	//UE_LOG(LogTemp, Log, TEXT("Crouched %s"), m_bIsCrouching ? TEXT("true") : TEXT("false"));

	//SLIDE CODE
	
	//if (eMovementState == EMovementState::Sliding)
	//{
	//
	//	// Get Current Player Velocity
	//	FVector v3CurrentPlayerVelocity = (this->GetActorLocation() - m_v3LastUpdateLocation) / GetWorld()->GetDeltaSeconds();
	//	// Get Current Floor Normal
	//	const FVector kv3GroundNormal = this->CurrentFloor.HitResult.Normal;
	//
	//	// Update Braking Decelaration and Ground Friction if needed
	//	UpdateSlidePhysicalProperties(v3CurrentPlayerVelocity, kv3GroundNormal);

	//	//Inclined surf
	//	if (!kv3GroundNormal.Equals(FVector::UpVector))
	//	{
	//		FVector v3FloorInfluenceDirection = CalculateFloorInfluence(kv3GroundNormal);

	//		float fFloorSlopeInfluence = (FVector::DotProduct(kv3GroundNormal, FVector::UpVector));
	//		fFloorSlopeInfluence = fFloorSlopeInfluence * fFloorSlopeInfluence * fFloorSlopeInfluence * fFloorSlopeInfluence;
	//		fFloorSlopeInfluence = 1.0f - fFloorSlopeInfluence;

	//		FVector v3PlayerVelocityNormalized = v3CurrentPlayerVelocity;
	//		v3PlayerVelocityNormalized.Normalize();

	//		const float kfUpwardsMovementAmount = FVector::DotProduct(v3PlayerVelocityNormalized, FVector::UpVector);

	//		if (kfUpwardsMovementAmount > 0.0f)
	//		{
	//			fFloorSlopeInfluence += kfUpwardsMovementAmount * m_fSlideUpCounterForce;
	//		}

	//		AddForce(v3FloorInfluenceDirection * m_fFloorSlopeInfluenceMultiplier * fFloorSlopeInfluence);
	//	}
	//	
	//	const float kfCurrentSpeedSquared = v3CurrentPlayerVelocity.SizeSquared();
	//	float fMaxSlideSpeedSquared = m_fSlidingTerminalSpeed * m_fSlidingTerminalSpeed;
	//	if (kfCurrentSpeedSquared > fMaxSlideSpeedSquared)
	//	{
	//		v3CurrentPlayerVelocity.Normalize();
	//		v3CurrentPlayerVelocity *= m_fSlidingTerminalSpeed;
	//		this->Velocity = v3CurrentPlayerVelocity;
	//	}

	//	const float kfPlayerSpeedSquared = v3CurrentPlayerVelocity.SizeSquared();
	//	float fMinimumSlideSpeed = this->m_fMaxCrouchSpeed * 0.2f;
	//	float fMinimumSlideSpeedSquared = fMinimumSlideSpeed * fMinimumSlideSpeed;
	//	float fMaxSpeedForSlideUnlock = m_fMaxSprintSpeed;
	//	float fMaxSpeedForSlideUnlockSquared = fMaxSpeedForSlideUnlock * fMaxSpeedForSlideUnlock;
	//	// Stop sprint
	//	//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fMinimumSlideSpeedSquared));
	//	GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fMaxSpeedForSlideUnlockSquared));
	//	GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Blue, FString::SanitizeFloat(kfPlayerSpeedSquared / 100));
	//	if (kfPlayerSpeedSquared / 100 > 10000.f)
	//	{
	//		MaxWalkSpeed = 300;	
	//		//UE_LOG(LogTemp, Log, TEXT("Prima"));
	//		//StopSliding();
	//	}
	//	else if (kfPlayerSpeedSquared / 100 <= 700.f)
	//	{

	//		//UE_LOG(LogTemp, Log, TEXT("A doua"));
	//		StartMovementStateSwitch(EMovementState::Crouching);
	//		StopSprinting();
	//		StopSliding();		
	//	}

	//}

	//m_v3LastUpdateLocation = this->GetActorLocation();

	//VAULT CODE
	switch (m_eVaultingState)
	{
	case EVaultingState::Vaulting :
	{

	}
	break;

	default:
		break;
	}
}

void UPlayerMovementComponent::ResolveMovement()
{
	if (CanSprint())
	{
		StartMovementStateSwitch(EMovementState::Sprinting);

	}
	else
	{
		if (m_pSlideComponent->CanStand())
		{
			StartMovementStateSwitch(EMovementState::Walking);
		}
		else
		{
			StartMovementStateSwitch(EMovementState::Crouching);
		}
	}
}

//void UPlayerMovementComponent::CrouchTimelineProgress(float fTransitionProgress)
//{
//	float fNewHalfHeight = FMath::Lerp(m_fStandingCapsuleHalfHeight, m_fCrouchingCapsuleHalfHeight, fTransitionProgress);
//
//	m_pPlayerCharacter->GetCapsuleComponent()->SetCapsuleHalfHeight(fNewHalfHeight);
//
//	float fNewCameraRelativeZ = FMath::Lerp(m_fStandingCameraZOffSet, m_fCrouchingCameraZOffset, fTransitionProgress);
//
//	FVector v3CameraRelativeLocation = m_pCameraComponent->GetRelativeLocation();
//	v3CameraRelativeLocation.Z = fNewCameraRelativeZ;
//	m_pCameraComponent->SetRelativeLocation(v3CameraRelativeLocation);
//}

void UPlayerMovementComponent::PlayerJump()
{
	if (m_bIsJumping)
	{
		m_bIsJumping = false;
	}
	else
	{
		m_bIsJumping = true;
		if (m_iJumpCounter <= 1)
		{
			m_pPlayerCharacter->LaunchCharacter(FVector(0, 0 , m_fJumpHeight), false, true);
			m_iJumpCounter++;
		}
	}

	if (m_pSlideComponent->GetIsCrouched())
	{
		m_pSlideComponent->UnCrouching();
	}
}

void UPlayerMovementComponent::OnLanded(const FHitResult& Hit)
{
	if (eMovementState != EMovementState::Sliding)
	{
		// Try starting slide, if the player has speed and is holding both Sprint and Crouch keybinds
		m_pSlideComponent->SlideOnLand(Hit.Normal);
		UE_LOG(LogTemp, Log, TEXT("alo"));
		// If not sliding yet, means can't slide.
		// Resort to ResolveMovementMode, which will detect which mode it should transition to
		if (eMovementState != EMovementState::Sliding)
		{
			//ResolveMovement();
		}
	}
}

//void UPlayerMovementComponent::SlideOnLand(const FVector& kv3GroundNormal)
//{
//	m_v3OnLandedFloorNormal = kv3GroundNormal; 
//
//	// Get the holding crouch flag
//	const bool kbIsCrouching = m_bIsCrouching;
//
//	// Get Player Velocity
//	FVector v3PlayerVelocity = m_pPlayerCharacter->GetVelocity();
//
//	// Calculate Floor Angle through the Arccos of the dot product between the v3GroundNormal and the UpVector
//	const float kfFloorAngle = FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(kv3GroundNormal, FVector::UpVector)));
//	// Get the AutoSlide Floor Angle ( adjustable angle that will always enable sliding )
//	const float kfAutoSlideFloorAngle = m_fAutoSlideFloorAngle;
//	// kbAutoSlide indicates if the current floor angle enables AutoSlide
//	const bool kbAutoSlide = kfFloorAngle >= kfAutoSlideFloorAngle;
//	// Predict the velocity at which the player will be moving once they land into a slide
//	const FVector kv3PlayerSlideVelocity = GetSlideVelocityAfterLanding(kv3GroundNormal);
//	// The minimum speed for starting the slide from landing will be 90% of the sprint speed
//	const float kfMinSpeedSquared = (m_fMaxWalkSpeed * 0.9f) * (m_fMaxWalkSpeed * 0.9f);
//	// If the speed at which the player would move after landing into a slide is bigger than 90% of the sprint speed, kbHasSpeed is true
//	const bool kbHasSpeed = kv3PlayerSlideVelocity.SizeSquared() >= kfMinSpeedSquared;
//
//	UE_LOG(LogTemp, Log, TEXT("sppeed: %s"), kbHasSpeed ? TEXT("true") : TEXT("false"));
//	// If the player is holding crouch and 
//	// they either will have enough speed to start sliding OR this floor is so steep that AutoSlide is enabled
//	if (kbIsCrouching && (kbHasSpeed || kbAutoSlide))
//	{
//		// Begin transition to slide
//		StartMovementStateSwitch(EMovementState::Sliding);
//	}
//}

//const FVector UPlayerMovementComponent::GetSlideVelocityAfterLanding(const FVector& kv3FloorNormal) const
//{
//	// Get Player Velocity
//	FVector v3PlayerVelocity = m_pPlayerCharacter->GetVelocity();
//	// Get Player XY Velocity
//	FVector v3PlayerXYVelocity = v3PlayerVelocity;
//	v3PlayerXYVelocity.Z = 0.0f;
//
//	// If the normal of the ground is not equal to the world Up Vector, it means the direction of the slide will be influenced by the floor direction
//	if (!kv3FloorNormal.Equals(FVector::UpVector))
//	{
//		// Properly calculate floor direction
//		FVector v3FloorInfluenceDirection = CalculateFloorInfluence(kv3FloorNormal);
//
//		FVector v3PlayerXYVelocityDirection = v3PlayerXYVelocity;
//		v3PlayerXYVelocityDirection.Normalize();
//
//		FVector v3TransitionPlayerVelocity = v3PlayerVelocity;
//
//		float fDotProductPlayerXYDirWithFloorInfluenceDir = FVector::DotProduct(v3PlayerXYVelocityDirection, v3FloorInfluenceDirection);
//		if (fDotProductPlayerXYDirWithFloorInfluenceDir < 0.0f)
//		{
//			FVector v3PlayerXYProjected = FVector::VectorPlaneProject(v3PlayerXYVelocity, kv3FloorNormal);
//			v3TransitionPlayerVelocity.X = v3PlayerXYProjected.X;
//			v3TransitionPlayerVelocity.Y = v3PlayerXYProjected.Y;
//		}
//
//		v3TransitionPlayerVelocity.Z *= FVector::DotProduct(FVector::DownVector, v3FloorInfluenceDirection);
//
//
//		// If player has no XY movement, the slide direction will be the same as the floor influence direction
//		FVector v3SlideDirection = v3FloorInfluenceDirection;
//
//		// If player has XY movement, we need to properly calculate the v3SlideDirection
//		if (v3PlayerXYVelocity.SizeSquared() > 0.0f)
//		{
//			// The slide direction will take the player's initial velocity into account,
//			// we project the player velocity onto the surface plane so see where the player would end up moving towards
//			v3SlideDirection = FVector::VectorPlaneProject(v3TransitionPlayerVelocity, kv3FloorNormal);
//			v3SlideDirection.Normalize();
//		}
//
//		// Finally, the new player velocity will have the same direction as v3SlideDirection, and its length equal to the amount of speed that passed through the transition
//		return (v3SlideDirection * v3TransitionPlayerVelocity.Size());
//	}
//
//	// If on horizontal surface, just update velocity to be the same as before landing, except we ignore the Z component.
//	else
//	{
//		// This way, no horizontal speed is lost, and we don't do any complicated maths. 
//		return v3PlayerXYVelocity;
//	}
//}

void UPlayerMovementComponent::StartSprinting()
{
	if (CanSprint())
	{
		if (eMovementState == EMovementState::Crouching)
		{
			m_pSlideComponent->UnCrouching();
		}

		if (eMovementState != EMovementState::Crouching && !m_pSlideComponent->CanStand())
		{
			StartMovementStateSwitch(EMovementState::Sprinting);
			m_bIsSprinting = true;
		}
	}
		
}

void UPlayerMovementComponent::StopSprinting()
{
	if (!m_pSlideComponent->GetIsCrouched())
	{
		StartMovementStateSwitch(EMovementState::Walking);
	}
	if (eMovementState == EMovementState::Sprinting || eMovementState == EMovementState::Sliding)
	{
		//ResolveMovement();
	}
	m_bIsSprinting = false;
}

//void UPlayerMovementComponent::StartCrouching()
//{
//	if (eMovementState == EMovementState::Walking)
//	{
//		StartMovementStateSwitch(EMovementState::Crouching);
//	}
//	else if (eMovementState == EMovementState::Sprinting && GetCanSlideFromSprint(this->CurrentFloor.HitResult.Normal))
//	{
//		StartMovementStateSwitch(EMovementState::Sliding);
//	}
//
//}

//bool UPlayerMovementComponent::GetCanSlideFromSprint(const FVector& v3GroundNormal) const
//{
//	if (v3GroundNormal.Equals(FVector::UpVector))
//	{
//		return true;
//	}
//	// If on inclined surface
//	else
//	{
//		// Get floor direction
//		FVector v3FloorInfluenceDir = CalculateFloorInfluence(v3GroundNormal);
//		// Get Player movement vector aligned with the floor surface
//		FVector v3PlayerMoveDir = FVector::VectorPlaneProject(m_pPlayerCharacter->GetVelocity(), v3GroundNormal);
//		v3PlayerMoveDir.Normalize();
//
//		// Check if player is going up / down the slope
//		const float kfDotProductPlayerDirWithFloorDir = FVector::DotProduct(v3PlayerMoveDir, v3FloorInfluenceDir);
//		// If dot product >= 0.0f, player is going down, can always slide
//		if (kfDotProductPlayerDirWithFloorDir >= 0.0f)
//		{
//			return true;
//		}
//		// If dot product < 0.0f, player is going up the slope, we must check how far up the player is going
//		else
//		{
//			// Get player horizontal movement unit vector
//			FVector v3PlayerMoveXYDir = v3PlayerMoveDir;
//			v3PlayerMoveXYDir.Z = 0.0f;
//			v3PlayerMoveXYDir.Normalize();
//
//
//			const float kfUpMovementAngle = FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(v3PlayerMoveDir, v3PlayerMoveXYDir)));
//			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::SanitizeFloat(kfUpMovementAngle));
//			return kfUpMovementAngle <= m_fMaxAngleToSlideUpFromSprint;
//		}
//
//	}
//}
//
//void UPlayerMovementComponent::Crouching()
//{
//	m_CrouchingTimeline.Play();
//	m_bIsCrouching = true;
//	if (GEngine)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Began Crouch"));
//	}
//}
//
//void UPlayerMovementComponent::UnCrouching()
//{
//	if (CanStand())
//	{
//		if (eMovementState == EMovementState::Sliding)
//		{
//			StopSliding();
//		}
//		ResolveMovement();
//		m_CrouchingTimeline.Reverse();
//		m_bIsCrouching = false;
//		if (GEngine)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Stopped Crouch"));
//		}
//	}
//}
//
//void UPlayerMovementComponent::StartSliding( bool bFromSprint)
//{
//
//	Crouching();
//
//	// Apply initial speed boost if applicable
//	if (bFromSprint)
//	{
//		// Slide towards where the player is currently moving
//		const FVector kv3NewVelocity = GetPlayerChar()->GetVelocity().GetSafeNormal() * m_fMaxSprintSpeed;
//		this->Velocity = kv3NewVelocity;
//
//		FVector v3DashDirection = FVector::ZeroVector;
//		GEngine->AddOnScreenDebugMessage( -1, 1.5f, FColor::Cyan, TEXT( "Sprint" ) );
//
//		// Get floor normal
//		FVector v3GroundNormal = this->CurrentFloor.HitResult.Normal;
//		// If standing on a flat surface, just use forward vector for dash
//		if( v3GroundNormal.Equals( FVector::UpVector ) )
//		{
//			v3DashDirection = GetPlayerChar()->GetActorForwardVector();
//		}
//		// If not standing on a flat surface, we need to calculate the dash direction,
//		// which is parallel to the surface plane but still follows the player's facing direction
//		else
//		{
//			v3DashDirection = FVector::CrossProduct(GetPlayerChar()->GetActorRightVector(), v3GroundNormal );
//		}
//		// Add dash impulse
//		this->AddImpulse( v3DashDirection * m_fSlideInitialSpeedBoost );
//		// Start Dash Jump Lock Time
//		//GetCharacterMovementComponent()->SetJumpControlState( EFPJumpControlState::SlideDashing );
//	}
//	else
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Cyan, TEXT("Non sprint"));
//		GetSlideVelocityAfterLanding(m_v3OnLandedFloorNormal);
//	}
//	// Make player slidy
//	FVector v3Velocity = GetPlayerChar()->GetVelocity();
//
//	UpdateSlidePhysicalProperties( v3Velocity, m_v3OnLandedFloorNormal );
//}
//
//void UPlayerMovementComponent::StopSliding()
//{
//	if (GEngine)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Ended Slide"));
//	}
//
//	// Reset ground friction and deceleration values
//	this->GroundFriction = m_fWalkGroundFriction;
//	this->BrakingDecelerationWalking = m_fWalkBrakingDeceleration;
//
//	/*if (eMovementState != EMovementState::Crouching)
//	{
//		UnCrouching();
//	}*/
//}

void UPlayerMovementComponent::StartMovementStateSwitch(EMovementState eNewMovementState)
{
	if (eNewMovementState != eMovementState)
	{
		const TEnumAsByte<EMovementState> SurfaceEnum = eNewMovementState;
		FString EnumAsString = UEnum::GetValueAsString(SurfaceEnum.GetValue());

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, EnumAsString);
		}
		eMovementState = eNewMovementState;
		SetMovementState(eNewMovementState);
	}
}

void UPlayerMovementComponent::SetMovementState(EMovementState& eNewMovementState)
{
	switch (eNewMovementState)
	{
		//case EMovementState::Idle:
		//{

		//}
		//break;
		case EMovementState::Walking:
		{
			SetMaxSpeed(m_fMaxWalkSpeed);
			//m_bCanSprint = true;
		}
		break;
		case EMovementState::Sprinting:
		{
			SetMaxSpeed(m_fMaxSprintSpeed);
			//m_bCanSprint = false;
		}
		break;
		case EMovementState::Crouching:
		{
			SetMaxSpeed(m_fMaxCrouchSpeed);
            m_pSlideComponent->Crouching();
		}
		break;
		case EMovementState::Sliding:
		{
			bool bSprintBoost = m_bIsSprinting;
			UE_LOG(LogTemp, Log, TEXT("Initial Speed: %s"), bSprintBoost ? TEXT("true") : TEXT("false"));
			m_pSlideComponent->StartSliding(bSprintBoost);
		}
		break;
	}
}

float UPlayerMovementComponent::SetMaxSpeed(float maxSpeed)
{
	return MaxWalkSpeed = maxSpeed;
}

bool UPlayerMovementComponent::CanSprint() const
{
	const float kfMoveForward = m_pPlayerCharacter->GetInputAxisValue("Move Forward / Backward");
	// Get Right Axis Input Absolute Value
	const float kfAbsMoveSideways = FGenericPlatformMath::Abs(m_pPlayerCharacter->GetInputAxisValue("Move Right / Left"));

	//GEngine->AddOnScreenDebugMessage( -1, GetWorld()->GetDeltaSeconds(), FColor::Yellow, FString::Printf( TEXT( "Forward: %f" ), fMoveForward ) );
	//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Yellow, FString::Printf(TEXT("Sideways: %f"), kfAbsMoveSideways));
	const bool kbIsMovingForward = (kfMoveForward >= m_fSprintMinForward) && (kfAbsMoveSideways <= kfMoveForward);

	return (!m_bIsSprinting && kbIsMovingForward && !IsFalling() && !m_pSlideComponent->GetIsCrouched());
	/*if (!m_bIsSprinting)
	{
		return false;
	}
	else
	{
		if (CanStand() && !IsFalling())
		{
			return true;
		}
	}
	return true;*/
}

//bool UPlayerMovementComponent::CanStand() const
//{
//	/*if (m_bIsCrouching)
//	{
//		UE_LOG(LogTemp, Log, TEXT("ALO??"));
//		return false;
//	}*/
//
//	/*if ((eMovementState != EMovementState::Crouching && eMovementState != EMovementState::Sliding))
//	{
//		return true;
//	}*/
//
//	return GetCanOccupyStandingSpace();
//}
//
//FVector UPlayerMovementComponent::CalculateFloorInfluence( const FVector& kv3FloorNormal) const
//{
//	if (kv3FloorNormal.Equals(FVector::UpVector))
//	{
//		return FVector::ZeroVector;
//	}
//	else
//	{
//		FVector v3SlideDirection = FVector::CrossProduct(FVector::CrossProduct(FVector::UpVector, kv3FloorNormal), kv3FloorNormal);
//		v3SlideDirection.Normalize();
//		return v3SlideDirection;
//	}
//}
//
//void UPlayerMovementComponent::UpdateSlidePhysicalProperties(const FVector& v3CurrentPlayerVelocity, const FVector& v3FloorNormal)
//{
//	// If On Horizontal Surface
//	if (v3FloorNormal.Equals(FVector::UpVector))
//	{
//		this->BrakingDecelerationWalking = m_fSlidingBrakingDeceleration;
//	}
//	// Else, is on an inclined surface
//	else
//	{
//		float fDotProductUpWithFloorNormal = FVector::DotProduct(FVector::UpVector, v3FloorNormal);
//		fDotProductUpWithFloorNormal = fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal * fDotProductUpWithFloorNormal;
//		float fNewBrakingDecelaration = m_fSlidingBrakingDeceleration * fDotProductUpWithFloorNormal;
//		this->BrakingDecelerationWalking = fNewBrakingDecelaration;
//		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Red, FString::SanitizeFloat(fNewBrakingDecelaration));
//	}
//
//	const float kfCurrentSpeedSquared = v3CurrentPlayerVelocity.SizeSquared();
//	// Calculate the max speed before applying a friction change (It's the speed the player starts the slide coming from a sprint)
//	const float kfMaxSpeedBeforeFriction =	m_fMaxSprintSpeed + 1100.0f;
//	// Calculate max speed squared for runtime efficiency
//	const float kfMaxSpeedBeforeFrictionSquared = kfMaxSpeedBeforeFriction * kfMaxSpeedBeforeFriction;
//
//	// If going too fast
//	if (kfCurrentSpeedSquared > kfMaxSpeedBeforeFrictionSquared)
//	{
//		// Find out how inclined the surface is
//		const float kfFloorAngle = FMath::RadiansToDegrees(FGenericPlatformMath::Acos(FVector::DotProduct(v3FloorNormal, FVector::UpVector)));
//		// Check if player is accelerating or decelarating
//		if (kfFloorAngle < m_fAutoSlideFloorAngle)
//		{
//			const float kfAngleMultiplier = (m_fAutoSlideFloorAngle - kfFloorAngle) / m_fAutoSlideFloorAngle;
//			const float kfExtraSpeed = v3CurrentPlayerVelocity.Size() - kfMaxSpeedBeforeFriction;
//
//			float fNewGroundFriction = kfExtraSpeed * kfAngleMultiplier * 0.1f;
//			// Clamp to a max friction
//			if (fNewGroundFriction > 2.0f)
//			{
//				fNewGroundFriction = 2.0f;
//			}
//			//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::SanitizeFloat(fNewGroundFriction));
//			this->GroundFriction = fNewGroundFriction;
//		}
//		else
//		{
//			this->GroundFriction = 0.0f;
//		}
//	}
//	else
//	{
//		this->GroundFriction = 0.0f;
//	}
//}
//
//bool UPlayerMovementComponent::GetCanOccupyStandingSpace() const
//{
//	//if (m_bIsCrouching)
//	//{
//	//	return true;
//	//}
//	
//	UCapsuleComponent* PlayerCapsuleComponent = m_pPlayerCharacter->GetCapsuleComponent();
//	if (PlayerCapsuleComponent)
//	{
//		//Previus Capsule Trace
//		/*FVector CapsuleFeetLocation = m_pPlayerCharacter->GetActorLocation();
//		CapsuleFeetLocation.Z = PlayerCapsuleComponent->GetScaledCapsuleHalfHeight();
//		FVector CapsuleHeadLocation = m_pPlayerCharacter->GetActorLocation();
//		CapsuleHeadLocation.Z = PlayerCapsuleComponent->GetScaledCapsuleHalfHeight();
//		CapsuleHeadLocation.Z += m_fStandingCapsuleHalfHeight * 2;
//		TArray<FHitResult> OutHits;
//
//	FCollisionShape CollisionShape = FCollisionShape::MakeCapsule(m_fCrouchCapsuleRadius, PlayerCapsuleComponent->GetScaledCapsuleHalfHeight());
//
//	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, CapsuleFeetLocation, CapsuleHeadLocation, FQuat::Identity, ECollisionChannel::ECC_Visibility, CollisionShape);
//
//	if (isHit && m_bIsCrouching)
//	{
//		return false;
//	}
//	else if (!isHit && m_bIsCrouching)
//	{
//		return true;
//	}
//
//	for(auto& Hit : OutHits)
//	{
//		if (GEngine)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Hit Result: %s"), *Hit.GetActor()->GetName()));
//		}
//	}*/
//
//		// Define CapsuleTraceLocation
//		// This will be the centre location of the Walking state player capsule
//		// 1. Get location of centre of small crouched capsule 
//		FVector CapsuleTraceLocation = m_pPlayerCharacter->GetActorLocation();
//		// 2. Subtract half the height, get location of bottom of the capsule
//		CapsuleTraceLocation.Z -= PlayerCapsuleComponent->GetScaledCapsuleHalfHeight();
//		// 3. Add the standing half height, we have reached the centre of the standing capsule
//		CapsuleTraceLocation.Z += m_fStandingCapsuleHalfHeight;
//		
//		bool bSpaceOccluded = CheckCapsuleCollision(CapsuleTraceLocation, m_fStandingCapsuleHalfHeight, m_fCrouchCapsuleRadius, false);
//
//		if (bSpaceOccluded && m_bIsCrouching)
//		{
//			//UE_LOG(LogTemp, Log, TEXT("Ouch: %s"), *CapsuleHit.GetActor()->GetName());
//			return false;
//		}
//		else if(!bSpaceOccluded && m_bIsCrouching)
//		{
//			return true;
//		}
//
//	}
//	return false;
//}
//
//bool UPlayerMovementComponent::CheckCapsuleCollision(FVector Center, float HalfHeight, float Radius, bool DrawDebug)const
//{
//	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
//	ObjectTypeQuery.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
//	TArray<AActor*> ActorsToIgnore;
//	ActorsToIgnore.Add(m_pPlayerCharacter);
//	UClass* ActorClassFilter = AActor::StaticClass();
//	TArray<AActor*> ActorsFound;
//	bool bOverlapDetected = UKismetSystemLibrary::CapsuleOverlapActors(GetWorld(), Center, Radius, HalfHeight, ObjectTypeQuery, ActorClassFilter, ActorsToIgnore, ActorsFound);
//
//	if (DrawDebug)
//	{
//		FColor DebugColour = FColor::Red;
//		if (!bOverlapDetected)
//		{
//			DebugColour = FColor::Green;
//		}
//		DrawDebugCapsule(GetWorld(), Center, HalfHeight, Radius, FRotator(0.f, 0.f, 0.f).Quaternion(), DebugColour, false, 2.0f);
//	}
//	return bOverlapDetected;
//}

bool UPlayerMovementComponent::CanVault()
{
	bool bCanVault = false;

	if (m_eVaultingState == EVaultingState::Ready)
	{
		UCapsuleComponent* CapsuleComponent = m_pPlayerCharacter->GetCapsuleComponent();
		if (CapsuleComponent && m_pPlayerCharacter)
		{
			// do three horizontal traces
			const int iAmountOfHorizontalTraces = 4;
			// Current Forward Vector of the Character
			const FVector vActorForwardVector = m_pPlayerCharacter->GetActorForwardVector();
			const FVector vActorLocation = m_pPlayerCharacter->GetActorLocation();
			// use character location as the start location for the horizontal traces, as we want to check if there something vaultable within a certain distance from the player 
			FVector vTraceStartLocation = vActorLocation;
			vTraceStartLocation.Z += CapsuleComponent->GetScaledCapsuleHalfHeight();
			FVector vTraceEndLocation = vTraceStartLocation + (vActorForwardVector * m_fHorizontalDistance);

			// add owning player character to the list of actors to ignore, as we don't want the line trace to register the player character as a vaultable object
			FCollisionQueryParams Params;
			Params.AddIgnoredActor(m_pPlayerCharacter);

			for (int i = iAmountOfHorizontalTraces; i > 0; i--)
			{
				if (i != iAmountOfHorizontalTraces)
				{
					float fDecreaseZBy = 40.f;
					vTraceStartLocation.Z -= fDecreaseZBy;
					vTraceEndLocation.Z -= fDecreaseZBy;
				}

				FHitResult sVerticalHitResult;
				if (GetWorld() && GetWorld()->LineTraceSingleByChannel(sVerticalHitResult, vTraceStartLocation, vTraceEndLocation, ECC_Visibility, Params))
				{
					DrawDebugLine(GetWorld(), vTraceStartLocation, vTraceEndLocation, FColor::Red, true, 10.f);
					// The Trace should always be in front of the player 
					FVector TraceStartLocation = sVerticalHitResult.Location;// +(m_pOwningCharacter->GetActorForwardVector() * m_fVaultingDistance);

					// The vault max height is the same as the highest point on the Capsule Component of the Player Character
					// Since ActorLocation is in the middle of the Character we need to add the half height of the capsule to the Z Component
					// to get the highest point on the Capsule Component
					TraceStartLocation.Z += CapsuleComponent->GetScaledCapsuleHalfHeight();

					// The Trace will end at the same X and Y Coordinates, just with lower Z Coordinates, because the trace needs to go straight down
					// therefore the same Coordinates as TraceStartLocation are used, but the Z Coordinates are lowered by the entire capsule height to
					// have the trace go from the top of the capsule to the bottom of it
					// @TODO reword these comments
					FVector TraceEndLocation = TraceStartLocation;
					TraceEndLocation.Z -= (CapsuleComponent->GetScaledCapsuleHalfHeight() * 2.f);

					FHitResult HitResult;
					// line trace to determine whether there is something in front of the player in the world
					if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStartLocation, TraceEndLocation, ECC_GameTraceChannel5, Params))
					{
						//DrawDebugLine(GetWorld(), TraceStartLocation, TraceEndLocation, FColor::Red, true, 10.f);
						bCanVault = CanVaultToHit(CapsuleComponent, HitResult);

						return bCanVault;
					
					}
				}			
			}		
		}
	}
	
	return bCanVault;
}

bool UPlayerMovementComponent::CanVaultToHit(UCapsuleComponent* CapsuleComponent, FHitResult HitResult)
{
	// check if the player capusle component is 90.f or higher, because anything smaller means that the player is sliding or crouching
	if (m_pPlayerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() < 90.f)
	{
		return false;
	}

	// check whether vaulting height, calculated from the end of the trace to the trace's hit location, is within the specified range
	// doesn't allow vaulting when not in range
	float fVaultingHeight = (HitResult.Location - HitResult.TraceEnd).Size();
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::SanitizeFloat(fVaultingHeight));
	if (!(UKismetMathLibrary::InRange_FloatFloat(fVaultingHeight, m_iMinVaultingHeight, m_iMaxVaultingHeight, true, true)))
	{

		return false;
	}

	// Make sure the surface we're vaulting to is walkable
	if (HitResult.ImpactNormal.Z < m_pPlayerCharacter->GetCharacterMovement()->GetWalkableFloorZ())
	{

		return false;
	}

	// Get the Hit Location from the initial trace to check whether there is anything in front of the player
	// This is then used to do a capsule trace with the same dimensions as the capsule component of the player
	// Since the Hit Location will be directly on the surface of the object, the Z Coordinate for the trace needs to be
	// lifted up by the Player's Capsule Components Half Height, because the Location provided to the Capsule Trace
	// requires a center location. Not lifting up the Z Coordinate by the Half Height would mean that half of the Capsule Trace
	// would be inside of the object.
	FVector CapsuleTraceLocation = HitResult.Location;
	CapsuleTraceLocation.Z += CapsuleComponent->GetScaledCapsuleHalfHeight();

	CapsuleTraceLocation.Z += CapsuleComponent->GetScaledCapsuleRadius();

	// Make sure that there is enough room for us on top of the ledge
	if (m_pSlideComponent->CheckCapsuleCollision(CapsuleTraceLocation, CapsuleComponent->GetScaledCapsuleHalfHeight(), CapsuleComponent->GetScaledCapsuleRadius(), false))
	{

		return false;
	}

	m_v3VaultEndLocation = CapsuleTraceLocation;
	return true;
}

//bool UVaultingComponent::CheckCapsuleCollision(FVector Center, float HalfHeight, float Radius, bool DrawDebug)
//{
//	if (DrawDebug)
//	{
//		DrawDebugCapsule(GetWorld(), Center, HalfHeight, Radius, FRotator(0.f, 0.f, 0.f).Quaternion(), FColor::Red, true, 10.f);
//	}
//
//	// Does a capsule trace in the world at the provided Location (FVector Center)
//	// to determine whether there is enough space for the player's capsule component
//	// on top of the vaultable object
//	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
//	ObjectTypeQuery.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
//	TArray<AActor*> ActorsToIgnore;
//	ActorsToIgnore.Add(m_pOwningCharacter);
//	UClass* ActorClassFilter = AActor::StaticClass();
//	TArray<AActor*> ActorsFound;
//	return UKismetSystemLibrary::CapsuleOverlapActors(GetWorld(), Center, Radius, HalfHeight, ObjectTypeQuery, ActorClassFilter, ActorsToIgnore, ActorsFound);
//}