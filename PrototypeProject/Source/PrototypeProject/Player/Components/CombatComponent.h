// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

class APlayerCharacter;
class UPlayerMovementComponent;
class AKatanaWeapon;
class UAnimMontage;
class UAnimInstance;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPEPROJECT_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatComponent();

	friend class APlayerCharacter;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AKatanaWeapon> Katana;

	AKatanaWeapon* KatanaEquipped;

	APlayerCharacter* m_pPlayerCharacter;

	UPlayerMovementComponent* m_pPlayerMovementComponent;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	UAnimMontage* SwordComboMontage;

	UAnimInstance* AnimInstance;

	bool m_bIsAttacking;
	bool m_bIsBlocking;
	bool m_bCanDamage;
	bool m_bCanQueuNextAttack;

	bool m_bStartingAbility1;

	UPROPERTY(VisibleAnywhere)
	FName ComboAttack;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	FName DefaultComboAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack", meta = (AllowPrivateAccess = "true"))
	float m_fSwingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability1", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AAbilityProjectile> AbilityClass;

	AAbilityProjectile* AbilityProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shake", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UCameraShakeBase> ShakeClass;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	void SwordAttack();

	void SwordAttackTrace();

	void StartSwordBlock();

	void EndSwordBlock();

	void EndAttack();

	void NextAttackedQueued();

	void SetNextComboSegment(FName Combo);

	void SetDefaultComboState();

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void StartFiringProj();

	void ThrowTracer(FHitResult& TracerHitResult);

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void ShootProjectile();

	FVector HitTarget;

public:

	FORCEINLINE bool GetIsBlocking() const { return m_bIsBlocking; }
	FORCEINLINE bool GetStarting() const { return m_bStartingAbility1; }

	FORCEINLINE void SetCanDamage(bool CanDamage) { m_bCanDamage = CanDamage ; }

	UFUNCTION(BlueprintCallable)
	void SetStarting(bool Start) { m_bStartingAbility1 = Start; }

};
