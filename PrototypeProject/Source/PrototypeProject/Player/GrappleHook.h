// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrappleHook.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;
class AGrappleTarget;

UCLASS()
class PROTOTYPEPROJECT_API AGrappleHook : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrappleHook();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
	UPROPERTY(EditAnywhere)
	UProjectileMovementComponent* m_pGrappleProjectile;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_pMeshComp;

	FVector m_v3StartingLocation;
	FVector m_v3EndingLocation;
	FVector m_v3Direction;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
	AGrappleTarget* m_pTargetLocation;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
	float m_fProjectileSpeed;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
