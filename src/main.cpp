#include <string>
#include "include/raylib-cpp.hpp"

int main() {
	int screenWidth  { 1280 };
	int screenHeight { 720 };
	raylib::Color textColor = raylib::Color::DarkGray();
	raylib::Window window(screenWidth, screenHeight, "Fishing Game");
	SetTargetFPS(60);
    // DisableCursor();

    // Define the camera to look into our 3d world
    Camera3D camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };  // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera mode type

    Vector3 worldCenter = { 0.0f, 0.0f, 0.0f };

    // Main game loop
    while (!window.ShouldClose()) {   // Detect window close button or ESC key
        // update variables
        UpdateCamera(&camera, CAMERA_FREE);

        // draw everything
        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode3D(camera);

                DrawCube(worldCenter, 2.0f, 2.0f, 2.0f, RED);
                DrawCubeWires(worldCenter, 2.0f, 2.0f, 2.0f, MAROON);

                DrawGrid(10, 1.0f);

            EndMode3D();
        
        EndDrawing();
    }

	return 0;
}

/*
##### INFORMATION FOR LATER #####

*/
