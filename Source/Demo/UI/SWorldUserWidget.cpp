// Fill out your copyright notice in the Description page of Project Settings.


#include "SWorldUserWidget.h"

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/SizeBox.h"
#include "Demo/Framework/SPlayerController.h"
#include "Kismet/GameplayStatics.h"


USWorldUserWidget::USWorldUserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bShowScreenEdge = false;
}

void USWorldUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!IsValid(AttachedActor))
	{
		RemoveFromParent();
		return;
	}

	FVector2d ScreenPosition;
	bool bIsOnScreen = UGameplayStatics::ProjectWorldToScreen(GetOwningPlayer(), AttachedActor->GetActorLocation() + WorldOffset, ScreenPosition);

	float Scale = UWidgetLayoutLibrary::GetViewportScale(this);

	ScreenPosition /= Scale;

	if (ParentSizeBox)
	{
		if (bShowScreenEdge)
		{
			FVector2D TargetLocation;
			
			if (bIsOnScreen)
			{
				if (ClipPosition(ScreenPosition, WindowsSize/2, WindowsSize, TargetLocation))
				{
					ParentSizeBox->SetRenderTranslation(TargetLocation);

					// FString TargetLocationString = FString::Printf(TEXT("(%.2f, %.2f)"), TargetLocation.X, TargetLocation.Y);
					// GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Green, TargetLocationString);
				}
				else
				{
					ParentSizeBox->SetRenderTranslation(ScreenPosition);
				}
			}
			else
			{
				ClipPositionLostFocus(AttachedActor->GetActorLocation(), WindowsSize/2, WindowsSize, TargetLocation);

				ParentSizeBox->SetRenderTranslation(TargetLocation);
			}

			return;
		}
		ParentSizeBox->SetRenderTranslation(ScreenPosition);

		ParentSizeBox->SetVisibility(bIsOnScreen ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}
}

bool USWorldUserWidget::ClipPosition(FVector2d LocalScreenPosition, FVector2D Relative, FVector2D LocalWindowsSize, FVector2D &Target)
{
	//  0101  0001  1001	东西南北
	//  0100  0000  1000	8 4 2 1
	//  0110  0010  1010
	
	int Area = 0;
	
	int X1 = LocalScreenPosition.X;
	int Y1 = LocalScreenPosition.Y;

	const int X = Relative.X;
	const int Y = Relative.Y;

	if (X1 <= 0)
	{
		Area |= 4;
	}
	if (X1 >= LocalWindowsSize.X)
	{
		Area |= 8;
	}

	if (Y1 <= 0)
	{
		Area |= 1;
	}
	if (Y1 >= LocalWindowsSize.Y)
	{
		Area |= 2;
	}

	//中间
	if (Area == 0)
	{
		return false;
	}
	//西
	if (Area == 4 || Area == 5 || Area == 6)
	{
		X1 = 0;
		Y1 = Y - X * (Y - LocalScreenPosition.Y) / (X - LocalScreenPosition.X);
		//西北
		if (Y1 < 0)
		{
			Y1 = 0;
			X1 = X - Y * (X - LocalScreenPosition.X) / (Y - LocalScreenPosition.Y);
		}
		//西南
		if (Y1 > LocalWindowsSize.Y)
		{
			Y1 = LocalWindowsSize.Y;
			X1 = X - (Y - LocalWindowsSize.Y) * (X - LocalScreenPosition.X) / (Y - LocalScreenPosition.Y);
		}
	}
	//东
	if (Area == 8 || Area == 9 || Area == 10)
	{
		X1 = LocalWindowsSize.X;
		Y1 = Y - (X - LocalWindowsSize.X) * (Y - LocalScreenPosition.Y) / (X - LocalScreenPosition.X);
		//东北
		if (Y1 < 0)
		{
			Y1 = 0;
			X1 = X - Y * (X - LocalScreenPosition.X) / (Y - LocalScreenPosition.Y);
		}
		//东南
		if (Y1 > LocalWindowsSize.Y)
		{
			Y1 = LocalWindowsSize.Y;
			X1 = X - (Y - LocalWindowsSize.Y) * (X - LocalScreenPosition.X) / (Y - LocalScreenPosition.Y);
		}
	}
	//北
	if (Area == 1)
	{
		Y1 = 0;
		X1 = X - Y * (X - LocalScreenPosition.X) / (Y - LocalScreenPosition.Y);
	}
	//南
	if (Area == 2)
	{
		Y1 = LocalWindowsSize.Y;
		X1 = X - (Y - LocalWindowsSize.Y) * (X - LocalScreenPosition.X) / (Y - LocalScreenPosition.Y);
	}

	if (X1 < 0 || X1 > LocalWindowsSize.X || Y1 < 0 || Y1 > LocalWindowsSize.Y)
	{
		return false;
	}

	Target.X = X1;
	Target.Y = Y1;

	return true;
}

void USWorldUserWidget::ClipPositionLostFocus(FVector ActorLocation, FVector2D Relative, FVector2D LocalWindowsSize, FVector2D& Target)
{
	ASPlayerController* PlayerController = Cast<ASPlayerController>(GetOwningPlayer());

	FVector RelativeWorldLocation;
	FVector RelativeWorldDirection;
	PlayerController->DeprojectScreenPositionToWorld(Relative.X, Relative.Y, RelativeWorldLocation, RelativeWorldDirection);

	ActorLocation = 2 * RelativeWorldLocation - (ActorLocation + WorldOffset);
	
	FVector2D ScreenDirection;
	bool bProjected = UGameplayStatics::ProjectWorldToScreen(GetOwningPlayer(), ActorLocation, ScreenDirection);
	
	Target =  2 * Relative - ScreenDirection;

	if (Target.X > 0 && Target.X <= Relative.X)
	{
		if (Target.Y > 0 && Target.Y < LocalWindowsSize.Y)
		{
			Target.X = -Target.X;
		}
	}

	if (Target.X > Relative.X && Target.X < LocalWindowsSize.X)
	{
		if (Target.Y > 0 && Target.Y < LocalWindowsSize.Y)
		{
			Target.X = 2 * LocalWindowsSize.X - Target.X;
		}
	}
	
	ClipPosition(Target, Relative, LocalWindowsSize, Target);
}

