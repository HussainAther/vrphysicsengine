// PhysicsEngine.cpp
#include "PhysicsEngine.h"

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

