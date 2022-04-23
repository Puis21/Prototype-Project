// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypeProjectGameMode.h"
#include "PrototypeProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototypeProjectGameMode::APrototypeProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
