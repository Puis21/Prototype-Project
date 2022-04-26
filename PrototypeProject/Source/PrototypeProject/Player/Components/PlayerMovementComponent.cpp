// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMovementComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include <Components/CapsuleComponent.h>
#include "Camera/CameraComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent():
m_iJumpCounter(0),
m_fJumpHeight(600.f),
m_bIsJumping(false),
m_fMaxWalkSpeed(600.f),
m_fMaxSprintSpeed(1000.f),
m_bIsSprinting(false),
m_bIsCrouching(false)
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

    // Set Standing Capsule Half Height
	m_fStandingCapsuleHalfHeight = m_pPlayerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	// Set Relative Z Offset on Camera
	m_fStandingCameraZOffSet = m_pCameraComponent->GetRelativeLocation().Z;

    if (m_pCapsuleHalfHeightCurve)
	{
		FOnTimelineFloat TimelineProgress;
		TimelineProgress.BindUFunction(this, FName("CrouchTimelineProgress"));
		m_CrouchingTimeline.AddInterpFloat(m_pCapsuleHalfHeightCurve, TimelineProgress);
		m_CrouchingTimeline.SetLooping(false);
	}

	StartMovementStateSwitch(EMovementState::Walking);
}

void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (m_CrouchingTimeline.IsPlaying())
	{
		m_CrouchingTimeline.TickTimeline(DeltaTime);
	}

	if ((eMovementState == EMovementState::Crouching) && (CanStand()))
	{
		ResolveMovement();
	}

	//const UEnum* MovementStateEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EMovementState"));
	//const TEnumAsByte<EMovementMode> SurfaceEnum = MoveMode;
	//FString EnumAsString = UEnum::GetValueAsString(SurfaceEnum.GetValue());

	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Black, EnumAsString);
		//GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Cyan, FString("ALO?"));
	}

	//UE_LOG(LogTemp, Log, TEXT("MyBool is %f"), MaxWalkSpeed);
	UE_LOG(LogTemp, Log, TEXT("my enum: %s"), *UEnum::GetValueAsName(eMovementState).ToString());
}

void UPlayerMovementComponent::CrouchTimelineProgress(float fTransitionProgress)
{
	float fNewHalfHeight = FMath::Lerp(m_fStandingCapsuleHalfHeight, m_fCrouchingCapsuleHalfHeight, fTransitionProgress);

	m_pPlayerCharacter->GetCapsuleComponent()->SetCapsuleHalfHeight(fNewHalfHeight);

	float fNewCameraRelativeZ = FMath::Lerp(m_fStandingCameraZOffSet, m_fCrouchingCameraZOffset, fTransitionProgress);

	FVector v3CameraRelativeLocation = m_pCameraComponent->GetRelativeLocation();
	v3CameraRelativeLocation.Z = fNewCameraRelativeZ;
	m_pCameraComponent->SetRelativeLocation(v3CameraRelativeLocation);
}

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
}

void UPlayerMovementComponent::StartSprinting()
{
	if(eMovementState == EMovementState::Crouching)
	{
		UnCrouching();
	}
	StartMovementStateSwitch(EMovementState::Sprinting);
	m_bIsSprinting = true;
	
}

void UPlayerMovementComponent::StopSprinting()
{
	StartMovementStateSwitch(EMovementState::Walking);
	m_bIsSprinting = false;
	ResolveMovement();
	
}

void UPlayerMovementComponent::StartCrouching()
{
	if (eMovementState == EMovementState::Walking || eMovementState == EMovementState::Sprinting)
	{
		StartMovementStateSwitch(EMovementState::Crouching);
	}
	else if (eMovementState == EMovementState::Sprinting)
	{
		//StartMovementStateSwitch(EMovementState::Sliding);
	}

}

void UPlayerMovementComponent::Crouching()
{
	if (!m_bIsCrouching)
	{
		m_CrouchingTimeline.Play();
		m_bIsCrouching = true;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Began Crouch"));
		}
	}
}

void UPlayerMovementComponent::UnCrouching()
{
	if (m_bIsCrouching)
	{
		m_CrouchingTimeline.Reverse();
		m_bIsCrouching = false;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("Stopped Crouch"));
		}
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
		if (CanStand())
		{
			StartMovementStateSwitch(EMovementState::Walking);
		}
		else
		{
			StartMovementStateSwitch(EMovementState::Crouching);
		}
	}
}

void UPlayerMovementComponent::StartMovementStateSwitch(EMovementState eNewMovementState)
{
	if (eNewMovementState != eMovementState)
	{
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
            Crouching();
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
	if (!m_bIsSprinting)
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
	return true;
}

bool UPlayerMovementComponent::CanStand() const
{
	if (m_bIsCrouching)
	{
		return false;
	}

	if ((eMovementState != EMovementState::Crouching && eMovementState != EMovementState::Sliding))
	{
		return true;
	}

	return true;

}