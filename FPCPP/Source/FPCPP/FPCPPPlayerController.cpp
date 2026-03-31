// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPCPPPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "FPCPPCameraManager.h"

AFPCPPPlayerController::AFPCPPPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = AFPCPPCameraManager::StaticClass();
}

void AFPCPPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
