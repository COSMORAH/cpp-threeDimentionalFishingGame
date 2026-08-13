#include <string>
#include "include/raylib-cpp.hpp"

int main() {
	int screenWidth  { 1920 };
	int screenHeight { 1080 };
	raylib::Color textColor = raylib::Color::LightGray();
	raylib::Window window(screenWidth, screenHeight, "Fishing Game");
	SetTargetFPS(60);

	// Main game loop
    while (!window.ShouldClose()) {   // Detect window close button or ESC key
        // Update
        //----------------------------------------------------------------------------------
        // Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        while (window.Drawing()) {
            window.ClearBackground(RAYWHITE);
            textColor.DrawText("Congrats! You created your first window!", 190, 200, 20);
        }
        //----------------------------------------------------------------------------------
    }

	return 0;
}