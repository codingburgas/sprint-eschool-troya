#include "raylib.h"
#include <iostream>
#include "..//include/registerandloginButtons.h"
#include "..//include/mainMenu.h"
#include "..//include/registrationForm.h"

void registerPage()
{
    // Window setup
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Main page");

    // Load images for buttons
    Texture2D registerButton = LoadTexture("assets/registerButton.png");
    Texture2D loginButton = LoadTexture("assets/loginButton.png");

    // Scale factor for buttons
    float scale = 0.3f; // Makes buttons 30% of their original size

    // Define spacing
    float buttonSpacing = 40.0f; // Space between buttons

    // Button sizes after scaling
    float startWidth = registerButton.width * scale;
    float startHeight = registerButton.height * scale;
    float exitWidth = loginButton.width * scale;
    float exitHeight = loginButton.height * scale;

    // Centered positions with spacing
    Vector2 startPos = { screenWidth / 2.0f - startWidth / 2.0f, 200 };
    Vector2 exitPos = { screenWidth / 2.0f - exitWidth / 2.0f, startPos.y + startHeight + buttonSpacing };

    // Background color
    Color bgColor = { 112, 196, 164 };

    // Title text and font setup
    const char* title = "Register or Login";
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
                registrationForm();
                return;
            }
            if (exitHover) {
                loginForm();
            }
        }

        // Draw
        BeginDrawing();
        ClearBackground(bgColor);

        // Draw title
        DrawText(title, titlePos.x, titlePos.y, titleFontSize, WHITE);

        // Draw buttons (slightly bigger if hovered)
        if (startHover) DrawTextureEx(registerButton, startPos, 0, scale * 1.1f, WHITE);
        else DrawTextureEx(registerButton, startPos, 0, scale, WHITE);

        if (exitHover) DrawTextureEx(loginButton, exitPos, 0, scale * 1.1f, WHITE);
        else DrawTextureEx(loginButton, exitPos, 0, scale, WHITE);

        EndDrawing();
    }

    // Cleanup
    UnloadTexture(registerButton);
    UnloadTexture(loginButton);
    CloseWindow();
}
