extends Node

# Load the GDNative script for the physics engine wrapper
var physics_engine = preload("res://addons/PhysicsEngine/physics_engine.gdns").new()

func _ready():
    physics_engine.simulate_gravity(9.81)

func _process(delta):
    physics_engine.update_simulation(delta)

func apply_force(force: Vector3):
    physics_engine.apply_force(force)

