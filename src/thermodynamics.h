// thermodynamics.h
#ifndef THERMODYNAMICS_H
#define THERMODYNAMICS_H

class HeatTransfer {
public:
    HeatTransfer(double thermalConductivity);
    double calculateHeatFlow(double temp1, double temp2, double area, double distance);

private:
    double thermalConductivity;
};

class ThermalExpansion {
public:
    ThermalExpansion(double expansionCoefficient);
    double calculateExpansion(double initialLength, double deltaTemp);

private:
    double expansionCoefficient;
};

#endif
// thermodynamics.cpp
#include "thermodynamics.h"

HeatTransfer::HeatTransfer(double thermalConductivity)
    : thermalConductivity(thermalConductivity) {}

double HeatTransfer::calculateHeatFlow(double temp1, double temp2, double area, double distance) {
    return thermalConductivity * area * (temp1 - temp2) / distance; // Fourier's law
}