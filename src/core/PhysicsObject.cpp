// PhysicsObject.cpp
#include "PhysicsObject.h"

// Constructor to initialize an object with mass and position
PhysicsObject::PhysicsObject(float mass, float x, float y, float z) {
    this->mass = mass;
    position[0] = x;
    position[1] = y;
    position[2] = z;
    velocity[0] = velocity[1] = velocity[2] = 0.0f;
    force[0] = force[1] = force[2] = 0.0f;
}

// Apply a force to the object
void PhysicsObject::applyForce(float fx, float fy, float fz) {
    force[0] += fx;
    force[1] += fy;
    force[2] += fz;
}

// Update the object's position based on velocity and applied forces
void PhysicsObject::update(float deltaTime) {
    // Calculate acceleration (Force = mass * acceleration)
    float acceleration[3] = { force[0] / mass, force[1] / mass, force[2] / mass };

    // Update velocity
    velocity[0] += acceleration[0] * deltaTime;
    velocity[1] += acceleration[1] * deltaTime;
    velocity[2] += acceleration[2] * deltaTime;

    // Update position
    position[0] += velocity[0] * deltaTime;
    position[1] += velocity[1] * deltaTime;
    position[2] += velocity[2] * deltaTime;

    // Reset force after each update (forces are applied per simulation step)
    resetForce();
}

// Reset the force applied to the object (so that it doesn't keep accumulating)
void PhysicsObject::resetForce() {
    force[0] = force[1] = force[2] = 0.0f;
}

