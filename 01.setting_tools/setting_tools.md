### ***1. Setting tools***

- Here I am going to work with Gcc and Linux.
- Compilation instructions vary depending on which compiler are you working with. However, most of them follow this pattern:

> tool_name [optional flags] source_name.cpp -o output_name
> g++-14 -Wall -std=c++23 setting_tools.cpp -o setting_tools

    1. "-Wall" flag show us all warnings.
    2. "-std=c++23" flag specific what g++ compiler version is being used. 
- Flags are not always mistakes, but potencial issues that could
appear on the way. 

```cpp
#include <print>

int main(){

    std::println("Come Back Alejandra");
    //println: print out a message and adds a newline character
    //All standart librery facilities live inside the standard namespace "std"
    //if a troubleshooting appear is probably because <print>

}
```