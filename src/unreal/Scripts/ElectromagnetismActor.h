#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElectromagnetismModule.h"
#include "ElectromagnetismActor.generated.h"

UCLASS()
class YOURGAME_API AElectromagnetismActor : public AActor {
    GENERATED_BODY()

public:
    AElectromagnetismActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    ElectromagnetismModule* Module;
};