#include<iostream>

// definition - the linker looks for this definition
void Log(const char* message)
{
    // the << is an operator.
    // operators are basically functions
    // this line is the same as
    // std::cout.print("Hello world!").print(std::endl);
    std::cout << message << std::endl;
}
