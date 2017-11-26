// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Bang.h"
#include "BangGameMode.h"
#include "BangCharacter.h"

ABangGameMode::ABangGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = ABangCharacter::StaticClass();	
}
