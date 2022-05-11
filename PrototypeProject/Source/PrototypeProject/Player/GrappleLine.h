// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CableActor.h"
#include "GrappleLine.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPEPROJECT_API AGrappleLine : public ACableActor
{
	GENERATED_BODY()
	
public: 

	UCableComponent* GetCableComponent() const { return CableComponent; }

};
