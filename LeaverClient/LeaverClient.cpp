
#include <iostream>
#include <string>
#include "Leaver.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Ваше имя: ";
    std::string s;
    std::getline(std::cin, s);
    Leaver leaver;
    std::cout << leaver.LeaveString(s);
}