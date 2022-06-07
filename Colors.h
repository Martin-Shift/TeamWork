#pragma once
enum ConsoleColor {
	// Standard text colors
	GRAY = 8, BLUE, GREEN,
	TEAL, RED, PINK,
	YELLOW, WHITE,
	// Faded text colors
	BLACK = 0, BLUE_FADE, GREEN_FADE,
	TEAL_FADE, RED_FADE, PINK_FADE,
	YELLOW_FADE, WHITE_FADE,
};
void SetColor(ConsoleColor text, ConsoleColor background);
void SetColor(short text, short background);
void ResetColor();
void SetCursorPosition(short x, short y);
