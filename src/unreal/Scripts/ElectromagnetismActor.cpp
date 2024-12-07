#include "ElectromagnetismActor.h"

AElectromagnetismActor::AElectromagnetismActor() {
    PrimaryActorTick.bCanEverTick = true;
    Module = new ElectromagnetismModule(1.0, FVector::ZeroVector);
}

AElectromagnetismActor::~AElectromagnetismActor() {
    delete Module;
}

void AElectromagnetismActor::BeginPlay() {
    Super::BeginPlay();
}

void AElectromagnetismActor::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    FVector position = GetActorLocation();
    Module->ApplyField(position);
}
