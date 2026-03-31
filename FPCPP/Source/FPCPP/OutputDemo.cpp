// Fill out your copyright notice in the Description page of Project Settings.


#include "OutputDemo.h"

// Sets default values
AOutputDemo::AOutputDemo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOutputDemo::BeginPlay()
{
	Super::BeginPlay();

	if (WillDisplayMessage == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("An Actor's name is %s"), *ExampleActor->GetName());
	}
	
}

// Called every frame
void AOutputDemo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

