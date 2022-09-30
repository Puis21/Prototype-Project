// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "PrototypeProject/Player/Components/InteractionInterface.h"

#include "PlayerCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UAnimMontage;
class USoundBase;
class UCapsuleComponent;
class UPlayerMovementComponent;
class UGrapplingHookComponent;
class USlideComponent;
class UVautingComponent;
class UPlayerCameraComponent;
class UCombatComponent;
class UGASAbilitySystemComponent;
class UGASAttributeSet;

UCLASS(config = Game)
class PROTOTYPEPROJECT_API APlayerCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly,Category = Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UPlayerCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "First Person Character Movement Component")
	UPlayerMovementComponent* m_ACPlayerMovementComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Grappling Hook Component")
	UGrapplingHookComponent* m_ACGrapplingHookComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Slide Component")
	USlideComponent* m_ACSlideComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Vault Component")
	UVautingComponent* m_ACVaultComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Combat Component")
	UCombatComponent* m_ACCombatComponent;

	//Declare Ability System Component
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Ability System Component")
	UGASAbilitySystemComponent* m_ACAbilitySystemComponent;

	UPROPERTY()
	UGASAttributeSet* Attributes;

	IInteractionInterface* Interact;

protected:

	virtual void BeginPlay();

	/** Fires a projectile. */
	//void OnPrimaryAction();

	/** Handles moving forward/backward */
	void MoveForward(float Value);

	/** Handles strafing movement, left and right */
	void MoveRight(float Value);

	void FlyVertical(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	virtual void Landed(const FHitResult& Hit) override;

	void JumpButtonPressed();

	void SprintButtonPressed();

	void SprintButtonReleased();

	void CrouchButtonPressed();

	void GrappleButtonPressed();

	void OnInteractPressed();

	void LMBPressed();

	void RMBPressed();
	//void CrouchButtonReleased();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	APlayerCharacter(const FObjectInitializer& ObjectInitializer);
	virtual void PostInitializeComponents() override;	

	//Get Ability System Comp
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void InitializeAttributes();
	virtual void GiveStartAbilities();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

//	UFUNCTION(BlueprintCallable, Category = "Abilities")
	//	void GrantAbility(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level, int32 InputCode);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "GAS")
	TSubclassOf<class UGameplayEffect> DefaultAttributeSet;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "GAS")
	TArray<TSubclassOf<class UGASGameplayAbility>> DefaultAbilities;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float TurnRate;

private:
 
	class UAIPerceptionStimuliSourceComponent* stimulus;

	void SetupStimulus();

	FHitResult HitResultInteraction;

public:

	//GETTERS
	FORCEINLINE USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	FORCEINLINE UPlayerCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	FORCEINLINE	USlideComponent* GetSlideComponent() const {return m_ACSlideComponent; }
	FORCEINLINE	UVautingComponent* GetVaultingComponent() const { return m_ACVaultComponent; }
	FORCEINLINE	UCombatComponent* GetCombatComponent() const { return m_ACCombatComponent; }
	FORCEINLINE	UPlayerMovementComponent* GetCustomMovementComponent() const { return m_ACPlayerMovementComponent; }

};
