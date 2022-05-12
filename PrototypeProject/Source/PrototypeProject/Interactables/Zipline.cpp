// Fill out your copyright notice in the Description page of Project Settings.


#include "Zipline.h"
#include "CableComponent.h"

// Sets default values
AZipline::AZipline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Default Root"));
	DefaultRoot = RootComponent;

	//StartPoleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Start Pole Root"));
	//StartPoleRoot->SetupAttachment(StartPoleMesh);

	//EndPoleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("End Pole Root"));
	//EndPoleRoot->SetupAttachment(EndPoleMesh);

	StartPoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Start Pole Comp"));
	StartPoleMesh->SetupAttachment(DefaultRoot);

	EndPoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("End Pole Comp"));
	EndPoleMesh->SetupAttachment(DefaultRoot);

	m_pCableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("Cable Component"));
	m_pCableComponent->SetWorldLocation(StartPoleMesh->GetComponentLocation());
	m_pCableComponent->SetAttachEndToComponent(EndPoleMesh);
	
}

// Called when the game starts or when spawned
void AZipline::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AZipline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

