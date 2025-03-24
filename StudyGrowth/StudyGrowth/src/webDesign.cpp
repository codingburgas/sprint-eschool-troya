#include "raylib.h"
#include "..//include/webDesign.h"
#include "..//include/hwWebDesign.h"
#include "..//include/mainMenu.h"
#include <iostream>

using namespace std;



void graphicDesign() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Graphic design");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);


    SetTargetFPS(60);

    Rectangle rect = { 1035, 800, 220, 80 };
    Rectangle rect2 = { 616, 363, 115, 40 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Vector2 mousePos = GetMousePosition();
        Vector2 mousePos2 = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            graphicDesignHomework();
        }
        else if (CheckCollisionPointRec(mousePos2, rect2) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            mainMenu();
        }


        // Draw background
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title
        DrawText("Graphic Design", 100, 110, 50, DARKGREEN);
        DrawText("1. What is Graphic Design?", 120, 180, 28, WHITE);
        DrawText("Graphic design involves creating visual content to communicate", 120, 220, 28, WHITE);
        DrawText("messages, ideas, and concepts. It includes designing layouts,", 120, 260, 28, WHITE);
        DrawText("logos, posters, websites, and much more.", 120, 300, 28, WHITE);
        DrawText("2. Key Graphic Design Tools:", 120, 340, 28, WHITE);
        DrawText("- Adobe Photoshop (Raster-based editing);", 120, 380, 28, WHITE);
        DrawText("- Adobe Illustrator (Vector-based design);", 120, 420, 28, WHITE);
        DrawText("- Figma (Collaborative UI/UX design);", 120, 460, 28, WHITE);
        DrawText("3. Basic Design Principles:", 120, 500, 28, WHITE);
        DrawText("- Contrast (Making elements stand out);", 120, 540, 28, WHITE);
        DrawText("- Alignment (Organizing design elements);", 120, 580, 28, WHITE);
        DrawText("- Repetition (Creating visual harmony);", 120, 620, 28, WHITE);
        DrawText("- Proximity (Grouping related items);", 120, 660, 28, WHITE);
        DrawText("- White Space (Creating balance and readability);", 120, 700, 28, WHITE);
        DrawText("4. Graphic Design Process:", 120, 740, 28, WHITE);
        DrawText("- Research and Inspiration;", 120, 780, 28, WHITE);
        DrawText("- Concept Development;", 120, 820, 28, WHITE);
        DrawText("- Drafting and Prototyping;", 120, 860, 28, WHITE);
        DrawText("- Feedback and Revisions;", 120, 900, 28, WHITE);


        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}

void webDesign() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Web Design and Front-End Development (HTML, CSS, JavaScript)");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    Rectangle rect = { 1035, 800, 220, 80 };
    Rectangle rect2 = { 616, 363, 115, 40 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Vector2 mousePos = GetMousePosition();
        Vector2 mousePos2 = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            webDesignHomework();
        }
        else if (CheckCollisionPointRec(mousePos2, rect2) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            mainMenu();
        }

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        //Title
        DrawText("Web Design and Front-End Development", 100, 110, 50, DARKGREEN);
        DrawText("1. What is Web Design and Front-End Development?", 120, 180, 28, WHITE);
        DrawText("Web design and front-end development involve creating", 120, 220, 28, WHITE);
        DrawText("the visual elements and functionality of websites and web", 120, 260, 28, WHITE);
        DrawText("applications. This includes designing layouts, user interfaces,", 120, 300, 28, WHITE);
        DrawText("and implementing interactivity using HTML, CSS, and JavaScript.", 120, 340, 28, WHITE);
        DrawText("2. Key Front-End Technologies:", 120, 380, 28, WHITE);
        DrawText("- HTML (Structure of web pages);", 120, 420, 28, WHITE);
        DrawText("- CSS (Styling and layout design);", 120, 460, 28, WHITE);
        DrawText("- JavaScript (Interactivity and dynamic behavior);", 120, 500, 28, WHITE);
        DrawText("3. HTML Basics:", 120, 540, 28, WHITE);
        DrawText("- Structure of web pages (head, body, footer);", 120, 580, 28, WHITE);
        DrawText("- Elements (headings, paragraphs, links, images);", 120, 620, 28, WHITE);
        DrawText("- Forms (input fields, buttons, radio buttons);", 120, 660, 28, WHITE);
        DrawText("- Semantic HTML (using appropriate tags for content);", 120, 700, 28, WHITE);
        DrawText("4. CSS Basics:", 120, 740, 28, WHITE);
        DrawText("- CSS Selectors (targeting elements to style);", 120, 780, 28, WHITE);
        DrawText("- Box Model (padding, margin, borders);", 120, 820, 28, WHITE);
        DrawText("- Flexbox (Responsive layouts and alignment);", 120, 860, 28, WHITE);
        DrawText("- Grid Layout (Advanced two-dimensional layouts);", 120, 900, 28, WHITE);


        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void animation() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "3D Modeling and Animation");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);

    SetTargetFPS(60);

    Rectangle rect = { 1035, 800, 220, 80 };
    Rectangle rect2 = { 616, 363, 115, 40 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Vector2 mousePos = GetMousePosition();
        Vector2 mousePos2 = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            animationHomework();
        }
        else if (CheckCollisionPointRec(mousePos2, rect2) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            mainMenu();
        }

        // Draw background stretched to fill the screen
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);
        //Title
        DrawText("3D Modeling and Animation", 100, 110, 50, DARKGREEN);
        DrawText("1. What is 3D Modeling and Animation?", 120, 180, 28, WHITE);
        DrawText("3D modeling and animation involve creating and", 120, 220, 28, WHITE);
        DrawText("manipulating 3D objects, environments, and characters.", 120, 260, 28, WHITE);
        DrawText("Animation is the process of making these objects move,", 120, 300, 28, WHITE);
        DrawText("simulating real-world physics, and telling a story.", 120, 340, 28, WHITE);
        DrawText("2. Key 3D Software Tools:", 120, 380, 28, WHITE);
        DrawText("- Blender (Open-source and powerful for modeling and animation);", 120, 420, 28, WHITE);
        DrawText("- Autodesk Maya (Industry-standard for animation and modeling);", 120, 460, 28, WHITE);
        DrawText("- 3ds Max (Popular for architectural visualization);", 120, 500, 28, WHITE);
        DrawText("- Cinema 4D (Used for motion graphics and animation);", 120, 540, 28, WHITE);
        DrawText("3. 3D Modeling Techniques:", 120, 580, 28, WHITE);
        DrawText("- Polygonal Modeling (Creating objects using vertices, edges, and faces);", 120, 620, 28, WHITE);
        DrawText("- NURBS Modeling (Using curves to create smooth surfaces);", 120, 660, 28, WHITE);
        DrawText("- Sculpting (Detailing models with brushes and dynamic topology);", 120, 700, 28, WHITE);
        DrawText("- Procedural Modeling (Using algorithms to create models);", 120, 740, 28, WHITE);
        DrawText("4. Texturing and Shading:", 120, 780, 28, WHITE);
        DrawText("- UV Mapping (Flattening 3D models into 2D textures);", 120, 820, 28, WHITE);
        DrawText("- Texture Painting (Creating custom textures directly on models);", 120, 860, 28, WHITE);
        DrawText("- Shaders (Defining how materials interact with light);", 120, 900, 28, WHITE);




        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
