#include <iostream>
#include <thread>
#include <string>
#include <chrono>
int main()
{
    std::string Hello = "Hello World!\n";
    for (int i{}; i < Hello.size(); i++)
    {
        std::cout << Hello[i];
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}


