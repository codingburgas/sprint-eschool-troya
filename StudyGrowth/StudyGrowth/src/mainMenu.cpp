#include <iostream>
#include "../include/mainMenu.h"
#include "raylib.h"

using namespace std;

void mainMenu()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib window");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Hello World!", 300, 200, 30, GREEN);

        EndDrawing();
    }
}