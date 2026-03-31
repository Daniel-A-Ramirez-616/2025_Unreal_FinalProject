// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OutputDemo.generated.h"

UCLASS()


class FPCPP_API AOutputDemo : public AActor
{
	GENERATED_BODY()

public:


	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	bool WillDisplayMessage;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	bool WillLogMessage;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	bool WillLogOtherData;

	/** hey */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	FString OutputMessage;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (MultiLine = "true", ClampMin = "0", ClampMax = "63", UIMin = "0", UIMax = "0"))
	int32 IntegerRange;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (ClampMin = "0", ClampMax = "100.00"))
	double FloatRange;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	FVector DirectionVector;


	
public:	
	// Sets default values for this actor's properties
	AOutputDemo();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
