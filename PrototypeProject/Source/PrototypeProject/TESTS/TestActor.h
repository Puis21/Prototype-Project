// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"


UCLASS()
class PROTOTYPEPROJECT_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class USceneComponent* DefaultRoot;

	class USceneComponent* DefaultRoot2;

	class USceneComponent* DefaultRoot3;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cable, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cable, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComp2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cable, meta = (AllowPrivateAccess = "true"))
	class UCableComponent* m_pCableComponent;

};
