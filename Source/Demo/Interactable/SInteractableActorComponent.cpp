// Fill out your copyright notice in the Description page of Project Settings.


#include "SInteractableActorComponent.h"

#include "SInteractableInterface.h"
#include "SWorldUserWidget.h"
#include "Blueprint/UserWidget.h"


// Sets default values for this component's properties
USInteractableActorComponent::USInteractableActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	TraceRadius = 15.0f;

	TraceDistance = 200;

	CollisionChannel = ECC_WorldDynamic;
}

// Called every frame
void USInteractableActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	APawn* MyPawn = Cast<APawn>(GetOwner());

	if (MyPawn->IsLocallyControlled())
	{
		FindBestInteractable();
	}
}

void USInteractableActorComponent::FindBestInteractable()
{
	
	AActor* PlayerCharacter = GetOwner();

	FHitResult Hit;

	FVector Start;
	FRotator EyesRotation;

	PlayerCharacter->GetActorEyesViewPoint(Start, EyesRotation);
	
	FVector End = Start + (EyesRotation.Vector() * TraceDistance);
	Start += EyesRotation.Vector() * 50;

	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(CollisionChannel);
	ObjectQueryParams.RemoveObjectTypesToQuery(ECC_Pawn);

	FCollisionShape Shape;
	Shape.SetSphere(TraceRadius);

	bool bBlockingHit = GetWorld()->SweepSingleByObjectType(Hit, Start, End, FQuat::Identity, ObjectQueryParams, Shape);

	FocusedActor = nullptr;

	AActor* HitActor = Hit.GetActor();
	if(HitActor)
	{
		if(HitActor->Implements<USInteractableInterface>())
		{
			FocusedActor = HitActor;
		}
	}

	if (FocusedActor)
	{
		if (DefaultWidgetInstance == nullptr && ensure(DefaultWidgetClass))
		{
			DefaultWidgetInstance = CreateWidget<USWorldUserWidget>(GetWorld(), DefaultWidgetClass);
		}

		if (DefaultWidgetInstance)
		{
			DefaultWidgetInstance->AttachedActor = FocusedActor;

			if (!DefaultWidgetInstance->IsInViewport())
			{
				DefaultWidgetInstance->AddToViewport();
			}
		}
	}
	else
	{
		if (DefaultWidgetInstance)
		{
			DefaultWidgetInstance->RemoveFromParent();
		}
	}

	
	/*FColor LineColor = bBlockingHit ? FColor::Green : FColor::Red;
	DrawDebugSphere(GetWorld(), Hit.ImpactPoint, TraceRadius, 32, LineColor, false, 2.0f);
	DrawDebugLine(GetWorld(), Start, End, LineColor, false, 2.0f, 0, 2.0f);*/
}

void USInteractableActorComponent::PrimaryInteract()
{
	ServerInteract(FocusedActor);
}

void USInteractableActorComponent::ServerInteract_Implementation(AActor* InFocus)
{
	if (InFocus == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("No Focised Actor"));
		return;
	}
	ISInteractableInterface::Execute_Interact(InFocus, Cast<APawn>(GetOwner()));
}

