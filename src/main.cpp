#include <string>
#include "include/raylib-cpp.hpp"

int main() {
	int screenWidth  { 1280 };
	int screenHeight { 720 };
	raylib::Color textColor = raylib::Color::DarkGray();
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
        }
        //----------------------------------------------------------------------------------
    }

	return 0;
}

/*
##### INFORMATION FOR LATER #####

textColor.DrawText("text", [x axis], [y axis], [scale]);

*/