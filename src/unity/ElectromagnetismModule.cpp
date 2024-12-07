#include "ElectromagnetismModule.h"
#include "Engine/World.h"

ElectromagnetismModule::ElectromagnetismModule(double charge, FVector position)
    : Charge(charge), Position(position) {}

ElectromagnetismModule::~ElectromagnetismModule() {}

void ElectromagnetismModule::ApplyField(FVector objectPosition) {
    FVector direction = objectPosition - Position;
    float distanceSquared = direction.SizeSquared();
    if (distanceSquared > 0) {
        FVector force = direction / sqrt(distanceSquared) * Charge;
        // Apply force logic here
    }
}
