// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Enemy_AnimInstance.generated.h"

class ABP_EnemyCharacter;

UCLASS()
class PROTOTYPEPROJECT_API UEnemy_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);

private:

	UPROPERTY(BlueprintReadOnly, Category = "Enemy", meta = (AllowPrivateAccess = true))
	ABP_EnemyCharacter* m_pOwnerPawn;

	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = true))
	float speed;

};
