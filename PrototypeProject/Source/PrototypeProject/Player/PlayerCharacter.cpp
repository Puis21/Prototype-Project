// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Animation/AnimInstance.h"
#include "PrototypeProject/Player/Camera/PlayerCameraComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/PlayerMovementComponent.h"
#include "Components/GrapplingHookComponent.h"
#include "Components/SlideComponent.h"
#include "Components/VautingComponent.h"
#include "Components/CombatComponent.h"

#include "PrototypeProject/Player/GAS/GASAbilitySystemComponent.h"
#include "PrototypeProject/Player/GAS/GASGameplayAbility.h"
#include "PrototypeProject/Player/GAS/GASAttributeSet.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbility.h"

// Sets default values
APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UPlayerMovementComponent>(CharacterMovementComponentName))
{

	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UPlayerCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	//Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	m_ACGrapplingHookComponent = CreateDefaultSubobject<UGrapplingHookComponent>(TEXT("Grappling Hook Component"));

	m_ACSlideComponent = CreateDefaultSubobject<USlideComponent>(TEXT("Slide Component"));

	m_ACVaultComponent = CreateDefaultSubobject<UVautingComponent>(TEXT("Vault Component"));

	m_ACCombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));

	m_ACAbilitySystemComponent = CreateDefaultSubobject<UGASAbilitySystemComponent>(TEXT("Ability System Component"));
	m_ACAbilitySystemComponent->SetIsReplicated(true);
	m_ACAbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full);

	Attributes = CreateDefaultSubobject<UGASAttributeSet>(TEXT("Attributes"));
		
}

void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	UPlayerMovementComponent* pPlayerMovementComponent = Cast<UPlayerMovementComponent>(GetCharacterMovement());
	if (pPlayerMovementComponent)
	{
		m_ACPlayerMovementComponent = pPlayerMovementComponent;
	}

	if (m_ACCombatComponent)
	{
		m_ACCombatComponent->m_pPlayerCharacter = this;
	}

}

class UAbilitySystemComponent* APlayerCharacter::GetAbilitySystemComponent() const
{
	return m_ACAbilitySystemComponent;
}

void APlayerCharacter::InitializeAttributes()
{
	if (m_ACAbilitySystemComponent && DefaultAttributeSet)
	{
		FGameplayEffectContextHandle EffectContext = m_ACAbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		FGameplayEffectSpecHandle SpecHandle = m_ACAbilitySystemComponent->MakeOutgoingSpec(DefaultAttributeSet, 1, EffectContext);

		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle GEHandle = m_ACAbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
}

void APlayerCharacter::GiveStartAbilities()
{
	if (HasAuthority() && m_ACAbilitySystemComponent)
	{
		for (TSubclassOf<UGASGameplayAbility>& StartupAbility : DefaultAbilities)
		{
			m_ACAbilitySystemComponent->GiveAbility(
				FGameplayAbilitySpec(StartupAbility, 1, static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID), this));
		}
	}
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	m_ACAbilitySystemComponent->InitAbilityActorInfo(this, this);

	InitializeAttributes();
	GiveStartAbilities();
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	m_ACAbilitySystemComponent->InitAbilityActorInfo(this, this);

	InitializeAttributes();

	if (m_ACAbilitySystemComponent && DefaultAttributeSet)
	{
		const FGameplayAbilityInputBinds Binds("Confirm", "Cancel", "EGASAbilityInputID", static_cast<int32>(EGASAbilityInputID::Confirm), static_cast<int32>(EGASAbilityInputID::Cancel));
		m_ACAbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::JumpButtonPressed);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::JumpButtonPressed);

	//Bind Crouch events
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APlayerCharacter::CrouchButtonPressed);

	// Bind attack event
	PlayerInputComponent->BindAction("LMB", IE_Pressed, this, &APlayerCharacter::LMBPressed);

	//Bind Block Event
	PlayerInputComponent->BindAction("RMB", IE_Pressed, this, &APlayerCharacter::RMBPressed);
	PlayerInputComponent->BindAction("RMB", IE_Released, this, &APlayerCharacter::RMBPressed);

	//Grapple
	PlayerInputComponent->BindAction("Grapple", IE_Pressed, this, &APlayerCharacter::GrappleButtonPressed);

	//Sprint Event
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerCharacter::SprintButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayerCharacter::SprintButtonReleased);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &APlayerCharacter::MoveRight);

	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APlayerCharacter::LookUpAtRate);

	if (m_ACAbilitySystemComponent && DefaultAttributeSet)
	{
		const FGameplayAbilityInputBinds Binds("Confirm", "Cancel", "EGASAbilityInputID", static_cast<int32>(EGASAbilityInputID::Confirm), static_cast<int32>(EGASAbilityInputID::Cancel));
		m_ACAbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}

}

void APlayerCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if (m_ACPlayerMovementComponent)
	{
		m_ACPlayerMovementComponent->SetJumpCounter(0);
		m_ACPlayerMovementComponent->OnLanded( Hit );
	}

}

void APlayerCharacter::JumpButtonPressed()
{
	if (m_ACPlayerMovementComponent && m_ACVaultComponent->GetVaultingState() != EVaultingState::Vaulting)
	{
		m_ACPlayerMovementComponent->PlayerJump();
	}

	if (m_ACVaultComponent->GetVaultingState() == EVaultingState::Vaulting && m_ACVaultComponent->GetProgress() > 0.4)
	{
		m_ACVaultComponent->SetVaultJump(true);
	}
}

void APlayerCharacter::SprintButtonPressed()
{
	if (m_ACPlayerMovementComponent)
	{
		m_ACPlayerMovementComponent->StartSprinting();
	}
}

void APlayerCharacter::SprintButtonReleased()
{
	if (m_ACPlayerMovementComponent)
	{
		m_ACPlayerMovementComponent->StopSprinting();
	}
}

void APlayerCharacter::CrouchButtonPressed()
{
	if(m_ACPlayerMovementComponent && m_ACSlideComponent)
	{
		if (!m_ACSlideComponent->GetIsCrouched())
		{
			m_ACSlideComponent->StartCrouching();
		}
		else
		{
			m_ACSlideComponent->UnCrouching();
		}
	}
}

void APlayerCharacter::LMBPressed()
{
	if (m_ACCombatComponent)
	{
		m_ACCombatComponent->SwordAttack();
	}
}

void APlayerCharacter::RMBPressed()
{
	if (m_ACCombatComponent)
	{
		if (!m_ACCombatComponent->GetIsBlocking())
		{
			m_ACCombatComponent->StartSwordBlock();
		}
		else
		{
			m_ACCombatComponent->EndSwordBlock();
		}
	}
}

void APlayerCharacter::GrappleButtonPressed()
{
	if (m_ACGrapplingHookComponent)
	{
		m_ACGrapplingHookComponent->AttemptGrapple();
	}
}

void APlayerCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void APlayerCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate);
}

void APlayerCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate);
}


