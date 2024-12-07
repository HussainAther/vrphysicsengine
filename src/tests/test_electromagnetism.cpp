// thermodynamics.cpp
#include "thermodynamics.h"

HeatTransfer::HeatTransfer(double thermalConductivity)
    : thermalConductivity(thermalConductivity) {}

double HeatTransfer::calculateHeatFlow(double temp1, double temp2, double area, double distance) {
    return thermalConductivity * area * (temp1 - temp2) / distance; // Fourier's law
}

ThermalExpansion::ThermalExpansion(double expansionCoefficient)
    : expansionCoefficient(expansionCoefficient) {}

double ThermalExpansion::calculateExpansion(double initialLength, double deltaTemp) {
    return initialLength * expansionCoefficient * deltaTemp; // ΔL = α * L0 * ΔT
}