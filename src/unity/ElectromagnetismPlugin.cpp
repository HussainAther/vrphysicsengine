#include "electromagnetism.h"
#include <iostream>

extern "C" {
    ElectromagneticField* CreateElectromagneticField(double charge, double x, double y, double z) {
        return new ElectromagneticField(charge, x, y, z);
    }

    void ApplyElectromagneticField(ElectromagneticField* field, double x, double y, double z) {
        // Simulate applying the field to an object
        std::cout << "Field applied at (" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    void DestroyElectromagneticField(ElectromagneticField* field) {
        delete field;
    }
}