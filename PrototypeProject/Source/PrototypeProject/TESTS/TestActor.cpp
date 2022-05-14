// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "CableComponent.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Default Root"));
	RootComponent = DefaultRoot;

	DefaultRoot2 = CreateDefaultSubobject<USceneComponent>(TEXT("Default2 Root"));
	DefaultRoot2->SetupAttachment(MeshComp);

	DefaultRoot3 = CreateDefaultSubobject<USceneComponent>(TEXT("Default3 Root"));
	DefaultRoot3->SetupAttachment(MeshComp2);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	MeshComp->SetupAttachment(DefaultRoot);

	MeshComp2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp2"));
	MeshComp2->SetupAttachment(DefaultRoot);

	m_pCableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("Cable Component"));
	m_pCableComponent->SetWorldLocation(MeshComp->GetComponentLocation());
	m_pCableComponent->EndLocation = MeshComp2->GetComponentLocation();
	m_pCableComponent->SetAttachEndToComponent(MeshComp2);

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

