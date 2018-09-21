#pragma once
#include "Module.h"
#include "Globals.h"
#include "Box2D/Box2D/Box2D.h"

#define PIXEL_TO_METERS(pixel){ pixel * 0.01f}
#define METERS_TO_PIXELS(meter){(int)meter * 100}

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();
	

private:
	b2World * world;
	b2Vec2 gravity;
	bool debug;
};