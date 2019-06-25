#pragma once
#include "ray.h"

class Material;

class Entity {
        virtual bool hit(const ray& r) = 0;
};


class Sphere : public Entity {
	public:
		Sphere() {}
		Sphere(vec3 c, float r) { center = c; radius = r; }
		Sphere(vec3 c, float r, Material* m) { center = c; radius = r; material = m; }
        
        	bool hit(const ray& r);
		float radius;
		Material *material;
		vec3 center;
};

bool Sphere::hit(const ray& r) {
	// x * x + y * y + z * z = R * R;
	//
}
