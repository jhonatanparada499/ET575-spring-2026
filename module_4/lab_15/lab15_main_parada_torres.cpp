/*
Jhonatan Stiven Parada Torres
March 23, 2026
*/

#include <iostream>
#include "lab15_function_parada_torres.cpp"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Example 1" << '\n';
    cout << randomNumber(5, 20) << '\n';

    cout << "Example 2" << '\n';
    cout << randomNumber(0, 10) << '\n';

    cout << "Example 3" << '\n';
    cout << randomNumber(5, 12) << '\n';

    cout << "Example 4" << '\n';
    int roll1 = rollDice(), roll2 = rollDice();
    bool result = matchDices(roll1, roll2);
    printDices(roll1, roll2, result);

    return 0;
}