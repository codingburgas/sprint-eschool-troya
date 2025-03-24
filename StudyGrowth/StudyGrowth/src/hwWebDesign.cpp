#include "..//include/hwWebDesign.h"
#include "..//include/hwQuestions.h"
#include "..//include/webDesign.h"
#include "raylib.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void graphicDesignHomework() {
    InitWindow(700, 450, "Programming Homework");
    Texture2D background = LoadTexture("assets/homework.png");

    vector<pair<string, string>> selectedQuestions;
    vector<string> userAnswers(5, "");

    srand(time(0));
    while (selectedQuestions.size() < 5) {
        int randomIndex = rand() % graphicDesignQuestions.size();
        selectedQuestions.push_back(programmingQuestions[randomIndex]);
    }

    int currentQuestion = 0;
    bool showResult = false;
    int correctAnswers = 0;
    char inputBuffer[50] = "";
    int letterCount = 0;

    Rectangle rect = { 626, 414, 88, 44 };
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            graphicDesign();
        }
        DrawTexture(background, 0, 0, WHITE);

        if (!showResult) {
            DrawText(("Q" + to_string(currentQuestion + 1) + ": " + selectedQuestions[currentQuestion].first).c_str(), 50, 100, 20, BLACK);
            DrawRectangle(50, 200, 400, 50, LIGHTGRAY);
            DrawText(inputBuffer, 60, 215, 20, BLACK);

            if (IsKeyPressed(KEY_ENTER)) {
                userAnswers[currentQuestion] = inputBuffer;
                fill(begin(inputBuffer), end(inputBuffer), 0);
                letterCount = 0;

                if (++currentQuestion == 5) {
                    showResult = true;
                    for (int i = 0; i < 5; i++) {
                        if (userAnswers[i] == selectedQuestions[i].second) {
                            correctAnswers++;
                        }
                    }
                }
            }

            int key = GetCharPressed();
            while (key > 0) {
                if (letterCount < 49) {
                    inputBuffer[letterCount++] = (char)key;
                    inputBuffer[letterCount] = '\0';
                }
                key = GetCharPressed();
            }

        }
        else {
            DrawText(("You got " + to_string(correctAnswers) + "/5 correct!").c_str(), 100, 300, 30, BLACK);
        }

        EndDrawing();
    }

    UnloadTexture(background);
    CloseWindow();
}

void webDesignHomework() {
    InitWindow(700, 450, "Software Development Homework");
    Texture2D background = LoadTexture("assets/homework.png");

    vector<pair<string, string>> selectedQuestions;
    vector<string> userAnswers(5, "");

    srand(time(0));
    while (selectedQuestions.size() < 5) {
        int randomIndex = rand() % webDesignQuestions.size();
        selectedQuestions.push_back(webDesignQuestions[randomIndex]);
    }

    int currentQuestion = 0;
    bool showResult = false;
    int correctAnswers = 0;
    char inputBuffer[50] = "";
    int letterCount = 0;

    Rectangle rect = { 626, 414, 88, 44 };
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            webDesign();
        }
        DrawTexture(background, 0, 0, WHITE);

        if (!showResult) {
            DrawText(("Q" + to_string(currentQuestion + 1) + ": " + selectedQuestions[currentQuestion].first).c_str(), 50, 100, 20, BLACK);
            DrawRectangle(50, 200, 400, 50, LIGHTGRAY);
            DrawText(inputBuffer, 60, 215, 20, BLACK);

            if (IsKeyPressed(KEY_ENTER)) {
                userAnswers[currentQuestion] = inputBuffer;
                fill(begin(inputBuffer), end(inputBuffer), 0);
                letterCount = 0;

                if (++currentQuestion == 5) {
                    showResult = true;
                    for (int i = 0; i < 5; i++) {
                        if (userAnswers[i] == selectedQuestions[i].second) {
                            correctAnswers++;
                        }
                    }
                }
            }

            int key = GetCharPressed();
            while (key > 0) {
                if (letterCount < 49) {
                    inputBuffer[letterCount++] = (char)key;
                    inputBuffer[letterCount] = '\0';
                }
                key = GetCharPressed();
            }

        }
        else {
            DrawText(("You got " + to_string(correctAnswers) + "/5 correct!").c_str(), 100, 300, 30, BLACK);
        }

        EndDrawing();
    }

    UnloadTexture(background);
    CloseWindow();
}


void animationHomework() {
    InitWindow(700, 450, "Software Development Homework");
    Texture2D background = LoadTexture("assets/homework.png");

    vector<pair<string, string>> selectedQuestions;
    vector<string> userAnswers(5, "");

    srand(time(0));
    while (selectedQuestions.size() < 5) {
        int randomIndex = rand() % animationQuestions.size();
        selectedQuestions.push_back(animationQuestions[randomIndex]);
    }

    int currentQuestion = 0;
    bool showResult = false;
    int correctAnswers = 0;
    char inputBuffer[50] = "";
    int letterCount = 0;

    Rectangle rect = { 626, 414, 88, 44 };
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            animation();
        }
        DrawTexture(background, 0, 0, WHITE);

        if (!showResult) {
            DrawText(("Q" + to_string(currentQuestion + 1) + ": " + selectedQuestions[currentQuestion].first).c_str(), 50, 100, 20, BLACK);
            DrawRectangle(50, 200, 400, 50, LIGHTGRAY);
            DrawText(inputBuffer, 60, 215, 20, BLACK);

            if (IsKeyPressed(KEY_ENTER)) {
                userAnswers[currentQuestion] = inputBuffer;
                fill(begin(inputBuffer), end(inputBuffer), 0);
                letterCount = 0;

                if (++currentQuestion == 5) {
                    showResult = true;
                    for (int i = 0; i < 5; i++) {
                        if (userAnswers[i] == selectedQuestions[i].second) {
                            correctAnswers++;
                        }
                    }
                }
            }

            int key = GetCharPressed();
            while (key > 0) {
                if (letterCount < 49) {
                    inputBuffer[letterCount++] = (char)key;
                    inputBuffer[letterCount] = '\0';
                }
                key = GetCharPressed();
            }

        }
        else {
            DrawText(("You got " + to_string(correctAnswers) + "/5 correct!").c_str(), 100, 300, 30, BLACK);
        }

        EndDrawing();
    }

    UnloadTexture(background);
    CloseWindow();
}


