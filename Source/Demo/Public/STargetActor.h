// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Actor.h"
#include "STargetActor.generated.h"

class UGameplayAbility;


UCLASS()
class DEMO_API ASTargetActor : public AActor, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTargetActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* TargetMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameplayAbilites", meta=(AllowPrivateAccess = "true"))
	UAbilitySystemComponent* AbilitySystemComp;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
	TArray<TSubclassOf<UGameplayAbility>> MyAbilities;

	UPROPERTY()
	class USPlayerAttributeSet* AttributeSet;

	virtual void OnHealthChanged(AActor* SInstigator, float HealthChangeValue);

	UFUNCTION(BlueprintImplementableEvent)
	void K2_OnHealthChanged(AActor* K2_Instigator);


};
