#include "raylib.h"
#include <iostream>
#include "..//include/startandexitButtons.h"
#include "..//include/mainMenu.h"
#include "..//include/registrationForm.h"
#include "..//include/registerandloginButtons.h"

void loginPage()
{
    // Window setup
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Main page");

    // Load images for buttons
    Texture2D startButton = LoadTexture("assets/startButton.png");
    Texture2D exitButton = LoadTexture("assets/exitButton.png");

    // Scale factor for buttons
    float scale = 0.3f; // Makes buttons 30% of their original size

    // Define spacing
    float buttonSpacing = 40.0f; // Space between buttons

    // Button sizes after scaling
    float startWidth = startButton.width * scale;
    float startHeight = startButton.height * scale;
    float exitWidth = exitButton.width * scale;
    float exitHeight = exitButton.height * scale;

    // Centered positions with spacing
    Vector2 startPos = { screenWidth / 2.0f - startWidth / 2.0f, 200 };
    Vector2 exitPos = { screenWidth / 2.0f - exitWidth / 2.0f, startPos.y + startHeight + buttonSpacing };

    // Background color
    Color bgColor = { 112, 196, 164 };

    // Title text and font setup
    const char* title = "Welcome to StudyGrowth";
    int titleFontSize = 40;
    Vector2 titlePos = { screenWidth / 2.0f - MeasureText(title, titleFontSize) / 2.0f, 100 };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Get mouse position
        Vector2 mouse = GetMousePosition();

        // Check if buttons are hovered
        bool startHover = CheckCollisionPointRec(mouse, { startPos.x, startPos.y, startWidth, startHeight });
        bool exitHover = CheckCollisionPointRec(mouse, { exitPos.x, exitPos.y, exitWidth, exitHeight });

        // Handle button clicks
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            if (startHover) {
                registerPage();
                return;
            }
            if (exitHover) {
                CloseWindow();
            }
        }

        // Draw
        BeginDrawing();
        ClearBackground(bgColor);

        // Draw title
        DrawText(title, titlePos.x, titlePos.y, titleFontSize, WHITE);

        // Draw buttons (slightly bigger if hovered)
        if (startHover) DrawTextureEx(startButton, startPos, 0, scale * 1.1f, WHITE);
        else DrawTextureEx(startButton, startPos, 0, scale, WHITE);

        if (exitHover) DrawTextureEx(exitButton, exitPos, 0, scale * 1.1f, WHITE);
        else DrawTextureEx(exitButton, exitPos, 0, scale, WHITE);

        EndDrawing();
    }

    // Cleanup
    UnloadTexture(startButton);
    UnloadTexture(exitButton);
    CloseWindow();
}
