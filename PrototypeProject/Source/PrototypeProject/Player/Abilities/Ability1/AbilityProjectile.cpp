// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"
#include "PrototypeProject/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PrototypeProject/Player/GAS/GASAbilitySystemComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AAbilityProjectile::AAbilityProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Comp"));
	RootComponent = SceneComp;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AAbilityProjectile::OnHit);		// set up a notification for when this component hits something blocking
	CollisionComp->SetMobility(EComponentMobility::Movable);

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	CollisionComp->SetupAttachment(SceneComp);

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Comp"));
	MeshComp->SetupAttachment(CollisionComp);

	ProjectileTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle System Comp"));
	ProjectileTrail->SetupAttachment(CollisionComp);

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	//ProjectileMovement->InitialSpeed = 1500.f;
	//ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;

	ProjectileMovement->bAutoActivate = false;

}

// Called when the game starts or when spawned
void AAbilityProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAbilityProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FQuat QuatRotation = FQuat(FRotator(RotationSpeed, 0.f, 0.f));

	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}

void AAbilityProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
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

		MeshComp->SetVisibility(false);
		GetWorld()->GetTimerManager().SetTimer(DestroyTimer, this, &AAbilityProjectile::DestroyActor, 1.5f, false);
	}
}

void AAbilityProjectile::DestroyActor()
{
	Destroy();
}

void AAbilityProjectile::Throw()
{
	//ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 10000.f);
	// Tell the projectile to move
	ProjectileMovement->Activate();
	RotationSpeed = 0.f;
	UE_LOG(LogTemp, Log, TEXT("Throwing"));
	
	//else
	//{
	//	ProjectileMovement->InitialSpeed = 0.f;
	//	ProjectileMovement->MaxSpeed = 0.f;
	//	RotationSpeed = 2.5f;
	//	UE_LOG(LogTemp, Log,TEXT("Holding"));
	//}

}
