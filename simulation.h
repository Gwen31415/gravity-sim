//
// Created by gwen on 18/11/2026.
//

#ifndef GRAVITY_SIMULATION_H
#define GRAVITY_SIMULATION_H
#include <vector>

#include "particle.h"
#include "bits/random.h"

struct Rules {
    Vec2 zone_size;
    float min_mass;
    float max_mass;
    float min_radius;
    float max_radius;
};

class Simulation {
    public:
        std::vector<Particle> particles;

    void init(const int particleCount , const Rules rules, const int seed = 1) {

        srand(seed);

        particles.clear();

        for (int i=0; i<particleCount; i++) {

            particles.push_back(Particle(

                static_cast<float>(rand() / static_cast<float>(RAND_MAX) * rules.zone_size.x),
                static_cast<float>(rand() / static_cast<float>(RAND_MAX) * rules.zone_size.y),
                (rand()) / static_cast<float>(RAND_MAX) * (rules.max_mass-rules.min_mass) + rules.min_mass,
                (rand()) / static_cast<float>(RAND_MAX) * (rules.max_radius-rules.min_radius) + rules.min_radius
                ));
        }
    }
};

#endif //GRAVITY_SIMULATION_H
