#include "raylib.h"
#include "..//include/softwareEngineering.h"
#include <iostream>

using namespace std;



// Topic functions
void programming() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Programming languages");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title inside the box (adjusted position)
        int titleX = 250;  // Start position adjusted to be inside the box
        int titleY = 120;  // Positioned further down to fit inside the box
        DrawText("Programming languages", titleX, titleY, 40, DARKBLUE);

        // Lesson Content with smaller font size
        int textStartX = 300; // Adjusted to be inside the board
        int textStartY = 200; // Adjusted to fit inside the writing area
        int lineSpacing = 30;  // Smaller line spacing for more text

        // Updated content with your provided text
        DrawText("Python-Simple and easy to read; Great for beginners and rapid development;", textStartX, textStartY, 20, BLACK);
        DrawText(" Used for web development, data analysis, automation, AI;", textStartX, textStartY + lineSpacing, 20, BLACK);

        DrawText("Java-Object-oriented and platform-independent;", textStartX, textStartY + 2 * lineSpacing, 20, BLACK);
        DrawText("Commonly used for Android apps, large-scale systems.", textStartX, textStartY + 3 * lineSpacing, 20, BLACK);
        DrawText("Compiled into bytecode, runs on the JVM (Java Virtual Machine).", textStartX, textStartY + 4 * lineSpacing, 20, BLACK);
        DrawText("C++ - Powerful and fast.", textStartX, textStartY + 5 * lineSpacing, 20, BLACK);
        DrawText("Used in game development, system software, ", textStartX, textStartY + 6 * lineSpacing, 20, BLACK);

        DrawText("and applications needing high performance.", textStartX, textStartY + 7 * lineSpacing, 20, BLACK);
        DrawText("Allows direct memory manipulation.", textStartX, textStartY + 8 * lineSpacing, 20, BLACK);

        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void databases() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Data bases");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title inside the box (adjusted position)
        int titleX = 250;  // Start position adjusted to be inside the box
        int titleY = 120;  // Positioned further down to fit inside the box
        DrawText("Data bases", titleX, titleY, 40, DARKBLUE);

        // Lesson Content with smaller font size
        int textStartX = 300; // Adjusted to be inside the board
        int textStartY = 200; // Adjusted to fit inside the writing area
        int lineSpacing = 30;  // Smaller line spacing for more text

        // Updated content with your provided text
        DrawText("A database is a system for storing, organizing, and managing data.", textStartX, textStartY, 20, BLACK);
        DrawText("It allows users to store, retrieve, and manipulate data efficiently.", textStartX, textStartY + lineSpacing, 20, BLACK);

        DrawText("Key Concepts : Tables; Records; Fields; Primary Key; Foreign Key", textStartX, textStartY + 2 * lineSpacing, 20, BLACK);
        DrawText("Types of Databases:", textStartX, textStartY + 3 * lineSpacing, 20, BLACK);
        DrawText("Relational Databases (SQL): Use structured query language", textStartX, textStartY + 4 * lineSpacing, 20, BLACK);
        DrawText("(e.g., MySQL, PostgreSQL) to manage data in tables.", textStartX, textStartY + 5 * lineSpacing, 20, BLACK);

        DrawText("NoSQL Databases: Non-relational databases (e.g., MongoDB) ", textStartX, textStartY + 6 * lineSpacing, 20, BLACK);
        DrawText("that store data in flexible formats like documents or key-value pairs.", textStartX, textStartY + 7 * lineSpacing, 20, BLACK);

        DrawText("Basic Operations:", textStartX, textStartY + 8 * lineSpacing, 20, BLACK);
        DrawText("CRUD and Querying", textStartX, textStartY + 9 * lineSpacing, 20, BLACK);

        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void webDevelopment() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Web development");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title inside the box (adjusted position)
        int titleX = 250;  // Start position adjusted to be inside the box
        int titleY = 120;  // Positioned further down to fit inside the box
        DrawText("Web development", titleX, titleY, 40, DARKBLUE);

        // Lesson Content with smaller font size
        int textStartX = 300; // Adjusted to be inside the board
        int textStartY = 200; // Adjusted to fit inside the writing area
        int lineSpacing = 30;  // Smaller line spacing for more text

        // Updated content with your provided text
        DrawText("Web development is the process of building websites and web applications. ", textStartX, textStartY, 20, BLACK);
        DrawText("It involves designing, coding, and deploying websites for users to interact with through browsers.", textStartX, textStartY + lineSpacing, 20, BLACK);

        DrawText("Key Components: ", textStartX, textStartY + 2 * lineSpacing, 20, BLACK);
        DrawText("Frontend (Client-Side): What users see and interact with. It includes HTML, CSS, and JavaScript.", textStartX, textStartY + 3 * lineSpacing, 20, BLACK);
        DrawText("Backend (Server-Side): The behind-the-scenes part that processes data and serves the frontend.", textStartX, textStartY + 4 * lineSpacing, 20, BLACK);
        DrawText("Web Hosting: Deploying the website on a server to make it accessible online.", textStartX, textStartY + 5 * lineSpacing, 20, BLACK);

        DrawText("Basic Web Development Process: Design", textStartX, textStartY + 6 * lineSpacing, 20, BLACK);
        DrawText("Development", textStartX, textStartY + 7 * lineSpacing, 20, BLACK);

        DrawText("Testing", textStartX, textStartY + 8 * lineSpacing, 20, BLACK);
        DrawText("Deployment", textStartX, textStartY + 9 * lineSpacing, 20, BLACK);

        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void softwareDevelopment() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Software development");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title inside the box (adjusted position)
        int titleX = 250;  // Start position adjusted to be inside the box
        int titleY = 120;  // Positioned further down to fit inside the box
        DrawText("Software development", titleX, titleY, 40, DARKBLUE);

        // Lesson Content with smaller font size
        int textStartX = 270; // Adjusted to be inside the board
        int textStartY = 200; // Adjusted to fit inside the writing area
        int lineSpacing = 30;  // Smaller line spacing for more text

        // Updated content with your provided text
        DrawText("Software development is the process of creating, testing, and maintaining software.", textStartX, textStartY, 20, BLACK);
        DrawText("Key Stages: Planning: Define requirements and plan the project.; Design: Create system blueprints.;", textStartX, textStartY + lineSpacing, 20, BLACK);

        DrawText("Coding: Write the code.; Testing: Find and fix bugs.; Deployment: Release the software.;", textStartX, textStartY + 2 * lineSpacing, 20, BLACK);
        DrawText("Maintenance: Update and fix issues.", textStartX, textStartY + 3 * lineSpacing, 20, BLACK);
        DrawText("Methodologies: Waterfall: Sequential approach; Agile: Flexible, iterative development.;", textStartX, textStartY + 4 * lineSpacing, 20, BLACK);
        DrawText("DevOps: Combines development and operations for efficiency.", textStartX, textStartY + 5 * lineSpacing, 20, BLACK);
        DrawText("Tools:", textStartX, textStartY + 6 * lineSpacing, 20, BLACK);

        DrawText("IDEs: Visual Studio, Eclipse, PyCharm.", textStartX, textStartY + 7 * lineSpacing, 20, BLACK);
        DrawText("Version Control: Git for tracking changes.", textStartX, textStartY + 8 * lineSpacing, 20, BLACK);
        DrawText("Software development turns ideas into functional applications using structured processes and tools.", textStartX, textStartY + 9 * lineSpacing, 20, BLACK);


        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();

}
void algorithms() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Algorithms and Data Structures");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title inside the box (adjusted position)
        int titleX = 250;  // Start position adjusted to be inside the box
        int titleY = 120;  // Positioned further down to fit inside the box
        DrawText("Algorithms and Data Structures", titleX, titleY, 40, DARKBLUE);

        // Lesson Content with smaller font size
        int textStartX = 300; // Adjusted to be inside the board
        int textStartY = 200; // Adjusted to fit inside the writing area
        int lineSpacing = 30;  // Smaller line spacing for more text

        // Updated content with your provided text
        DrawText("An algorithm is a step-by-step process for solving a problem.", textStartX, textStartY, 20, BLACK);
        DrawText("It takes input, performs operations, and gives an output.", textStartX, textStartY + lineSpacing, 20, BLACK);

        DrawText("Example: Find the Maximum Number in a List:", textStartX, textStartY + 2 * lineSpacing, 20, BLACK);
        DrawText("Start with the first number as the max.", textStartX, textStartY + 3 * lineSpacing, 20, BLACK);
        DrawText("Compare each number in the list.", textStartX, textStartY + 4 * lineSpacing, 20, BLACK);
        DrawText("If a number is larger, update the max.", textStartX, textStartY + 5 * lineSpacing, 20, BLACK);
        DrawText("Return the max.", textStartX, textStartY + 6 * lineSpacing, 20, BLACK);

        DrawText("Time Complexity:", textStartX, textStartY + 7 * lineSpacing, 20, BLACK);
        DrawText("O(1): Constant time.", textStartX, textStartY + 8 * lineSpacing, 20, BLACK);
        DrawText("O(n): Linear time, based on list size.", textStartX, textStartY + 9 * lineSpacing, 20, BLACK);

        DrawText("Algorithms help solve problems efficiently and are essential in programming.", textStartX, textStartY + 10 * lineSpacing, 20, BLACK);

        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}