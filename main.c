#include "raylib.h"

int main() {
    InitWindow(800, 450, "Raylib template");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            DrawText("Raylib project template!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}