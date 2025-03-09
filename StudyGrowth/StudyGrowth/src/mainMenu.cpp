#include "raylib.h"
#include <iostream>
#include "..//include/mainMenu.h"

void mainMenu()
{
    // Initialize the window
    const int screenWidth = 1400;
    const int screenHeight = 1000;
    InitWindow(screenWidth, screenHeight, "Main menu");

    Image image = LoadImage("assets/Tree.png");   
    Texture2D texture = LoadTextureFromImage(image);          // Image converted to texture, GPU memory (VRAM)
    UnloadImage(image); 

    SetTargetFPS(60);     // Set our game to run at 60 frames-per-second
    while (!WindowShouldClose())   
    {
        // Start drawing
        BeginDrawing();

        ClearBackground(RAYWHITE);  // Clear the screen with a white background

        // Draw the image at the position (100, 100)
        DrawTexture(texture, screenWidth / 2 - texture.width / 2, screenHeight / 2 - texture.height / 2, WHITE);

        // End drawing
        EndDrawing();
    }

    // Unload the texture
    UnloadTexture(texture);

    // Close window and OpenGL context
    CloseWindow();

}