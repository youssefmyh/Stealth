// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameMode.h"
#include "StealthCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthGameMode::AStealthGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
