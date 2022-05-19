// Fill out your copyright notice in the Description page of Project Settings.


#include "KatanaWeapon.h"
#include "Components/BoxComponent.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "PrototypeProject/Player/Components/CombatComponent.h"

// Sets default values
AKatanaWeapon::AKatanaWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Comp"));
	RootComponent = RootComp;

	BoxCol = CreateDefaultSubobject<UBoxComponent>(TEXT("Sphere Comp"));
	BoxCol->SetupAttachment(RootComp);

	KatanaMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Katana Mesh"));
	KatanaMesh->SetupAttachment(RootComp);

}

// Called when the game starts or when spawned
void AKatanaWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKatanaWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
