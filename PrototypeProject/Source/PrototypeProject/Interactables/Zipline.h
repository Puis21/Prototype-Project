// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zipline.generated.h"

class UStaticMeshComponent;
class UCableComponent;
class USceneComponent;

UCLASS()
class PROTOTYPEPROJECT_API AZipline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZipline();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* DefaultRoot;

	USceneComponent* StartPoleRoot;

	USceneComponent* EndPoleRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* StartPoleMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EndPoleMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cable, meta = (AllowPrivateAccess = "true"))
	UCableComponent* m_pCableComponent;
};
