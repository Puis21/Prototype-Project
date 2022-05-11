// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleTarget.h"
#include "Components/BillboardComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
AGrappleTarget::AGrappleTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	m_bBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard Component"));
	RootComponent = m_bBillboard;

	m_wWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));


}

// Called when the game starts or when spawned
void AGrappleTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrappleTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrappleTarget::SetActive(bool bActivate)
{
	m_wWidgetComponent->SetVisibility(bActivate);
}

FVector AGrappleTarget::GetCharacterTargetLocation()
{
	return m_v3CharacterOffset + GetActorLocation();
}
