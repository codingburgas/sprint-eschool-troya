#include "raylib.h"
#include "..//include/mainMenu.h"
#include "..//include/softwareEngineering.h"
#include "..//include/computerNetworks.h"
#include "..//include/webDesign.h"
#include "..//include/robotics.h"
#include "..//include/searchBar.h"
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
        {{533, 424}, 50, programming},
        {{464, 273}, 50, softwareDevelopment},
        {{455, 362}, 50, databases},
        {{550, 417}, 50, webDevelopment},
        {{520, 356}, 50, algorithms},
        {{681, 245}, 50, robotProgramming},
        {{728, 293}, 50, machineLearning},
        {{427, 339}, 50, iot},
        {{700, 371}, 50, sensorsAutomation},
        {{798, 308}, 50, cloudTechnologies},
        {{856, 263}, 50, operatingSystems},
        {{847, 352}, 50, computerNetowkrs},
        {{831, 434}, 50, graphicDesign},
        {{934, 404}, 50, webDesign},
        {{916, 300}, 50, animation}
    };

    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(texture, 0, 0, WHITE);

        // Show the search bar in the top-left corner
        searchBar();

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