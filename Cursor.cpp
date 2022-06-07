#include <Windows.h>
#include <conio.h>
#include "Console.h"
#include "Colors.h"
void SetCursorPosition(short x, short y) //#include <Windows.h>
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
const int NO_KEY = -1;
int getKey() {
	int key = NO_KEY;
	if (_kbhit()) {
		key = _getch();
	}
	return key;
}