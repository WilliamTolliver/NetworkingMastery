// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatformCorrect.h"


AMovingPlatformCorrect::AMovingPlatformCorrect()
{
	PrimaryActorTick.bCanEverTick = true;

	SetMobility(EComponentMobility::Movable);
}

void AMovingPlatformCorrect::Tick(float DeltaTime)
{
	//Super:Tick(DeltaTime);
	FVector Location = GetActorLocation();

	// If we are making a change to position, ONLY do this on server....
	if (HasAuthority()) {
		Location += FVector(Speed * DeltaTime, 0, 0);
		SetActorLocation(Location);
	}


}