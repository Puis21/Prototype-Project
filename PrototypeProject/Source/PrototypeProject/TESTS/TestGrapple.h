// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestGrapple.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;
class AGrappleTarget;
class USceneComponent;

UCLASS()
class PROTOTYPEPROJECT_API ATestGrapple : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestGrapple();

private:
	
	UPROPERTY(VisibleDefaultsOnly)
	USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UProjectileMovementComponent* m_pGrappleProjectile;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* m_pMeshComp;


	FVector m_v3StartingLocation;
	FVector m_v3EndingLocation;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
	AGrappleTarget* m_pGrappleTarget;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
		FVector m_v3Direction;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
		float m_fProjectileSpeed;

	void SetGrappleTarget(AActor* Target);

};