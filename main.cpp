// preprocessor statement - compiler preprocesses this first
// compiler finds this file "iostream" and pastes everything from it here
// it has the std object(?)
// header files do not get compiled, they only get included, and then the cpp file gets compiled
#include<iostream>

// entrypoint for the application
// return type is int but we don't return anything. only for main it returns 0 by default
int main()
{
    // the << is an operator.
    // operators are basically functions
    // this line is the same as
    // std::cout.print("Hello world!").print(std::endl);
    std::cout << "Hello world!" << std::endl;

    // the .get() function waits until an input is entered
    std::cin.get();
}