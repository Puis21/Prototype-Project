// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrownProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"
#include "PrototypeProject/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PrototypeProject/Player/GAS/GASAbilitySystemComponent.h"

// Sets default values
AThrownProjectile::AThrownProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Comp"));
	RootComponent = SceneComp;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Comp"));
	MeshComp->SetupAttachment(SceneComp);

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AThrownProjectile::OnHit);		// set up a notification for when this component hits something blocking
	CollisionComp->SetMobility(EComponentMobility::Movable);

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	CollisionComp->SetupAttachment(SceneComp);

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;

	// Die after 3 seconds by default
	InitialLifeSpan = 5.0f;

}

// Called when the game starts or when spawned
void AThrownProjectile::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AThrownProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FQuat QuatRotation = FQuat(FRotator(RotationSpeed, 0.f, 0.f));

	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);

}

void AThrownProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{	
		EnemyCharacter = Cast<ATP_ThirdPersonCharacter>(OtherActor);
		if (EnemyCharacter)
		{	
			FGameplayEffectContextHandle EffectContext = EnemyCharacter->GetAbilitySystemComponent()->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle SpecHandle = EnemyCharacter->GetAbilitySystemComponent()->MakeOutgoingSpec(AttributeChange, 1, EffectContext);

			if (SpecHandle.IsValid())
			{
				FActiveGameplayEffectHandle GEHandle = EnemyCharacter->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			}
		}

		//Destroy();
	}
}

void AThrownProjectile::Throw(bool bThrown)
{
	/*if (bThrown)
	{
		ProjectileInitialSpeed = 500.f;
		ProjectileMaxSpeed = 500.f;
		InitialLifeSpan = 5.f;
	}
	else
	{
		ProjectileInitialSpeed = 0.f;
		ProjectileMaxSpeed = 0.f;
	}*/

}
