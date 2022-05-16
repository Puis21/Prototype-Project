// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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
class UMatineeCameraShake;

UCLASS(config = Game)
class PROTOTYPEPROJECT_API APlayerCharacter : public ACharacter
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

protected:

	virtual void BeginPlay();
	
	/** Fires a projectile. */
	//void OnPrimaryAction();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

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

	//void CrouchButtonReleased();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	APlayerCharacter(const FObjectInitializer& ObjectInitializer);
	virtual void PostInitializeComponents() override;	

public:

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float TurnRate;

public:

	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UPlayerCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	USlideComponent* GetSlideComponent() const {return m_ACSlideComponent; }
	UVautingComponent* GetVaultingComponent() const { return m_ACVaultComponent; }

	UPlayerMovementComponent* GetCustomMovementComponent() const { return m_ACPlayerMovementComponent; }

};
