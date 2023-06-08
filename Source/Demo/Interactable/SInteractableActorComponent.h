// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SInteractableActorComponent.generated.h"

class USWorldUserWidget;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEMO_API USInteractableActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	USInteractableActorComponent();
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void FindBestInteractable();

	UFUNCTION(BlueprintCallable)
	void PrimaryInteract();

	UFUNCTION(Server, Reliable)
	void ServerInteract(AActor* InFocus);

protected:

	UPROPERTY(EditDefaultsOnly, Category="UI")
	TSubclassOf<USWorldUserWidget> DefaultWidgetClass;
	
	UPROPERTY(EditDefaultsOnly, Category="Trace")
	float TraceRadius;

	UPROPERTY(EditDefaultsOnly, Category="Trace")
	int TraceDistance;

	UPROPERTY(EditDefaultsOnly, Category="Trace")
	TEnumAsByte<ECollisionChannel> CollisionChannel;
	
	UPROPERTY()
	AActor* FocusedActor;

	UPROPERTY()
	USWorldUserWidget* DefaultWidgetInstance;
		
};
