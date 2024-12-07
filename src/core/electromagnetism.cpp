// electromagnetism.cpp
#include "electromagnetism.h"
#include <cmath>

// Constructor for ElectromagneticField
ElectromagneticField::ElectromagneticField(double charge, double x, double y, double z) 
    : charge(charge) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

void ElectromagneticField::calculateField(std::vector<PhysicsObject>& objects) {
    for (auto& obj : objects) {
        double dx = obj.getX() - position[0];
        double dy = obj.getY() - position[1];
        double dz = obj.getZ() - position[2];
        double r = sqrt(dx * dx + dy * dy + dz * dz);
        if (r > 0) {
            double force = charge / (r * r);
            obj.applyForce(dx / r * force, dy / r * force, dz / r * force);
        }
    }
}

Circuit::Circuit(double voltage, double resistance)
    : voltage(voltage), resistance(resistance) {}

double Circuit::calculateCurrent() {
    return voltage / resistance; // Ohm's Law: I = V / R
}