// Fill out your copyright notice in the Description page of Project Settings.


#include "SItemActor.h"

#include "SInventoryStruct.h"
#include "Components/BoxComponent.h"
#include "Demo/Framework/SGameplayFunctionLibrary.h"
#include "Demo/PlayerCharacter/DemoCharacter.h"
#include "Demo/UI/SWorldUserWidget.h"


// Sets default values
ASItemActor::ASItemActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemID = 0;

	ItemMeshComp = CreateDefaultSubobject<UStaticMeshComponent>("ItemMeshComp");

	BoxCollisionComp = CreateDefaultSubobject<UBoxComponent>("BoxCollisionComp");
	PickRange = FVector(180);
	BoxCollisionComp->SetBoxExtent(PickRange);
	BoxCollisionComp->SetGenerateOverlapEvents(false);
	BoxCollisionComp->SetupAttachment(ItemMeshComp);
	BoxCollisionComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Ignore);

	WidgetOffset = FVector(0, 0, 150);
	
}

// Called when the game starts or when spawned
void ASItemActor::BeginPlay()
{
	Super::BeginPlay();

	ItemMeshComp->SetStaticMesh(nullptr);
	ItemMeshComp->SetRelativeScale3D(FVector(1));

	FSItem Item = USGameplayFunctionLibrary::GetItemBy_ID(ItemID, TaskTable);
	if (Item)
	{
		BoxCollisionComp->SetGenerateOverlapEvents(true);
	
		ItemMeshComp->SetStaticMesh(Item.ItemMesh);
	
		if (ensure(PickupTipsWidget))
		{
			Widget = Cast<USWorldUserWidget>(CreateWidget(GetWorld(), PickupTipsWidget));
			if (Widget)
			{
				Widget->AddToViewport();
				Widget->SetVisibility(ESlateVisibility::Collapsed);
				Widget->WorldOffset = WidgetOffset;
				Widget->AttachedActor = this;
			}
		}
	}

	BoxCollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ASItemActor::ShowPickupTipsWidget);
	BoxCollisionComp->OnComponentEndOverlap.AddDynamic(this, &ASItemActor::HidePickupTipsWidget);
}

void ASItemActor::ShowPickupTipsWidget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                       UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ADemoCharacter* PlayerCharacter = Cast<ADemoCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		if (Widget)
		{
			Widget->SetVisibility(ESlateVisibility::Visible);
		}

		PlayerCharacter->OnPrimaryInteract.AddDynamic(this, &ASItemActor::PickUp);
	}
}

void ASItemActor::HidePickupTipsWidget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ADemoCharacter* PlayerCharacter = Cast<ADemoCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		if (Widget)
		{
			Widget->SetVisibility(ESlateVisibility::Collapsed);
		}

		PlayerCharacter->OnPrimaryInteract.RemoveDynamic(this, &ASItemActor::PickUp);
	}
}

void ASItemActor::PickUp()
{
	K2_PuckUp();
}

// Called every frame
void ASItemActor::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
}

