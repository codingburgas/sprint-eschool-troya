#include "raylib.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "..//include/searchBar.h"
#include "..//include/softwareEngineering.h"
#include "..//include/robotics.h"
#include "..//include/webDesign.h"
#include "..//include/computerNetworks.h"

struct FunctionData {
    std::string name;
    void (*function)();
};


std::vector<FunctionData> functions = {
    {"algorithms", algorithms},
    {"databases", databases},
    {"web development", webDevelopment},
    {"programming", programming},
    {"software development", softwareDevelopment},
    {"sensors", sensorsAutomation},
    {"iot", iot},
    {"machine learning", machineLearning},
    {"robot programming", robotProgramming},
    {"graphic design", graphicDesign},
    {"web design", webDesign},
    {"animation", animation},
    {"computer networks", computerNetowkrs},
    {"operating systems", operatingSystems},
    {"cloud technologies", cloudTechnologies}
};
void searchBar() {
    static std::string searchText = "";
    static bool isSearchBarActive = false; // Track if the search bar is focused
    static float cursorBlinkTimer = 0.0f; // Timer for cursor blinking
    static bool functionTriggered = false; // Track if a function has been triggered

    // Handle keyboard input
    int key = GetCharPressed();
    while (key > 0) {
        if ((key >= 32) && (key <= 125)) {
            searchText += (char)key;
            isSearchBarActive = true; // Activate search bar when typing
        }
        key = GetCharPressed();
    }

    // Handle backspace
    if (IsKeyPressed(KEY_BACKSPACE) && !searchText.empty()) {
        searchText.pop_back();
    }

    // Check for exact function match
    for (const auto& func : functions) {
        if (searchText == func.name && !functionTriggered) {
            func.function(); // Call the matched function
            functionTriggered = true; // Avoid multiple calls
            searchText = ""; // Clear the search bar after triggering
            isSearchBarActive = false; // Deactivate the search bar
        }
    }

    // Search bar position and dimensions
    const int searchBarX = 80;
    const int searchBarY = 15;
    const int searchBarWidth = 400;
    const int searchBarHeight = 40;

    // Draw search bar background
    DrawRectangleRounded(
        Rectangle{ (float)searchBarX, (float)searchBarY, (float)searchBarWidth, (float)searchBarHeight },
        0.3f, 10, LIGHTGRAY
    );

    // Draw search text
    const char* placeholderText = "Search...";
    if (searchText.empty() && !isSearchBarActive) {
        DrawText(placeholderText, searchBarX + 10, searchBarY + 10, 20, GRAY);
    }
    else {
        DrawText(searchText.c_str(), searchBarX + 10, searchBarY + 10, 20, BLACK);
    }

    // Draw blinking cursor
    if (isSearchBarActive) {
        cursorBlinkTimer += GetFrameTime();
        if ((int)(cursorBlinkTimer * 2) % 2 == 0) {
            int textWidth = MeasureText(searchText.c_str(), 20);
            DrawLine(searchBarX + 10 + textWidth, searchBarY + 10, searchBarX + 10 + textWidth, searchBarY + 30, BLACK);
        }
    }

    // Check if the search bar is clicked
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, Rectangle{ (float)searchBarX, (float)searchBarY, (float)searchBarWidth, (float)searchBarHeight })) {
            isSearchBarActive = true;
        }
        else {
            isSearchBarActive = false;
        }
    }

    // Reset functionTriggered if the search bar is empty
    if (searchText.empty()) {
        functionTriggered = false;
    }
}