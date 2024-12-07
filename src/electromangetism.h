// electromagnetism.h
#ifndef ELECTROMAGNETISM_H
#define ELECTROMAGNETISM_H

#include <vector>
#include "physics_object.h"  // Assuming this defines base physics objects

class ElectromagneticField {
public:
    ElectromagneticField(double charge, double x, double y, double z);
    void calculateField(std::vector<PhysicsObject>& objects);

private:
    double charge;
    double position[3];
};

class Circuit {
public:
    Circuit(double voltage, double resistance);
    double calculateCurrent();

private:
    double voltage;    // in Volts
    double resistance; // in Ohms
};

#endif