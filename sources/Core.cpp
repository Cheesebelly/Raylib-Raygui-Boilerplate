#include "Core.h"
Core::Core(/* args */)
{
}

Core::~Core()
{
}

void Core::Run(){
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "RaylibProject");
    SetTargetFPS(0);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(0, 0);
        EndDrawing(); 
    }    
    CloseWindow();
}

