#include <iostream>
#include <thread>
#include <string>
#include <chrono>
#include "Colors.h"
#include "Console.h"


void rainbow(std::string line, int start)
{
	for (int i{}; i < 15; i++)
	{
		SetCursorPosition(0, start);
		for (int j{}; j < line.size(); j++)
		{
			std::cout << line[j];
			SetColor(rand() % WHITE + 1, BLACK);
			std::this_thread::sleep_for(std::chrono::milliseconds(40));
		}

	}
	SetColor(WHITE, BLACK);
}

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "First change\n";

    std::string Hello = "Hello World!\n";
    SetColor(14, 9);
    for (int i{}; i < Hello.size(); i++)
    {
        std::cout << Hello[i];
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }//andriy
    ResetColor();
    rainbow(Hello, 2);

	SetCursorPosition(0, 5);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			SetColor(rand()%16, BLACK);
			std::cout << "* ";
			std::this_thread::sleep_for(std::chrono::milliseconds(50));
		}
		std::cout << "\n";
	}
}

