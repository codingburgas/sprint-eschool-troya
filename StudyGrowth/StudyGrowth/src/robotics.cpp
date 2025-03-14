#include "raylib.h"
#include "..//include/robotics.h"
#include "..//include/registrationForm.h"
#include <iostream>

using namespace std;



void sensorsAutomation() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Sensors and Automation");

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
        DrawText("Sensors and Automation", 100, 110, 50, DARKGREEN);

        // Lesson
        DrawText("1. What are Sensors and Automation?", 120, 180, 28, WHITE);
        DrawText("Sensors detect physical changes (temperature, motion, light) and convert them into signals.", 120, 220, 28, WHITE);
        DrawText("Automation uses sensors, controllers, and actuators to perform tasks without human intervention.", 120, 260, 28, WHITE);

        DrawText("2. Types of Sensors:", 120, 300, 28, WHITE);
        DrawText("- Temperature Sensors (DHT11, LM35, Thermocouples);", 120, 340, 28, WHITE);
        DrawText("- Motion Sensors (PIR, Ultrasonic, Radar);", 120, 380, 28, WHITE);
        DrawText("- Light Sensors (LDR, Photodiodes, IR Sensors);", 120, 420, 28, WHITE);
        DrawText("- Gas and Smoke Sensors (MQ-2, MQ-135, CO2 Sensors);", 120, 460, 28, WHITE);
        DrawText("- Pressure and Force Sensors (BMP180, Load Cells);", 120, 500, 28, WHITE);

        DrawText("3. Key Components of Automation:", 120, 540, 28, WHITE);
        DrawText("- Microcontrollers (Arduino, ESP8266, STM32);", 120, 580, 28, WHITE);
        DrawText("- Single-board Computers (Raspberry Pi, Jetson Nano);", 120, 620, 28, WHITE);
        DrawText("- Actuators (Motors, Relays, Solenoids, Servos);", 120, 660, 28, WHITE);
        DrawText("- Communication Protocols (Wi-Fi, Bluetooth, Zigbee, MQTT, I2C, SPI);", 120, 700, 28, WHITE);

        DrawText("4. Applications of Sensors and Automation:", 120, 740, 28, WHITE);
        DrawText("- Smart Homes (Automatic Lights, Climate Control, Security);", 120, 780, 28, WHITE);
        DrawText("- Industrial Automation (Factory Robotics, Conveyor Systems, Quality Control);", 120, 820, 28, WHITE);
        DrawText("- Healthcare (Heart Rate Monitoring, Automated Drug Delivery);", 120, 860, 28, WHITE);
        DrawText("- Agriculture (Smart Irrigation, Soil Monitoring, Weather Forecasting);", 120, 900, 28, WHITE);

        DrawText("5. Automation Development Workflow:", 120, 940, 28, WHITE);
        DrawText("- Sensor Integration → Data Processing → Decision Making → Actuation;", 120, 980, 28, WHITE);

        DrawText("6. Programming Languages for Automation:", 120, 1020, 28, WHITE);
        DrawText("- C, C++ (Microcontrollers), Python (Raspberry Pi, AI-driven automation);", 120, 1060, 28, WHITE);
        DrawText("- Node.js (IoT applications), Java, Ladder Logic (PLC programming);", 120, 1100, 28, WHITE);





        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}

