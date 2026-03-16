/*
Jhonatan Stiven Parada Torres
March 16, 2026
*/
#include "lab13_function_paradatorres.cpp"

#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "EXAMPLE 1" << '\n';
    printHello();

    cout << "EXAMPLE 2" << '\n';
    greeting("Peter");
    greeting("Annie");

    cout << "EXAMPLE 3" << '\n';
    tripleNum(3);

    cout << "EXERCISE" << '\n';
    printIsEven(4);

    return 0;
}