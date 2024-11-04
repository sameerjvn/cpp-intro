// preprocessor statement - compiler preprocesses this first
// compiler finds this file "iostream" and pastes everything from it here
// it has the std object(?)
// header files do not get compiled, they only get included, and then the cpp file gets compiled
#include<iostream>

// declaration - we declare this simply for the compiler
// the compiler simply trusts that the definition exists somewhere
// the linker is the thing that looks for the definition
void Log(const char* message);

// entrypoint for the application
// return type is int but we don't return anything. only for main it returns 0 by default
int main()
{
    Log("Hello world!");

    // the .get() function waits until an input is entered
    std::cin.get();
}