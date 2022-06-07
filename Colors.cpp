#include "Colors.h"
#include <Windows.h>
void SetColor(ConsoleColor text, ConsoleColor background = BLACK)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (short)text | ((short)background << 4));
}
void SetColor(short text, short background = BLACK)
{
	SetColor((ConsoleColor)text, (ConsoleColor)background);
}
void ResetColor()
{
	SetColor(WHITE, BLACK);
}