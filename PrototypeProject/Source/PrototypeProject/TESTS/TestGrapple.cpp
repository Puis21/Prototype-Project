// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGrapple.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "PrototypeProject/Player/GrappleTarget.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
ATestGrapple::ATestGrapple():
m_fProjectileSpeed(5000.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	m_pMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Spehere Component"));
	m_pMeshComp->SetupAttachment(SceneComponent);

	m_pGrappleProjectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	m_pGrappleProjectile->ProjectileGravityScale = 0.f;
	m_pGrappleProjectile->InitialSpeed = 300.f;

}

// Called when the game starts or when spawned
void ATestGrapple::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATestGrapple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float fDistanceFromSpawn = UKismetMathLibrary::Vector_DistanceSquared(this->GetActorLocation(), m_v3StartingLocation);
	float fDistanceFromEndStart = UKismetMathLibrary::Vector_DistanceSquared(m_v3EndingLocation, m_v3StartingLocation);
	FVector v3Direction = m_v3Direction * UKismetMathLibrary::Vector_Distance(m_v3StartingLocation, m_v3EndingLocation);

	if (fDistanceFromSpawn >= fDistanceFromEndStart)
	{
		this->SetActorLocation(m_v3StartingLocation + v3Direction, false, nullptr, ETeleportType::TeleportPhysics);
		m_pGrappleProjectile->Velocity = FVector::ZeroVector;
	}
	else
	{
		m_pGrappleProjectile->Velocity = m_v3Direction * m_fProjectileSpeed;
	}


}

void ATestGrapple::SetGrappleTarget(AGrappleTarget* Target)
{
	m_v3StartingLocation = this->GetActorLocation();
	m_v3EndingLocation = Target->GetActorLocation();
	m_v3Direction = m_v3EndingLocation - m_v3StartingLocation;
	m_v3Direction.Normalize();

	UE_LOG(LogTemp, Log, TEXT("Direction %s"), *m_v3Direction.ToString());
}

float ATestGrapple::DistanceToTarget()
{
	float v3Distance = UKismetMathLibrary::Vector_Distance(m_v3EndingLocation, this->GetActorLocation());

	return v3Distance;
}