/*
Las instrucciones de compilacion varian entre compiladores pero todos
siguen este patron basico:

tool_name [optional flags] source_name.cpp -o output_name

Flags indican potenciales problemas mas que un error. Implementando
la siguiente flag es suficiente "-Wall". La siguiente flag opcional
ayuda a declarar cual version es la que tu quieres usar "-std=c++23"

g++ -Wall -std=c++23 setting_tools.cpp -o setting_tools

*/
#include <print>

int main(){

    std::println("Hello, world!");
    /*
    Todas las funciones estandar viven en el standar namespace (std)
    Sirve para que el compilador sepa donde buscar la funcion, sin
    el std el compilador buscaria una funcion externa llamada printfln

    */

}