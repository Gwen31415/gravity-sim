#include "particle.h"
#include "raylib.h"

int main() {
    InitWindow(800, 450, "Gravity simulation");

    std::vector<Particle> particles;

    particles.push_back(Particle({100, 100}, 100,100));

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);


        for (const Particle& particle : particles) {
            DrawCircle( static_cast<int>(particle.position.x), static_cast<int>(particle.position.y), static_cast<float>(particle.radius), {.r = 255, .g = 255, .b = 255, .a = 255});
        }

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);


        EndDrawing();
    }

    CloseWindow();

    return 0;
}