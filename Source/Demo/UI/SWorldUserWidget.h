// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SWorldUserWidget.generated.h"


class USizeBox;
/**
 * 
 */
UCLASS()
class DEMO_API USWorldUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	USWorldUserWidget(const FObjectInitializer& ObjectInitializer);

protected:

	UPROPERTY(meta=(BindWidget))
	USizeBox* ParentSizeBox;
	
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	bool ClipPosition(FVector2d LocalScreenPosition, FVector2D Relative, FVector2D LocalWindowsSize, FVector2D &Target);

	void ClipPositionLostFocus(FVector ActorLocation, FVector2D Relative, FVector2D LocalWindowsSize, FVector2D &Target);
	
public:

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="UI", meta=(ExposeOnSpawn=true))
	AActor* AttachedActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="UI")
	FVector WorldOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="UI")
	bool bShowScreenEdge;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="UI")
	FVector2D WindowsSize;
	
};
