#include "raylib.h"
#include "..//include/computerNetworks.h"
#include "..//include/mainMenu.h"
#include "..//include/hwComputerNetworks.h"
#include <iostream>

using namespace std;



void computerNetowkrs() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Administration of computer networks");

    // Load and scale the background image
    Image boardImage = LoadImage("assets/board.png");
    Texture2D boardTexture = LoadTextureFromImage(boardImage);
    UnloadImage(boardImage);


    SetTargetFPS(60);

    Rectangle rect = { 1035, 800, 220, 80 };
    Rectangle rect2 = { 614, 364, 100, 40 };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Vector2 mousePos = GetMousePosition();
        Vector2 mousePos2 = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, rect) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            computerNetworkHomework();
        }
        if (CheckCollisionPointRec(mousePos2, rect2) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            mainMenu();
        }

        // Draw background
        DrawTexturePro(boardTexture,
            { 0, 0, (float)boardTexture.width, (float)boardTexture.height },
            { 0, 0, (float)screenWidth, (float)screenHeight },
            { 0, 0 }, 0, WHITE);

        // Title
        DrawText("Administration of Computer Networks", 100, 110, 50, DARKGREEN);

        // Lesson
        DrawText("1. What is Computer Network Administration?", 120, 180, 28, WHITE);
        DrawText("Network administration involves managing, monitoring, and maintaining computer networks.", 120, 220, 28, WHITE);
        DrawText("It includes configuring hardware, securing connections, and troubleshooting issues.", 120, 260, 28, WHITE);

        DrawText("2. Key Networking Devices:", 120, 300, 28, WHITE);
        DrawText("- Routers (Cisco, MikroTik, TP-Link);", 120, 340, 28, WHITE);
        DrawText("- Switches (Managed & Unmanaged);", 120, 380, 28, WHITE);
        DrawText("- Firewalls (Cisco ASA, pfSense, MikroTik);", 120, 420, 28, WHITE);
        DrawText("- Wireless Access Points (Ubiquiti, Aruba, Cisco);", 120, 460, 28, WHITE);
        DrawText("- Servers (DNS, DHCP, Web, File, Authentication);", 120, 500, 28, WHITE);

        DrawText("3. Network Protocols:", 120, 540, 28, WHITE);
        DrawText("- TCP/IP (Fundamental for Internet Communication);", 120, 580, 28, WHITE);
        DrawText("- DHCP (Dynamic Host Configuration Protocol);", 120, 620, 28, WHITE);
        DrawText("- DNS (Domain Name System);", 120, 660, 28, WHITE);
        DrawText("- VLAN (Virtual Local Area Network);", 120, 700, 28, WHITE);

        DrawText("4. Network Security Practices:", 120, 740, 28, WHITE);
        DrawText("- Firewall Configuration and Access Control;", 120, 780, 28, WHITE);
        DrawText("- VPN (Virtual Private Network) Implementation;", 120, 820, 28, WHITE);
        DrawText("- Intrusion Detection and Prevention Systems (IDS/IPS);", 120, 860, 28, WHITE);






        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}

void operatingSystems() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Operating systems");

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
            operatingSystemsHomework();
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
        DrawText("Working with Operating Systems", 100, 110, 50, DARKGREEN);
        DrawText("1. What is Operating System Administration?", 120, 180, 28, WHITE);
        DrawText("Operating system administration involves managing,", 120, 220, 28, WHITE);
        DrawText("configuring, and maintaining operating systems.", 120, 260, 28, WHITE);
        DrawText("It includes managing users, setting permissions, and", 120, 300, 28, WHITE);
        DrawText("ensuring system security and performance.", 120, 340, 28, WHITE);
        DrawText("2. Key Operating Systems:", 120, 380, 28, WHITE);
        DrawText("- Windows Server (Active Directory, Group Policies);", 120, 420, 28, WHITE);
        DrawText("- Linux (Ubuntu, CentOS, Red Hat);", 120, 460, 28, WHITE);
        DrawText("- MacOS (Server Administration and Management);", 120, 500, 28, WHITE);
        DrawText("3. System Administration Tools:", 120, 540, 28, WHITE);
        DrawText("- Windows PowerShell (Automation and Scripting);", 120, 580, 28, WHITE);
        DrawText("- Linux Shell (Bash, Zsh);", 120, 620, 28, WHITE);
        DrawText("- Remote Management Tools (SSH, RDP, VNC);", 120, 660, 28, WHITE);
        DrawText("- Configuration Management Tools (Ansible, Puppet, Chef);", 120, 700, 28, WHITE);
        DrawText("4. System Security Practices:", 120, 740, 28, WHITE);
        DrawText("- User Management and Access Control;", 120, 780, 28, WHITE);
        DrawText("- Firewall and Security Policies;", 120, 820, 28, WHITE);
        DrawText("- Software and System Updates;", 120, 860, 28, WHITE);



        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void cloudTechnologies() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Cloud technologies");

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
            cloudComputingHomework();
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
        DrawText("Management of Cloud Technologies", 100, 110, 50, DARKGREEN);
        DrawText("1. What is Cloud Technology Management?", 120, 180, 28, WHITE);
        DrawText("Cloud technology management involves provisioning,", 120, 220, 28, WHITE);
        DrawText("monitoring, and maintaining cloud-based services.", 120, 260, 28, WHITE);
        DrawText("It includes managing infrastructure, services, and security,", 120, 300, 28, WHITE);
        DrawText("as well as ensuring scalability and availability.", 120, 340, 28, WHITE);
        DrawText("2. Key Cloud Platforms:", 120, 380, 28, WHITE);
        DrawText("- Amazon Web Services (AWS);", 120, 420, 28, WHITE);
        DrawText("- Google Cloud Platform (GCP);", 120, 460, 28, WHITE);
        DrawText("- Microsoft Azure;", 120, 500, 28, WHITE);
        DrawText("- IBM Cloud;", 120, 540, 28, WHITE);
        DrawText("3. Cloud Services:", 120, 580, 28, WHITE);
        DrawText("- Compute (EC2, Google Compute Engine);", 120, 620, 28, WHITE);
        DrawText("- Storage (S3, Google Cloud Storage);", 120, 660, 28, WHITE);
        DrawText("- Databases (RDS, Cloud SQL);", 120, 700, 28, WHITE);
        DrawText("- Networking (VPC, Cloud Load Balancing);", 120, 740, 28, WHITE);
        DrawText("- Serverless Computing (Lambda, Cloud Functions);", 120, 780, 28, WHITE);
        DrawText("4. Cloud Security Practices:", 120, 820, 28, WHITE);
        DrawText("- Identity and Access Management (IAM);", 120, 860, 28, WHITE);
        DrawText("- Encryption and Data Protection;", 120, 900, 28, WHITE);
        DrawText("- Firewalls and Security Groups;", 120, 940, 28, WHITE);




        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
