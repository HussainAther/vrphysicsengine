// PhysicsEngine.cpp
#include "PhysicsEngine.h"
#include "electromagnetism.h"
#include "fluid_dynamics.h"
#include "thermodynamics.h"

void runSimulation() {
    // Example: Electromagnetism
    ElectromagneticField field(1.0, 0.0, 0.0, 0.0);
    std::vector<PhysicsObject> objects = {...};
    field.calculateField(objects);

    // Example: Fluid Dynamics
    Fluid water(1000.0, 0.001);
    PhysicsObject object = ...;
    water.calculateBuoyancy(object);

    // Example: Thermodynamics
    HeatTransfer heat(200.0);
    double heatFlow = heat.calculateHeatFlow(100, 50, 1.0, 0.01);
}

void runSimulation() {
    // Example: Electromagnetism
    ElectromagneticField field(1.0, 0.0, 0.0, 0.0);
    std::vector<PhysicsObject> objects = {...};
    field.calculateField(objects);

    // Example: Fluid Dynamics
    Fluid water(1000.0, 0.001);
    PhysicsObject object = ...;
    water.calculateBuoyancy(object);

    // Example: Thermodynamics
    HeatTransfer heat(200.0);
    double heatFlow = heat.calculateHeatFlow(100, 50, 1.0, 0.01);
}


// Simulate physics: apply forces and update all objects
void PhysicsEngine::simulate(std::vector<PhysicsObject*>& objects, float deltaTime) {
    for (PhysicsObject* obj : objects) {
        applyGravity(obj);
        obj->update(deltaTime);
    }
}

// Apply gravity to a single object
void PhysicsEngine::applyGravity(PhysicsObject* obj) {
    obj->applyForce(gravity[0] * obj->mass, gravity[1] * obj->mass, gravity[2] * obj->mass);
}

