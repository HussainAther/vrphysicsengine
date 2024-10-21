// PhysicsObject.h
#ifndef PHYSICS_OBJECT_H
#define PHYSICS_OBJECT_H

#include <iostream>

class PhysicsObject {
public:
    // Properties
    float mass;
    float position[3];  // x, y, z position
    float velocity[3];  // x, y, z velocity
    float force[3];     // x, y, z force

    // Constructor
    PhysicsObject(float mass, float x, float y, float z);

    // Methods
    void applyForce(float fx, float fy, float fz);
    void update(float deltaTime);

    // Helper to reset force after each update
    void resetForce();
};

#endif // PHYSICS_OBJECT_H

