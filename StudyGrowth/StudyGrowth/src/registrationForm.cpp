#include "raylib.h"
#include <iostream>
#include <fstream>
#include <functional>
#include <string>
#include "..//include/startandexitButtons.h"

using namespace std;

// Create an instance of std::hash
hash<string> hasher;

// Function to register a new user
void registerUser(string username, string password) {
    ofstream file("users.txt", ios::app);
    if (file.is_open()) {
        // Hash the password and store the username with hashed password
        file << username << " " << hasher(password) << "\n";
        file.close();
        cout << "User registered successfully!\n";
    }
    else {
        cerr << "Error opening file!\n";
    }
}

// Function to check login
bool loginUser(const string& username, const string& password) {
    ifstream file("users.txt");
    string storedUser;
    size_t storedHash;

    if (file.is_open()) {
        while (file >> storedUser >> storedHash) {
            if (storedUser == username && storedHash == hasher(password)) {
                file.close();
                return true;  // Login successful
            }
        }
        file.close();
    }
    else {
        cerr << "Error opening file!\n";
    }
    return false;
}

void handleTextInput(char* text, int& letterCount, bool isFocused, Rectangle inputRec) {
    if (isFocused) {
        int key = GetCharPressed();
        while (key > 0) {
            if ((key >= 32) && (key <= 125) && (letterCount < MAX_INPUT_CHARS)) {
                text[letterCount] = (char)key;
                text[letterCount + 1] = '\0';  // Add null terminator
                letterCount++;
            }
            key = GetCharPressed();  // Get next character in queue
        }

        if (IsKeyPressed(KEY_BACKSPACE)) {
            letterCount--;
            if (letterCount < 0) letterCount = 0;
            text[letterCount] = '\0';
        }
    }
}

void loginForm() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Login Form");

    // Variables for text input
    char username[MAX_INPUT_CHARS + 1] = "\0";  // User's input username
    char password[MAX_INPUT_CHARS + 1] = "\0";  // User's input password
    int letterCountUsername = 0;
    int letterCountPassword = 0;

    // Input box positions and sizes
    Rectangle usernameRec = { 300, 150, 225, 50 };
    Rectangle passwordRec = { 300, 250, 225, 50 };
    Rectangle submitRec = { 300, 350, 225, 50 };
    bool mouseOnText = false;

    bool isUsernameFocused = true;  // Username is focused first
    bool isLoggedIn = false; // Flag to check if login is successful

    Color bgColor = { 112, 196, 164 };  // Previous background color

    SetTargetFPS(60);  // Set our game to run at 60 frames per second

    while (!WindowShouldClose()) {
        // Update
        Vector2 mouse = GetMousePosition();
        if (CheckCollisionPointRec(mouse, usernameRec)) mouseOnText = true;
        else if (CheckCollisionPointRec(mouse, passwordRec)) mouseOnText = true;
        else mouseOnText = false;

        // Switch focus when TAB key is pressed
        if (IsKeyPressed(KEY_TAB)) {
            isUsernameFocused = !isUsernameFocused;
        }

        // Handle username input
        handleTextInput(username, letterCountUsername, isUsernameFocused, usernameRec);

        // Handle password input
        handleTextInput(password, letterCountPassword, !isUsernameFocused, passwordRec);

        // Check if submit button is clicked
        if (CheckCollisionPointRec(mouse, submitRec) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            if (letterCountUsername > 0 && letterCountPassword > 0) {
                // Verify login (this checks if the username and password match the stored values)
                if (loginUser(username, password)) {
                    isLoggedIn = true;
                }
                else {
                    isLoggedIn = false;
                }
            }
        }

        BeginDrawing();

        ClearBackground(bgColor);  // Set the background color

        DrawText("Login Form", 320, 50, 40, DARKGRAY);

        // Draw Username input box
        DrawRectangleRec(usernameRec, LIGHTGRAY);
        if (isUsernameFocused) DrawRectangleLines((int)usernameRec.x, (int)usernameRec.y, (int)usernameRec.width, (int)usernameRec.height, RED);
        else DrawRectangleLines((int)usernameRec.x, (int)usernameRec.y, (int)usernameRec.width, (int)usernameRec.height, DARKGRAY);
        DrawText("Username:", 150, 160, 20, DARKGRAY);
        DrawText(username, (int)usernameRec.x + 5, (int)usernameRec.y + 8, 30, MAROON);

        // Draw Password input box
        DrawRectangleRec(passwordRec, LIGHTGRAY);
        if (!isUsernameFocused) DrawRectangleLines((int)passwordRec.x, (int)passwordRec.y, (int)passwordRec.width, (int)passwordRec.height, RED);
        else DrawRectangleLines((int)passwordRec.x, (int)passwordRec.y, (int)passwordRec.width, (int)passwordRec.height, DARKGRAY);
        DrawText("Password:", 150, 260, 20, DARKGRAY);
        DrawText(TextFormat("%.*s", letterCountPassword, "**********"), (int)passwordRec.x + 5, (int)passwordRec.y + 8, 30, MAROON);

        // Draw Submit Button
        DrawRectangleRec(submitRec, LIGHTGRAY);
        DrawRectangleLines((int)submitRec.x, (int)submitRec.y, (int)submitRec.width, (int)submitRec.height, DARKGRAY);
        DrawText("Submit", (int)submitRec.x + (submitRec.width / 2) - MeasureText("Submit", 20) / 2, (int)submitRec.y + (submitRec.height / 2) - 20, 20, DARKGRAY);

        // Show login status
        if (isLoggedIn) {
            loginPage();
        }
        EndDrawing();
    }

    CloseWindow();  // De-initialize and close window
}

