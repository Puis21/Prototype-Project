// Fill out your copyright notice in the Description page of Project Settings.


#include "VautingComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/PlayerMovementComponent.h"
#include "PrototypeProject/Player/Components/SlideComponent.h"
#include <Components/CapsuleComponent.h>
#include "Kismet/KismetMathLibrary.h"

UVautingComponent::UVautingComponent():
m_fHorizontalDistance(200.f),
m_iMinVaultingHeight(50.f),
m_iMaxVaultingHeight(170.f)
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UVautingComponent::BeginPlay()
{
	Super::BeginPlay();

	m_eVaultingState = EVaultingState::Ready;

}

void UVautingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	switch (m_eVaultingState)
	{
	case EVaultingState::Vaulting:
	{

	}
	break;

	default:
		break;
	}

}

bool UVautingComponent::CanVault()
{
	bool bCanVault = false;

	if (m_eVaultingState == EVaultingState::Ready)
	{
		UCapsuleComponent* CapsuleComponent = GetPlayer()->GetCapsuleComponent();
		if (CapsuleComponent && GetPlayer())
		{
			// do three horizontal traces
			const int iAmountOfHorizontalTraces = 4;
			// Current Forward Vector of the Character
			const FVector vActorForwardVector = GetPlayer()->GetActorForwardVector();
			const FVector vActorLocation = GetPlayer()->GetActorLocation();
			// use character location as the start location for the horizontal traces, as we want to check if there something vaultable within a certain distance from the player 
			FVector vTraceStartLocation = vActorLocation;
			vTraceStartLocation.Z += CapsuleComponent->GetScaledCapsuleHalfHeight();
			FVector vTraceEndLocation = vTraceStartLocation + (vActorForwardVector * m_fHorizontalDistance);

			// add owning player character to the list of actors to ignore, as we don't want the line trace to register the player character as a vaultable object
			FCollisionQueryParams Params;
			Params.AddIgnoredActor(GetPlayer());

			for (int i = iAmountOfHorizontalTraces; i > 0; i--)
			{
				if (i != iAmountOfHorizontalTraces)
				{
					float fDecreaseZBy = 40.f;
					vTraceStartLocation.Z -= fDecreaseZBy;
					vTraceEndLocation.Z -= fDecreaseZBy;
				}

				FHitResult sVerticalHitResult;
				if (GetWorld() && GetWorld()->LineTraceSingleByChannel(sVerticalHitResult, vTraceStartLocation, vTraceEndLocation, ECC_Visibility, Params))
				{
					DrawDebugLine(GetWorld(), vTraceStartLocation, vTraceEndLocation, FColor::Red, true, 10.f);
					// The Trace should always be in front of the player 
					FVector TraceStartLocation = sVerticalHitResult.Location;// +(m_pOwningCharacter->GetActorForwardVector() * m_fVaultingDistance);

					// The vault max height is the same as the highest point on the Capsule Component of the Player Character
					// Since ActorLocation is in the middle of the Character we need to add the half height of the capsule to the Z Component
					// to get the highest point on the Capsule Component
					TraceStartLocation.Z += CapsuleComponent->GetScaledCapsuleHalfHeight();

					// The Trace will end at the same X and Y Coordinates, just with lower Z Coordinates, because the trace needs to go straight down
					// therefore the same Coordinates as TraceStartLocation are used, but the Z Coordinates are lowered by the entire capsule height to
					// have the trace go from the top of the capsule to the bottom of it
					// @TODO reword these comments
					FVector TraceEndLocation = TraceStartLocation;
					TraceEndLocation.Z -= (CapsuleComponent->GetScaledCapsuleHalfHeight() * 2.f);

					FHitResult HitResult;
					// line trace to determine whether there is something in front of the player in the world
					if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStartLocation, TraceEndLocation, ECC_GameTraceChannel5, Params))
					{
						//DrawDebugLine(GetWorld(), TraceStartLocation, TraceEndLocation, FColor::Red, true, 10.f);
						bCanVault = CanVaultToHit(CapsuleComponent, HitResult);

						return bCanVault;

					}
				}
			}
		}
	}

	return bCanVault;
}

bool UVautingComponent::CanVaultToHit(UCapsuleComponent* CapsuleComponent, FHitResult HitResult)
{
	// check if the player capusle component is 90.f or higher, because anything smaller means that the player is sliding or crouching
	if (GetPlayer()->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() < 90.f)
	{
		return false;
	}

	// check whether vaulting height, calculated from the end of the trace to the trace's hit location, is within the specified range
	// doesn't allow vaulting when not in range
	float fVaultingHeight = (HitResult.Location - HitResult.TraceEnd).Size();
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::SanitizeFloat(fVaultingHeight));
	if (!(UKismetMathLibrary::InRange_FloatFloat(fVaultingHeight, m_iMinVaultingHeight, m_iMaxVaultingHeight, true, true)))
	{

		return false;
	}

	// Make sure the surface we're vaulting to is walkable
	if (HitResult.ImpactNormal.Z < GetPlayer()->GetCharacterMovement()->GetWalkableFloorZ())
	{

		return false;
	}

	// Get the Hit Location from the initial trace to check whether there is anything in front of the player
	// This is then used to do a capsule trace with the same dimensions as the capsule component of the player
	// Since the Hit Location will be directly on the surface of the object, the Z Coordinate for the trace needs to be
	// lifted up by the Player's Capsule Components Half Height, because the Location provided to the Capsule Trace
	// requires a center location. Not lifting up the Z Coordinate by the Half Height would mean that half of the Capsule Trace
	// would be inside of the object.
	FVector CapsuleTraceLocation = HitResult.Location;
	CapsuleTraceLocation.Z += CapsuleComponent->GetScaledCapsuleHalfHeight();

	CapsuleTraceLocation.Z += CapsuleComponent->GetScaledCapsuleRadius();

	// Make sure that there is enough room for us on top of the ledge
	if (GetPlayer()->GetSlideComponent()->CheckCapsuleCollision(CapsuleTraceLocation, CapsuleComponent->GetScaledCapsuleHalfHeight(), CapsuleComponent->GetScaledCapsuleRadius(), false))
	{

		return false;
	}

	m_v3VaultEndLocation = CapsuleTraceLocation;
	return true;
}