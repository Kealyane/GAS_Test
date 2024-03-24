// Copyright Epic Games, Inc. All Rights Reserved.

#include "GasTestGameMode.h"
#include "GasTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGasTestGameMode::AGasTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
