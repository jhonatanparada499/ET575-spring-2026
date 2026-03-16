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
    int n = tripleNum(3);
    cout << n << '\n';
    cout << tripleNum(5) << '\n';

    cout << "EXAMPLE 4" << '\n';
    cout << "-12 " << checkNum(-12) << '\n';
    cout << "4 " << checkNum(4) << '\n';
    cout << "0 " << checkNum(0) << '\n';

    cout << "EXAMPLE 5" << '\n';
    int num = validatePositive();
    cout << num << '\n';

    cout << "EXAMPLE 6" << '\n';
    int length = validatePositive();
    int width = validatePositive();
    int area_rec = areaRectangle(length, width);
    cout << area_rec << '\n';

    cout << "EXERCISE" << '\n';
    printIsEven(4);

    return 0;
}