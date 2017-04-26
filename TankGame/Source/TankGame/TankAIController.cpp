// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankAIController.h"

ATank* ATankAIController::getTank() const {
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay() {
	Super::BeginPlay();
	ATank* tank = getTank();
	if (!tank) {
		UE_LOG(LogTemp, Error, TEXT("AI Controller can't find tank!"))
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("AI Controller found tank: %s"), *tank->GetName())
}
