#include "raylib.h"
#include <iostream>
#include <string>

bool isMenuOpen { false };

int main(int argc, char* argv[]) {

	int windowHeight { 800 };
	int windowWidth { 450 };
	int targetFPS { 60 };
	std::string title = "Window";

	InitWindow(windowHeight, windowWidth, title.c_str());
	SetTargetFPS(targetFPS);

	while(!WindowShouldClose()) {

		if (IsKeyPressed(KEY_UP))
			isMenuOpen = true;
		if (IsKeyPressed(KEY_DOWN))
			isMenuOpen = false;

		BeginDrawing();

		ClearBackground(SKYBLUE);

		if (isMenuOpen)
			DrawRectangle(0, 0, windowHeight, windowWidth, BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}