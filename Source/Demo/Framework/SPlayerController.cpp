// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerController.h"

#include "Framework/Application/NavigationConfig.h"

void ASPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalPlayerController()) {
		auto navigation = MakeShared<FNavigationConfig>();
		
		navigation->bTabNavigation = false;
		navigation->bKeyNavigation = false;
		
		FSlateApplication::Get().SetNavigationConfig(navigation);
	} 
}
