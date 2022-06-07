#pragma once
enum Keys {
	ESC = 27, ARROW_START = 224, ENTER = 13,
	UP_ARROW = 72, DOWN_ARROW = 80, LEFT_ARROW = 75, RIGHT_ARROW = 77, W = 87, S = 83,SPACE = 32
};
int getKey();
void SetCursorPosition(short x , short y);
bool menu(int min, int max, int& y, int& prevY);