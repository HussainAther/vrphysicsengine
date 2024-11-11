#ifndef PHYSICS_ENGINE_WRAPPER_H
#define PHYSICS_ENGINE_WRAPPER_H

#include <Godot.hpp>
#include <Reference.hpp>

namespace godot {

class PhysicsEngineWrapper : public Reference {
    GODOT_CLASS(PhysicsEngineWrapper, Reference)

public:
    static void _register_methods();

    PhysicsEngineWrapper();
    ~PhysicsEngineWrapper();

    void apply_force(Vector3 force);
    void simulate_gravity(float mass);
    void update_simulation(float delta_time);
};

}

#endif // PHYSICS_ENGINE_WRAPPER_H

