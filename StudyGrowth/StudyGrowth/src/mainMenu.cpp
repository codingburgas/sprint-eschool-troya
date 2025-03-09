#include "raylib.h"
#include <iostream>
#include "..//include/mainMenu.h"
#include "..//include/registrationForm.h"
#include "raymath.h"

void mainMenu()
{
    // Initialize the window
    const int screenWidth = 1400;
    const int screenHeight = 1000;
    InitWindow(screenWidth, screenHeight, "Main menu");

    Image image = LoadImage("assets/Tree.png");
    Texture2D texture = LoadTextureFromImage(image);          // Image converted to texture, GPU memory (VRAM)
    UnloadImage(image);
    Vector2 circlePos = { 410, 261 };
    float circleRadius = 50;

    Vector2 circlePos2 = { 523, 335 };
    float circleRadius2 = 50;

    Vector2 circlePos3 = { 500, 255 };
    float circleRadius3 = 50;

    Vector2 circlePos4 = { 419, 158 };
    float circleRadius4 = 50;

    Vector2 circlePos5 = { 505, 113 };
    float circleRadius5 = 50;

    Vector2 circlePos6 = { 617, 239 };
    float circleRadius6 = 50;

    Vector2 circlePos7 = { 706, 276 };
    float circleRadius7 = 50;

    Vector2 circlePos8 = { 285, 122 };
    float circleRadius8 = 50;

    Vector2 circlePos9 = { 740, 177 };
    float circleRadius9 = 50;

    Vector2 circlePos10 = { 828, 198 };
    float circleRadius10 = 50;

    Vector2 circlePos11 = { 900, 142 };
    float circleRadius11 = 50;

    Vector2 circlePos12 = { 887, 252 };
    float circleRadius12 = 50;

    Vector2 circlePos13 = { 973, 188 };
    float circleRadius13 = 50;

    Vector2 circlePos14 = { 887, 252 };
    float circleRadius14 = 50;

    Vector2 circlePos15 = { 869, 355 };
    float circleRadius15 = 50;

    Vector2 circlePos16 = { 994, 317 };
    float circleRadius16 = 50;

    SetTargetFPS(60);     // Set our game to run at 60 frames-per-second
    while (!WindowShouldClose())
    {
        // Start drawing
        BeginDrawing();

        ClearBackground(RAYWHITE);  // Clear the screen with a white background

        DrawTexture(texture, 0, 0, WHITE);

        // Detect if the circle is clicked
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            Vector2 mousePos = GetMousePosition();

            // Check if the mouse is inside any of the circles
            float distance = Vector2Distance(mousePos, circlePos);
            if (distance <= circleRadius) {
                loginForm();
                DrawText("Clicked Circle 1!", 350, 500, 20, GREEN);
            }

            distance = Vector2Distance(mousePos, circlePos2);
            if (distance <= circleRadius2) {
                loginForm();
                DrawText("Clicked Circle 2!", 350, 500, 20, GREEN);
            }

            distance = Vector2Distance(mousePos, circlePos3);
            if (distance <= circleRadius3) {
                loginForm();
                DrawText("Clicked Circle 3!", 350, 500, 20, GREEN);
            }

            distance = Vector2Distance(mousePos, circlePos4);
            if (distance <= circleRadius4) {
                loginForm();
                DrawText("Clicked Circle 4!", 350, 500, 20, GREEN);
            }

            distance = Vector2Distance(mousePos, circlePos5);
            if (distance <= circleRadius5) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }

            distance = Vector2Distance(mousePos, circlePos7);
            if (distance <= circleRadius7) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos8);
            if (distance <= circleRadius8) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos9);
            if (distance <= circleRadius9) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos10);
            if (distance <= circleRadius10) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos11);
            if (distance <= circleRadius11) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos12);
            if (distance <= circleRadius12) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos13);
            if (distance <= circleRadius13) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos14);
            if (distance <= circleRadius14) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos15);
            if (distance <= circleRadius15) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
            distance = Vector2Distance(mousePos, circlePos16);
            if (distance <= circleRadius16) {
                loginForm();
                DrawText("Clicked Circle 5!", 350, 500, 20, GREEN);
            }
        }

        EndDrawing();
    }

    // Unload the texture
    UnloadTexture(texture);

    // Close window and OpenGL context
    CloseWindow();

}