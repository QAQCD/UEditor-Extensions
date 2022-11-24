// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEditorExtensionsGameMode.h"
#include "UEditorExtensionsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEditorExtensionsGameMode::AUEditorExtensionsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