void registrationForm() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Registration Form");

    // Variables for text input
    char username[MAX_INPUT_CHARS + 1] = "\0";
    char password[MAX_INPUT_CHARS + 1] = "\0";
    int letterCountUsername = 0;
    int letterCountPassword = 0;

    Rectangle usernameRec = { 300, 150, 225, 50 };
    Rectangle passwordRec = { 300, 250, 225, 50 };
    Rectangle submitRec = { 300, 350, 225, 50 };
    Rectangle loginLinkRec = { 340, 420, 150, 30 }; // "Go to Login" link area

    bool isUsernameFocused = true;
    bool isSubmitted = false;

    Color bgColor = { 112, 196, 164 };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        Vector2 mouse = GetMousePosition();

        if (IsKeyPressed(KEY_TAB)) {
            isUsernameFocused = !isUsernameFocused;
        }

        // Handle username input
        handleTextInput(username, letterCountUsername, isUsernameFocused, usernameRec);

        // Handle password input
        handleTextInput(password, letterCountPassword, !isUsernameFocused, passwordRec);

        // Check if submit button is clicked
        if (CheckCollisionPointRec(mouse, submitRec) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            if (letterCountUsername > 0 && letterCountPassword > 0) {
                registerUser(username, password);
                isSubmitted = true;
            }
        }

        // Check if "Go to Login" is clicked
        if (isSubmitted && CheckCollisionPointRec(mouse, loginLinkRec) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            CloseWindow();
            loginForm();  // Redirect to login
            return;
        }

        BeginDrawing();
        ClearBackground(bgColor);

        DrawText("Registration Form", 320, 50, 40, DARKGRAY);

        // Draw Username input box
        DrawRectangleRec(usernameRec, LIGHTGRAY);
        DrawRectangleLines((int)usernameRec.x, (int)usernameRec.y, (int)usernameRec.width, (int)usernameRec.height, isUsernameFocused ? RED : DARKGRAY);
        DrawText("Username:", 150, 160, 20, DARKGRAY);
        DrawText(username, (int)usernameRec.x + 5, (int)usernameRec.y + 8, 30, MAROON);

        // Draw Password input box
        DrawRectangleRec(passwordRec, LIGHTGRAY);
        DrawRectangleLines((int)passwordRec.x, (int)passwordRec.y, (int)passwordRec.width, (int)passwordRec.height, !isUsernameFocused ? RED : DARKGRAY);
        DrawText("Password:", 150, 260, 20, DARKGRAY);
        DrawText(TextFormat("%.*s", letterCountPassword, "**********"), (int)passwordRec.x + 5, (int)passwordRec.y + 8, 30, MAROON);

        // Draw Submit Button
        DrawRectangleRec(submitRec, LIGHTGRAY);
        DrawRectangleLines((int)submitRec.x, (int)submitRec.y, (int)submitRec.width, (int)submitRec.height, DARKGRAY);
        DrawText("Submit", (int)submitRec.x + (submitRec.width / 2) - MeasureText("Submit", 20) / 2, (int)submitRec.y + (submitRec.height / 2) - 10, 20, DARKGRAY);

        // Show submission status
        if (isSubmitted) {
            DrawText("User registered successfully!", 250, 400, 20, DARKGREEN);

            // Draw "Go to Login" link
            Color linkColor = CheckCollisionPointRec(mouse, loginLinkRec) ? BLUE : DARKBLUE;
            DrawText("Go to Login", (int)loginLinkRec.x, (int)loginLinkRec.y, 20, linkColor);
        }

        EndDrawing();
    }

    CloseWindow();
}