void iot() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "IoT (Internet of Things)");

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
        DrawText("IoT (Internet of Things)", 100, 110, 50, DARKGREEN);

        // Lesson
        DrawText("1. What is IoT?", 120, 180, 28, WHITE);
        DrawText("Internet of Things (IoT) is a network of interconnected devices that collect and exchange data.", 120, 220, 28, WHITE);
        DrawText("IoT enables smart automation in homes, industries, healthcare, and more.", 120, 260, 28, WHITE);

        DrawText("2. Key Components of IoT:", 120, 300, 28, WHITE);
        DrawText("- Sensors and Actuators (Temperature, Motion, Light, Sound);", 120, 340, 28, WHITE);
        DrawText("- Microcontrollers and Single-Board Computers (Arduino, Raspberry Pi, ESP8266);", 120, 380, 28, WHITE);
        DrawText("- Communication Protocols (Wi-Fi, Bluetooth, Zigbee, LoRa, MQTT);", 120, 420, 28, WHITE);
        DrawText("- Cloud Computing and Data Processing;", 120, 460, 28, WHITE);

        DrawText("3. Applications of IoT:", 120, 500, 28, WHITE);
        DrawText("- Smart Homes (Lighting, Security, Automation);", 120, 540, 28, WHITE);
        DrawText("- Industrial IoT (Predictive Maintenance, Robotics, Monitoring);", 120, 580, 28, WHITE);
        DrawText("- Healthcare (Wearable Devices, Remote Patient Monitoring);", 120, 620, 28, WHITE);
        DrawText("- Smart Cities (Traffic Management, Waste Control, Environmental Monitoring);", 120, 660, 28, WHITE);

        DrawText("4. IoT Development Process:", 120, 700, 28, WHITE);
        DrawText("- Hardware Selection → Data Collection → Cloud Integration → Application Development;", 120, 740, 28, WHITE);

        DrawText("5. IoT Programming Languages:", 120, 780, 28, WHITE);
        DrawText("- Python, C, C++, JavaScript (Node.js for IoT), MicroPython;", 120, 820, 28, WHITE);

        DrawText("6. Popular IoT Development Tools:", 120, 860, 28, WHITE);
        DrawText("- Arduino IDE, Raspberry Pi OS, PlatformIO, Node-RED;", 120, 900, 28, WHITE);
        DrawText("- IoT Cloud Services (AWS IoT, Google Cloud IoT, Microsoft Azure IoT Hub);", 120, 940, 28, WHITE);



        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void machineLearning() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Machine learning and AI");

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
        DrawText("Machine Learning and AI", 100, 110, 50, DARKGREEN);

        // Lesson
        DrawText("1. What is Machine Learning and AI?", 120, 180, 28, WHITE);
        DrawText("Artificial Intelligence (AI) is the field of creating intelligent systems.", 120, 220, 28, WHITE);
        DrawText("Machine Learning (ML) is a subset of AI that enables systems to learn from data.", 120, 260, 28, WHITE);

        DrawText("2. Key Concepts in Machine Learning:", 120, 300, 28, WHITE);
        DrawText("- Supervised Learning, Unsupervised Learning, Reinforcement Learning;", 120, 340, 28, WHITE);
        DrawText("- Training Data, Models, Features, Hyperparameters;", 120, 380, 28, WHITE);

        DrawText("3. Applications of Machine Learning and AI:", 120, 420, 28, WHITE);
        DrawText("- Computer Vision (Image Recognition, Object Detection);", 120, 460, 28, WHITE);
        DrawText("- Natural Language Processing (Speech Recognition, Chatbots);", 120, 500, 28, WHITE);
        DrawText("- Predictive Analytics (Stock Market, Medical Diagnosis);", 120, 540, 28, WHITE);

        DrawText("4. Machine Learning Workflow:", 120, 580, 28, WHITE);
        DrawText("- Data Collection → Preprocessing → Model Training → Evaluation → Deployment;", 120, 620, 28, WHITE);

        DrawText("5. Popular Machine Learning Algorithms:", 120, 660, 28, WHITE);
        DrawText("- Linear Regression, Decision Trees, Neural Networks, Deep Learning;", 120, 700, 28, WHITE);

        DrawText("6. Commonly Used Programming Languages:", 120, 740, 28, WHITE);
        DrawText("- Python (TensorFlow, PyTorch, Scikit-learn);", 120, 780, 28, WHITE);
        DrawText("- R, Julia, Java, C++ (AI frameworks and libraries);", 120, 820, 28, WHITE);

        DrawText("7. AI and ML Development Tools:", 120, 860, 28, WHITE);
        DrawText("- Jupyter Notebook, Google Colab, TensorFlow, PyTorch;", 120, 900, 28, WHITE);
        DrawText("- Cloud Platforms (AWS, Google Cloud AI, Microsoft Azure);", 120, 940, 28, WHITE);





        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();
}
void robotProgramming() {
    const int screenWidth = 1400;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Robot programming");

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
        DrawText("Robot Programming", 100, 110, 50, DARKGREEN);

        // Lesson
        DrawText("1. What is Robot Programming?", 120, 180, 28, WHITE);
        DrawText("Robot programming involves writing code to control robots and embedded systems.", 120, 220, 28, WHITE);
        DrawText("It includes hardware integration, sensor handling, and automation logic.", 120, 260, 28, WHITE);
        DrawText("2. Key Features of Robot Programming:", 120, 300, 28, WHITE);
        DrawText("-Hardware Control; Sensor Integration; Actuator Management; Communication Protocols; AI Integration;", 120, 340, 28, WHITE);
        DrawText("3. Types of Robot Programming:", 120, 380, 28, WHITE);
        DrawText("-Embedded Systems (Microcontrollers, Single-board Computers);", 120, 420, 28, WHITE);
        DrawText("-Autonomous Robots (Self-driving Cars, Drones, AI-powered Machines);", 120, 460, 28, WHITE);
        DrawText("-Industrial Robots (Manufacturing, Assembly Line Automation);", 120, 500, 28, WHITE);
        DrawText("-Humanoid Robots (AI-powered Assistants, Human Interaction);", 120, 540, 28, WHITE);
        DrawText("1. Robot Development Lifecycle (RDLC):", 120, 580, 28, WHITE);
        DrawText("-Planning → Hardware Selection → Programming → Testing → Deployment → Optimization;", 120, 620, 28, WHITE);
        DrawText("2. Key Robot Programming Methodologies:", 120, 660, 28, WHITE);
        DrawText("-State Machine Model; Event-Driven Programming; AI-based Decision Making;", 120, 700, 28, WHITE);
        DrawText("3. Commonly Used Programming Languages:", 120, 740, 28, WHITE);
        DrawText("-C, C++, Python, Java, MATLAB, MicroPython, Scratch;", 120, 780, 28, WHITE);
        DrawText("-Each language is chosen based on hardware and project needs;", 120, 820, 28, WHITE);
        DrawText("4. Robot Development Tools:", 120, 860, 28, WHITE);
        DrawText("-IDEs (Arduino IDE, Thonny, Visual Studio Code, Eclipse);", 120, 900, 28, WHITE);
        DrawText("-Frameworks (ROS, OpenCV, TensorFlow, PyRobot);", 120, 940, 28, WHITE);



        EndDrawing();
    }

    UnloadTexture(boardTexture);
    CloseWindow();

}