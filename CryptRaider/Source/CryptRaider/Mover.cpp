// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
	MyName = GetOwner()->GetActorNameOrLabel();
	// MyName = GetOwner()->GetName();
	UE_LOG(LogTemp, Display, TEXT("%s"), *MyName);
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Pointer Review:
	// float MyFloat = 5;
	// float* YourFloat = new float(9.99);
	// YourFloat = &MyFloat;
	// float FloatValue = *YourFloat;
	// UE_LOG(LogTemp, Display, TEXT("%f"), *YourFloat);

	// ...
}

