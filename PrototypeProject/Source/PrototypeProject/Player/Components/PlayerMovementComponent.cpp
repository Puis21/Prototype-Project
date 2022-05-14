// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMovementComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/SlideComponent.h"
#include "PrototypeProject/Player/Components/VautingComponent.h"
#include <Components/CapsuleComponent.h>
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "PrototypeProject/Player/Camera/PlayerCameraComponent.h"
#include "Camera/CameraComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent():
m_iJumpCounter(0),
m_fJumpHeight(600.f),
m_bIsJumping(false),
m_fMaxWalkSpeed(600.f),
m_fMaxSprintSpeed(1000.f),
m_fSprintMinForward(0.9f),
m_bIsSprinting(false)
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
	m_pVaultingComponent = m_pPlayerCharacter->GetVaultingComponent();

	StartMovementStateSwitch(EMovementState::Walking);

}

void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

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
	//UE_LOG(LogTemp, Log, TEXT("Crouched %s"), m_bIsJumping ? TEXT("true") : TEXT("false"));

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

void UPlayerMovementComponent::PlayerJump()
{
	if(m_pVaultingComponent)
	{ 
		if (m_pVaultingComponent->CanVault())
		{
			m_pVaultingComponent->Vault();
		}
		else
		{
			if (m_bIsJumping)
			{
				m_bIsJumping = false;
				//UE_LOG(LogTemp, Log, TEXT("alo"));
			}
			else
			{
				m_bIsJumping = true;
				if (m_iJumpCounter < 1)
				{
					m_pPlayerCharacter->LaunchCharacter(FVector(0, 0, m_fJumpHeight), false, true);
					m_iJumpCounter++;

				}
			}

			if (m_pSlideComponent->GetIsCrouched())
			{
				m_pSlideComponent->UnCrouching();
			}
		}
	}
}


void UPlayerMovementComponent::OnLanded(const FHitResult& Hit)
{
	if (eMovementState != EMovementState::Sliding)
	{
		// Try starting slide, if the player has speed and is holding both Sprint and Crouch keybinds
		m_pSlideComponent->SlideOnLand(Hit.Normal);
		//UE_LOG(LogTemp, Log, TEXT("alo"));
		// If not sliding yet, means can't slide.
		// Resort to ResolveMovementMode, which will detect which mode it should transition to
		if (eMovementState != EMovementState::Sliding)
		{
			//ResolveMovement();
		}
	}
}

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
			SetMaxSpeed(GetSlideComponent()->GetCrouchSpeed());
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
}