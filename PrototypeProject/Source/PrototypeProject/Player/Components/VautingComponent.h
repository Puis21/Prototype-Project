// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PrototypeProject/Player/Components/ParkourMovementComponent.h"
#include "VautingComponent.generated.h"

class UCapsuleComponent;

UENUM(BlueprintType)
enum class EVaultingState : uint8
{
	Ready			UMETA(DisplayName = "Ready"),
	WantsToVault		UMETA(DisplayName = "WantsToVault"),
	Vaulting		UMETA(DisplayName = "Vaulting"),
	Unavailable		UMETA(DisplayName = "Unavailable")
};


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROTOTYPEPROJECT_API UVautingComponent : public UParkourMovementComponent
{
	GENERATED_BODY()
	
public:

	UVautingComponent();

	bool CanVault();

	bool CanVaultToHit(UCapsuleComponent* CapsuleComponent, FHitResult HitResult);

protected:

	virtual void BeginPlay();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	EVaultingState m_eVaultingState;

	UPROPERTY(EditDefaultsOnly, Category = "Custom Movement | Vaulting",
	meta = (AllowPrivateAccess = "true", ClampMin = "0.0", ClampMax = "200.0", UIMin = "0.0", UIMax = "200.0"),
	DisplayName = "Vaulting Horizontal Distance")
	float m_fHorizontalDistance;

	int m_iMinVaultingHeight;

	int m_iMaxVaultingHeight;

	FVector m_v3VaultEndLocation;
};
