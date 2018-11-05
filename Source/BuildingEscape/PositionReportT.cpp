// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReportT.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UPositionReportT::UPositionReportT()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


}


// Called when the game starts
void UPositionReportT::BeginPlay()
{
	Super::BeginPlay();
	FString ObjectName = GetOwner()->GetName();

	UE_LOG(LogTemp, Warning, TEXT("Position report reporting for %s"), *ObjectName);
}


// Called every frame
void UPositionReportT::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
