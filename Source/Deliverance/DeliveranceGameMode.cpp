// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeliveranceGameMode.h"
#include "DeliveranceHUD.h"
#include "DeliveranceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeliveranceGameMode::ADeliveranceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADeliveranceHUD::StaticClass();
}
