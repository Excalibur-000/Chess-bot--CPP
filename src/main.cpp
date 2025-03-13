#include "raylib.h"
#include "resource_dir.h"	

int main () {
	// Initialization
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
	InitWindow(600, 600, "Chess bot project");
	SearchAndSetResourceDir("resources");
	
	// Game loop
	while (!WindowShouldClose())	
	{
		// Drawing
		BeginDrawing();

		ClearBackground(BROWN);
		
		EndDrawing();
	}

	// Destroy the window / clean up
	CloseWindow();
	return 0;
}
