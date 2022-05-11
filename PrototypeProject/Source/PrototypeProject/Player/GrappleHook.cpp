// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleHook.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "PrototypeProject/Player/GrappleTarget.h"

// Sets default values
AGrappleHook::AGrappleHook():
m_fProjectileSpeed(5000.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Spehere Component"));
	RootComponent = m_pMeshComp;

	m_pGrappleProjectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	m_pGrappleProjectile->ProjectileGravityScale = 0.f;
	m_pGrappleProjectile->InitialSpeed = 3000.f;
	//m_pGrappleProjectile->Velocity = m_v3Direction * m_fProjectileSpeed;


}

// Called when the game starts or when spawned
void AGrappleHook::BeginPlay()
{
	Super::BeginPlay();

	//m_v3StartingLocation = this->GetActorLocation();
	//m_v3EndingLocation = m_pTargetLocation->GetActorLocation();
	//m_v3Direction = m_v3EndingLocation - m_v3StartingLocation;
	//m_v3Direction.Normalize();


}

// Called every frame
void AGrappleHook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

