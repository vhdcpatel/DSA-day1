// clear_console.cpp
#include "clear_console.h"
#include <iostream>

void clearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
