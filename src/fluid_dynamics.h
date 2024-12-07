// fluid_dynamics.h
#ifndef FLUID_DYNAMICS_H
#define FLUID_DYNAMICS_H

#include "physics_object.h"

class Fluid {
public:
    Fluid(double density, double viscosity);
    void calculateBuoyancy(PhysicsObject& object);
    void simulateFlow(PhysicsObject& object, double deltaTime);

private:
    double density;
    double viscosity;
};

#endif
// fluid_dynamics.cpp
#include "fluid_dynamics.h"

Fluid::Fluid(double density, double viscosity)
    : density(density), viscosity(viscosity) {}

void Fluid::calculateBuoyancy(PhysicsObject& object) {
    double volume = object.getVolume();
    double buoyantForce = density * 9.8 * volume; // Archimedes' principle
    object.applyForce(0, buoyantForce, 0);
}

void Fluid::simulateFlow(PhysicsObject& object, double deltaTime) {
    double dragForce = viscosity * object.getVelocity();
    object.applyForce(-dragForce * deltaTime, 0, 0);
}
