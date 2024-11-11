#include "PhysicsEngineWrapper.h"
#include "PhysicsEngineDLL.h"  // Include your DLL functions here

using namespace godot;

void PhysicsEngineWrapper::_register_methods() {
    register_method("apply_force", &PhysicsEngineWrapper::apply_force);
    register_method("simulate_gravity", &PhysicsEngineWrapper::simulate_gravity);
    register_method("update_simulation", &PhysicsEngineWrapper::update_simulation);
}

PhysicsEngineWrapper::PhysicsEngineWrapper() {}

PhysicsEngineWrapper::~PhysicsEngineWrapper() {}

void PhysicsEngineWrapper::apply_force(Vector3 force) {
    ApplyForce(force.x, force.y, force.z);
}

void PhysicsEngineWrapper::simulate_gravity(float mass) {
    SimulateGravity(mass);
}

void PhysicsEngineWrapper::update_simulation(float delta_time) {
    UpdateSimulation(delta_time);
}

