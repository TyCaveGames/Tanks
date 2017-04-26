// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankPlayerController.h"


ATank* ATankPlayerController::GetTank() const {
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	ATank* tank = GetTank();
	if (tank) {
		UE_LOG(LogTemp, Warning, TEXT("TankPlayerController get Tank: %s"), *tank->GetName())
	} else {
		UE_LOG(LogTemp, Error, TEXT("GetTank does not return a valid pointer"))
		return;
	}
}
