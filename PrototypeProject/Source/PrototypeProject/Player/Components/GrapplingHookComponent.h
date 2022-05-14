// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrototypeProject/GrappleState.h"

#include "GrapplingHookComponent.generated.h"

class APlayerCharacter;
class AGrappleTarget;

class UPlayerCameraComponent;
class AActor;
class AGrappleHook;
class ATestGrapple;
class AGrappleLine;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPEPROJECT_API UGrapplingHookComponent : public UActorComponent
{
	GENERATED_BODY()


public:
	// Sets default values for this component's properties
	UGrapplingHookComponent();

	void AttemptGrapple();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AGrappleHook> m_pGrappleHook;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AGrappleLine> m_pGrappleLine;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ATestGrapple> TestGrapple;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EGrappleState m_eGrappleState;

	APlayerCharacter* m_pPlayerCharacter;

	AGrappleTarget* m_pGrappleTarget;

	UPlayerCameraComponent* m_pPlayerCamera;

	class AActor* m_pOwnerActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grappple", meta = (AllowPrivateAccess = "true"), DisplayName = "Gapple Target Display Range")
	float m_fMaxGrappleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grappple", meta = (AllowPrivateAccess = "true"), DisplayName = "Gapple Speed")
	float m_fPlayerGrappleSpeed;

	float fBestAngle;
	AActor* BestGrappleTarget;
	AActor* LastGrappleTarget;

	AGrappleTarget* BestGrapple;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void TickRetracted();
	void TickFiring();
	void TickNearingTarget();
	void TickOnTarget(float DeltaTime);

	FVector GetOwnerToTarget();

	void SetCurrentTarget(AActor* NewGrappleTarget);

	AActor* FindBestTarget(TArray<AActor*> const Targets);

private:

	FORCEINLINE EGrappleState GetGrappleState() const { return m_eGrappleState; }
};
