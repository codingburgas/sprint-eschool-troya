#include "raylib.h"
#include "..//include/softwareEngineering.h"
#include "..//include/registrationForm.h"
#include <iostream>

using namespace std;



void programming() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Programming languages");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);


    SetTargetFPS(60);

    Rectangle rect = { 1035, 800, 220, 80 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            loginForm();
        }

        // Draw background
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title
        DrawText("Programming languages", 100, 110, 50, DARKGREEN);

        //Lesson
        DrawText("1. What is Python?", 120, 180, 28, WHITE);
        DrawText("Python is a high-level, interpreted programming language", 120, 220, 28, WHITE);
        DrawText("It is widely used in web development, data science, automation, AI, and more.", 120, 260, 28, WHITE);
        DrawText("2. Key Features of Python:", 120, 300, 28, WHITE);
        DrawText("Easy to learn & read : Python has a simple and clean syntax;", 120, 340, 28, WHITE);
        DrawText("3. Basic Concepts:", 120, 380, 28, WHITE);
        DrawText("-Variables; Data types; Operators; Conditional Statements(if, elif, else); Loops; Functions; ", 120, 420, 28, WHITE);
        DrawText("1. What is Java?", 120, 460, 28, WHITE);
        DrawText("Java is a high-level, object-oriented programming language", 120, 500, 28, WHITE);
        DrawText("2. Key Features of Java:", 120, 540, 28, WHITE);
        DrawText("Platform-independent; Object-oriented; Strongly typed; Multi-threaded; Robust and secure;", 120, 580, 28, WHITE);
        DrawText("3. Basic Concepts:", 120, 620, 28, WHITE);
        DrawText("-Variables; Data types; Operators; Conditional Statements; Loops; Methods;Classes and Objects;", 120, 660, 28, WHITE);
        DrawText("1. What is C++?", 120, 700, 28, WHITE);
        DrawText("C++ is a high-performance, general-purpose programming language", 120, 740, 28, WHITE);
        DrawText("It is widely used in game development, system programming, embedded systems", 120, 780, 28, WHITE);
        DrawText("2. Key Features of C++:", 120, 820, 28, WHITE);
        DrawText("-Compiled and Fast; Object-Oriented; Multi-Paradigm; Memory Management;", 120, 860, 28, WHITE);



        

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

    Rectangle rect = { 1035, 800, 220, 80 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            loginForm();
        }

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        //Title
        DrawText("Date bases", 100, 110, 50, DARKGREEN);

        //Lesson
        DrawText("1. What is a Database?", 120, 180, 28, WHITE);
        DrawText("A database is an organized collection of data, typically stored electronically.", 120, 220, 28, WHITE);
        DrawText("It enables efficient data storage, retrieval, and management.", 120, 260, 28, WHITE);
        DrawText("2. Key Features of Databases:", 120, 300, 28, WHITE);
        DrawText("Structured data storage; Efficient querying; Data integrity & security;", 120, 340, 28, WHITE);
        DrawText("Scalability; Multi-user access; Backup & Recovery;", 120, 380, 28, WHITE);
        DrawText("3. Types of Databases:", 120, 420, 28, WHITE);
        DrawText("-Relational Databases (SQL, MySQL, PostgreSQL, Oracle);", 120, 460, 28, WHITE);
        DrawText("-NoSQL Databases (MongoDB, Redis, Cassandra);", 120, 500, 28, WHITE);
        DrawText("-Cloud Databases (Google Firebase, AWS DynamoDB);", 120, 540, 28, WHITE);
        DrawText("1. What is SQL?", 120, 580, 28, WHITE);
        DrawText("SQL (Structured Query Language) is used to manage and manipulate databases.", 120, 620, 28, WHITE);
        DrawText("2. Key Features of SQL:", 120, 660, 28, WHITE);
        DrawText("-Data Querying (SELECT, WHERE, JOIN); Data Manipulation (INSERT, UPDATE, DELETE);", 120, 700, 28, WHITE);
        DrawText("-Data Definition (CREATE, ALTER, DROP); Transactions & ACID Compliance;", 120, 740, 28, WHITE);
        DrawText("3. Basic Concepts:", 120, 780, 28, WHITE);
        DrawText("-Tables; Rows & Columns; Primary & Foreign Keys; Indexes; Normalization;", 120, 820, 28, WHITE);
        DrawText("-Stored Procedures; Views; Triggers; Constraints;", 120, 860, 28, WHITE);


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

    Rectangle rect = { 1035, 800, 220, 80 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            loginForm();
        }

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);
        //Title
        DrawText("Web development", 100, 110, 50, DARKGREEN);

        //Lesson
        DrawText("1. What is Web Development?", 120, 180, 28, WHITE);
        DrawText("Web development is the process of building and maintaining websites and web applications.", 120, 220, 28, WHITE);
        DrawText("It involves frontend, backend, and full-stack development.", 120, 260, 28, WHITE);
        DrawText("2. Key Features of Web Development:", 120, 300, 28, WHITE);
        DrawText("-User Interface (UI) and User Experience (UX); Responsive Design;", 120, 340, 28, WHITE);
        DrawText("-Client-Server Architecture; API Integration; Security;", 120, 380, 28, WHITE);
        DrawText("3. Frontend Development:", 120, 420, 28, WHITE);
        DrawText("-HTML (Structure of a webpage);", 120, 460, 28, WHITE);
        DrawText("-CSS (Styling and layout);", 120, 500, 28, WHITE);
        DrawText("-JavaScript (Interactivity and dynamic content);", 120, 540, 28, WHITE);
        DrawText("1. Backend Development:", 120, 580, 28, WHITE);
        DrawText("-Handles server-side logic, databases, and authentication;", 120, 620, 28, WHITE);
        DrawText("2. Key Backend Technologies:", 120, 660, 28, WHITE);
        DrawText("-Node.js, Express.js, Django, Flask, Ruby on Rails, PHP;", 120, 700, 28, WHITE);
        DrawText("-Databases: MySQL, PostgreSQL, MongoDB, Firebase;", 120, 740, 28, WHITE);
        DrawText("3. Full-Stack Development:", 120, 780, 28, WHITE);
        DrawText("-Combines both frontend and backend development;", 120, 820, 28, WHITE);
        DrawText("-Uses frameworks like MERN (MongoDB, Express, React, Node) or LAMP (Linux, Apache, MySQL, PHP);", 120, 860, 28, WHITE);


       

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
    Rectangle rect = { 1035, 800, 220, 80 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            loginForm();
        }

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        //Title
        DrawText("Software development", 100, 110, 50, DARKGREEN);

        //Lesson
        DrawText("1. What is Software Development?", 120, 180, 28, WHITE);
        DrawText("Software development is the process of designing, coding, testing, and maintaining applications.", 120, 220, 28, WHITE);
        DrawText("It includes various methodologies, tools, and programming languages.", 120, 260, 28, WHITE);
        DrawText("2. Key Features of Software Development:", 120, 300, 28, WHITE);
        DrawText("-Requirement Analysis; System Design; Coding; Testing; Deployment; Maintenance;", 120, 340, 28, WHITE);
        DrawText("3. Types of Software Development:", 120, 380, 28, WHITE);
        DrawText("-Desktop Applications (Windows, macOS, Linux);", 120, 420, 28, WHITE);
        DrawText("-Web Applications (Frontend, Backend, Full-Stack);", 120, 460, 28, WHITE);
        DrawText("-Mobile Applications (Android, iOS, Cross-Platform);", 120, 500, 28, WHITE);
        DrawText("-Embedded Systems (IoT, Robotics, Hardware Integration);", 120, 540, 28, WHITE);
        DrawText("1. Software Development Lifecycle (SDLC):", 120, 580, 28, WHITE);
        DrawText("-Planning → Design → Implementation → Testing → Deployment → Maintenance;", 120, 620, 28, WHITE);
        DrawText("2. Key Software Development Methodologies:", 120, 660, 28, WHITE);
        DrawText("-Waterfall Model; Agile Development (Scrum, Kanban); DevOps;", 120, 700, 28, WHITE);
        DrawText("3. Commonly Used Programming Languages:", 120, 740, 28, WHITE);
        DrawText("-C++, Java, Python, JavaScript, Swift, Kotlin, C#;", 120, 780, 28, WHITE);
        DrawText("-Each language has specific use cases based on the project type;", 120, 820, 28, WHITE);
        DrawText("4. Software Development Tools:", 120, 860, 28, WHITE);
        DrawText("-IDEs (Visual Studio, IntelliJ, PyCharm, Eclipse);", 120, 900, 28, WHITE);
        DrawText("-Version Control (Git, GitHub, GitLab, Bitbucket);", 120, 940, 28, WHITE);


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

    Rectangle rect = { 1035, 800, 220, 80 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            loginForm();
        }

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

       //Title
        DrawText("Algorithms", 100, 110, 50, DARKGREEN);

        //Lesson
        DrawText("1. What are Algorithms?", 120, 180, 28, WHITE);
        DrawText("An algorithm is a step-by-step procedure to solve a problem.", 120, 220, 28, WHITE);
        DrawText("It consists of a finite number of well-defined instructions.", 120, 260, 28, WHITE);
        DrawText("2. Key Features of Algorithms:", 120, 300, 28, WHITE);
        DrawText("-Correctness; Efficiency; Finiteness; Definiteness; Input & Output;", 120, 340, 28, WHITE);
        DrawText("3. Types of Algorithms:", 120, 380, 28, WHITE);
        DrawText("-Sorting Algorithms (Bubble Sort, Quick Sort, Merge Sort);", 120, 420, 28, WHITE);
        DrawText("-Searching Algorithms (Linear Search, Binary Search);", 120, 460, 28, WHITE);
        DrawText("-Graph Algorithms (Dijkstra, BFS, DFS);", 120, 500, 28, WHITE);
        DrawText("-Dynamic Programming (Fibonacci, Knapsack Problem);", 120, 540, 28, WHITE);
        DrawText("-Divide and Conquer (Merge Sort, Quick Sort, Binary Search);", 120, 580, 28, WHITE);
        DrawText("4. Algorithm Complexity (Big-O Notation):", 120, 620, 28, WHITE);
        DrawText("-Measures efficiency of an algorithm in terms of time and space;", 120, 660, 28, WHITE);
        DrawText("-Common complexities: O(1), O(log n), O(n), O(n log n), O(n^2);", 120, 700, 28, WHITE);


        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}