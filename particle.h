//
// Created by gwen on 18/11/2026.
//

#ifndef GRAVITY_PARTICLE_H
#define GRAVITY_PARTICLE_H
#include <vector>

struct Vec2 {
    double x;
    double y;
};

class Particle {
    public:
        Vec2 position;
        Vec2 velocity;
        int mass;
        int radius;
        Particle(const float x, const float y, const int mass, const int radius) : position(x, y), velocity(0,0), mass(mass), radius(radius) {}
        Particle(const Vec2 position, const int m, const int r) : position(position), velocity(0,0), mass(m), radius(r) {}

};

#endif //GRAVITY_PARTICLE_H