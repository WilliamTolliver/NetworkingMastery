// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatformCorrect.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKINGMASTERY_API AMovingPlatformCorrect : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AMovingPlatformCorrect();

	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	float Speed = 20;

};
