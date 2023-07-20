// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SItemActor.generated.h"

class USWorldUserWidget;
class UBoxComponent;


UCLASS()
class DEMO_API ASItemActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	int ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FVector PickRange;

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly, Category="Item")
	TSubclassOf<USWorldUserWidget> PickupTipsWidget;

	UPROPERTY()
	USWorldUserWidget* Widget;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FVector WidgetOffset;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ItemMeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxCollisionComp;

	UFUNCTION()
	void PickUp();

	UFUNCTION(BlueprintImplementableEvent)
	void K2_PuckUp();
	
	UFUNCTION()
	void ShowPickupTipsWidget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void HidePickupTipsWidget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
