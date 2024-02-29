// Copyright Epic Games, Inc. All Rights Reserved.

#include "TatariGamiGameMode.h"
#include "TatariGamiCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATatariGamiGameMode::ATatariGamiGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
