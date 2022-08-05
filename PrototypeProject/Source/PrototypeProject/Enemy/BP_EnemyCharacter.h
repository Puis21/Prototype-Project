// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BP_EnemyCharacter.generated.h"

class UAnimMontage;
class UAnimInstance;

UCLASS()
class PROTOTYPEPROJECT_API ABP_EnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABP_EnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "AI Attack")
	void SwordAttack();

	void SwordAttackTrace();

	void EndAttack();

	void NextAttackedQueued();

	void SetNextComboSegment(FName Combo);

	void SetDefaultComboState();

private:

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	UAnimMontage* SwordComboMontage;

	UAnimInstance* AnimInstance;

	bool m_bIsAttacking;
	bool m_bCanDamage;
	bool m_bCanQueuNextAttack;

	UPROPERTY(EditAnywhere, Category = "Behavior Tree", meta = (AlowPrivateAccess = "true"))
	class UBehaviorTree* BehaviorTree;

	UPROPERTY(VisibleAnywhere)
	FName ComboAttack;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	FName DefaultComboAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack", meta = (AllowPrivateAccess = "true"))
	float m_fSwingSpeed;

public:

	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return BehaviorTree; }
	FORCEINLINE void SetCanDamage(bool CanDamage) { m_bCanDamage = CanDamage; }
};
