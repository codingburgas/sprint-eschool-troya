#include "raylib.h"
#include "..//include/mainMenu.h"
#include "..//include/softwareEngineering.h"
#include <vector>
#include <functional>
#include "raymath.h"

using namespace std;

struct Circle {
    Vector2 position;
    float radius;
    function<void()> onClick;
};

// Main Menu Function
void mainMenu() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;
    InitWindow(screenWidth, screenHeight, "Main menu");

    Image image = LoadImage("assets/Tree.png");
    Texture2D texture = LoadTextureFromImage(image);
    UnloadImage(image);

    vector<Circle> circles = {
        {{506, 116}, 50, programming},
        {{419, 155}, 50, softwareDevelopment},
        {{409, 259}, 50, databases},
        {{498, 261}, 50, webDevelopment},
        {{527, 336}, 50, algorithms},
        {{687, 119}, 50, programming},
        {{742, 179}, 50, programming},
        {{617, 242}, 50, programming},
        {{711, 278}, 50, programming},
        {{904, 138}, 50, programming},
        {{829, 199}, 50, programming},
        {{895, 259}, 50, programming},
        {{974, 197}, 50, programming},
        {{991, 317}, 50, programming},
        {{868, 358}, 50, programming}
    };

    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(texture, 0, 0, WHITE);

        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            Vector2 mousePos = GetMousePosition();
            for (auto& circle : circles) {
                if (Vector2Distance(mousePos, circle.position) <= circle.radius) {
                    circle.onClick();
                    break;
                }
            }
        }

        EndDrawing();
    }

    UnloadTexture(texture);
    CloseWindow();
}