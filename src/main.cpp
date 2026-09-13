#include "raylib.h"
#include <iostream>
#include <string>

bool isMenuOpen { false };

int main(int argc, char* argv[]) {

	const int WINDOW_WIDTH_INIT { 800 };
	const int WINDOW_HEIGHT_INIT { 450 };
	int targetFPS { 60 };
	std::string title = "Window";

	InitWindow(WINDOW_WIDTH_INIT, WINDOW_HEIGHT_INIT, title.c_str());
	SetTargetFPS(targetFPS);

	int screenW = GetScreenWidth();
	int screenH = GetScreenHeight();

	while(!WindowShouldClose()) {

		if (IsKeyPressed(KEY_UP))
			isMenuOpen = true;
		if (IsKeyPressed(KEY_DOWN))
			isMenuOpen = false;

		BeginDrawing();

		ClearBackground(SKYBLUE);

		if (isMenuOpen) {
			DrawRectangle(0, 100, screenW, 200, RED);
			DrawText("Test Menu", screenW/2 - 15, screenH/2 - 15, 30, WHITE);
		}

		EndDrawing();
	}

	CloseWindow();

	return 0;
}