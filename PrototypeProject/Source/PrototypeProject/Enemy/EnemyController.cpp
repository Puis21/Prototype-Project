// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"

#include "BP_EnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "PrototypeProject/BlackboardKeys.h"
#include "PrototypeProject/Player/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

#include "Perception/AIPerceptionSystem.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Prediction.h"
#include "Perception/AISenseConfig_Prediction.h"

AEnemyController::AEnemyController():
m_bPlayerDetected(false),
m_fMeleeRange(300.f)
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);

	eEnemyState = EEnemyState::Patrolling;

	SetupPerceptionSystem();
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	TargetFocus = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FVector::Distance(TargetFocus->GetActorLocation(), Enemy->GetActorLocation()) <= m_fMeleeRange && m_bPlayerDetected)
	{
		StartMovementStateSwitch(EEnemyState::Combat);
		//UE_LOG(LogTemp, Log, TEXT("CLOSe"));
	}
	else if (FVector::Distance(TargetFocus->GetActorLocation(), Enemy->GetActorLocation()) > m_fMeleeRange && m_bPlayerDetected)
	{
		StartMovementStateSwitch(EEnemyState::Chasing);
	}

}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(InPawn == nullptr) return;

	Enemy = Cast<ABP_EnemyCharacter>(InPawn);
	if(Enemy)
	{
		if(Enemy->GetBehaviorTree())
		{
			BlackboardComponent->InitializeBlackboard(*(Enemy->GetBehaviorTree()->BlackboardAsset));
			RunBehaviorTree(Enemy->GetBehaviorTree());
		}
	}
}

void AEnemyController::OnPawnDetected(AActor* actor, FAIStimulus const stimulus)
{
	FActorPerceptionBlueprintInfo Info;
	GetAIPerceptionComponent()->GetActorsPerception(actor, Info);

	//if (Info.LastSensedStimuli.Num() > 0) 
	//{
	//	const FAIStimulus stimulus = Info.LastSensedStimuli[0];
	//}

	//UE_LOG(LogTemp, Log, TEXT("Gasit!"));

	FAISenseID sightid = SightConfig->GetSenseID();
	FAISenseID predictid = PredictionConfig->GetSenseID();

	/*if (stimulus.Type == sightid)
	{
		UE_LOG(LogTemp, Warning, TEXT("I SAW YOU!"));
	}
	else if (stimulus.Type == predictid)
	{
		UE_LOG(LogTemp, Warning, TEXT("I PREDICT YOU!"));
	}*/

	FString StimulusName = UKismetSystemLibrary::GetDisplayName(PercSystemation->GetSenseClassForStimulus(GetWorld(), stimulus));
	UE_LOG(LogTemp, Log, TEXT("Stimulus: %s"), *StimulusName);

	if (auto const Player = Cast<APlayerCharacter>(actor))
	{
		if (stimulus.WasSuccessfullySensed())
		{
			if (StimulusName == "AISense_Sight")
			{
				//GetBlackboardComponent()->SetValueAsBool(bb_keys::can_see_player, stimulus.WasSuccessfullySensed());
				StartMovementStateSwitch(EEnemyState::Chasing);
				//SetFocus(m_pPlayer, EAIFocusPriority::Gameplay);
				//UE_LOG(LogTemp, Log, TEXT("Vede"));
			}
			else if (StimulusName == "AISense_Prediction")
			{
				//StartMovementStateSwitch(EEnemyState::Investigating);
				StartMovementStateSwitch(EEnemyState::Investigating);
				GetBlackboardComponent()->SetValueAsVector(bb_keys::predict_location, stimulus.StimulusLocation);
				//PredictionSense->RequestControllerPredictionEvent(this, actor, 0.5f);
			}
		}
		else
		{
			PredictionSense->RequestControllerPredictionEvent(this, actor, 0.5f);
			//GetBlackboardComponent()->SetValueAsVector(bb_keys::predict_location, stimulus.StimulusLocation);
		}
 
	}
}

void AEnemyController::OnTargetDetected(TArray<AActor*> const& Actors)
{
	/*FAISenseID sightid = SightConfig->GetSenseID();
	FAISenseID predictid = PredictionConfig->GetSenseID();

	for (size_t x = 0; x < Actors.Num(); x++)
	{
		FActorPerceptionBlueprintInfo Info;
		GetPerceptionComponent()->GetActorsPerception(Actors[x], Info);

		for (size_t y = 0; y < Info.LastSensedStimuli.Num(); y++)
		{
			FAIStimulus const Stimulus = Info.LastSensedStimuli[y];
			FString Name = UKismetSystemLibrary::GetDisplayName(PercSystemation->GetSenseClassForStimulus(GetWorld(), Stimulus));
			UE_LOG(LogTemp, Log, TEXT("Stimulus: %s"), *Name);
			if (Stimulus.Type == sightid)
			{
				StartMovementStateSwitch(EEnemyState::Chasing);
				//PredictionSense->RequestControllerPredictionEvent(this, Actors[x], 0.5f);
				if (!Stimulus.WasSuccessfullySensed())
				{
					//StartMovementStateSwitch(EEnemyState::Investigating);
					//GetBlackboardComponent()->SetValueAsVector(bb_keys::predict_location, Stimulus.StimulusLocation);
					UE_LOG(LogTemp, Log, TEXT("Nu Vede"));
				}
			}
		}
	}*/
}

void AEnemyController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	if (SightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
		SightConfig->SightRadius = 800.f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 50.f;
		SightConfig->PeripheralVisionAngleDegrees = 90.f;
		SightConfig->SetMaxAge(5.f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 850.f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnPawnDetected);
		GetPerceptionComponent()->ConfigureSense(*SightConfig);
	}

	PredictionConfig = CreateDefaultSubobject<UAISenseConfig_Prediction>(TEXT("Prediction Config"));
	if (PredictionConfig)
	{
		//GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnPawnDetected);
		GetPerceptionComponent()->ConfigureSense(*PredictionConfig);
	}
}

void AEnemyController::SetMovementState(EEnemyState& eNewMovementState)
{
	switch (eNewMovementState)
	{
		case EEnemyState::Patrolling:
		{
			ClearFocus(EAIFocusPriority::Default);
			GetBlackboardComponent()->SetValueAsEnum(bb_keys::ai_state, 0);
		}
		break;
		case EEnemyState::Chasing:
		{
			SetFocus(TargetFocus, EAIFocusPriority::Default);
			m_bPlayerDetected = true;
			GetBlackboardComponent()->SetValueAsEnum(bb_keys::ai_state, 1);
		}
		break;
		case EEnemyState::Investigating:
		{
			ClearFocus(EAIFocusPriority::Default);
			m_bPlayerDetected = false;
			GetBlackboardComponent()->SetValueAsEnum(bb_keys::ai_state, 2);
		}
		break;
		case EEnemyState::Combat:
		{
			GetBlackboardComponent()->SetValueAsEnum(bb_keys::ai_state, 3);
		}
		break;
	}
}

void AEnemyController::StartMovementStateSwitch(EEnemyState eNewMovementState)
{
	if (eNewMovementState != eEnemyState)
	{
		//const TEnumAsByte<EEnemyState> SurfaceEnum = eNewMovementState;
		//FString EnumAsString = UEnum::GetValueAsString(SurfaceEnum.GetValue());

		//if (GEngine)
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, EnumAsString);
		//}
		eEnemyState = eNewMovementState;
		SetMovementState(eNewMovementState);
	}
}
