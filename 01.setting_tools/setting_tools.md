### ***1. Setting tools***

- I am going to work with Gcc (compiler) and Linux (OS).
- Compilation instructions vary depending on which compiler are you working with. However, most of them follow this pattern:

> tool_name [optional flags] source_name.cpp -o output_name
> g++-14 -Wall -std=c++23 setting_tools.cpp -o setting_tools

    1. "-Wall" flag show us all warnings.
    2. "-std=c++23" flag specific what g++ compiler version is being used. 
- Flags are not always mistakes, but potencial issues that could
appear on the way. 

```cpp
//New way to print out messages
#include <print>

int main(){

    std::println("Come Back Alejandra");
    //println: print out a message and adds a newline character
    //All standart librery facilities live inside the standard namespace "std"
    //if a troubleshooting appear is probably because <print>

}
//Old way to print out messages
#include <iostream>

int main(){
    std::out << "Come back Alejandra" ;
}

```
- Regarding println, as any function it has a return type and parentheses, along with a name.
- The main function is special, it wlil return a 0 by default and you can only have one main function in your program.
- std indicates the standart namespace.
- "::" is the scope-resolution operator.
