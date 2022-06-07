#include "Colors.h"
#include "Console.h"
#include <string>
#include <Windows.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
void rainbow(std::string line,int start)
{
	for (int i{}; i < 8; i++)
	{
		SetCursorPosition(0, start);
		for (int j{}; j < line.size(); i++)
		{
			std::cout << line[j];
			SetColor(rand() % WHITE + 1,BLACK);
			std::this_thread::sleep_for(std::chrono::milliseconds(75));
		}
	}
	SetColor(WHITE,BLACK);
}