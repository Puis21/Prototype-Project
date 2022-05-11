// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrappleTarget.generated.h"

class UBillboardComponent;
class UWidgetComponent;

UCLASS()
class PROTOTYPEPROJECT_API AGrappleTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrappleTarget();

	void SetActive(bool bActivate);

	FVector GetCharacterTargetLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBillboardComponent* m_bBillboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* m_wWidgetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Offset", meta = (AllowPrivateAccess = "true", MakeEditWidget = true))
	FVector m_v3CharacterOffset;
};
