#include "raylib.h"

int main(void) {
    
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 200;
    const int screenHeight = 200;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - red window");
    
    SetTraceLogLevel(LOG_ERROR);

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RED);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
