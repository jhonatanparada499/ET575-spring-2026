/*
Jhonatan Stiven Parada Torres
Jan 28, 2026
Lab 3, Numerical Variables
*/

#include<iostream>
using namespace std;

int main(){
    cout << "---------- Example 1: Numerical Data Types ----------"<< "\n";

    int number = 10.9;
    cout << "number = " << number << "\n";

    float n = 7.8;
    cout << "n = " << n << "\n";

    cout << "---------- Example 2: Numberical Operators ----------"<< "\n";

    number = 5;
    cout << "sum = "<< number + n << "\n";

    int number2 = 2;
    // explicit casting from int to float
    cout << "division = "<< 
        number / static_cast<float>(number2) << "\n";

    cout << "---------- Example 3: Assignment Operators ----------"<< "\n";
    // incremental operator
    cout << "original number = "<< number << "\n";
    ++number;
    cout << "updated number = "<< number << "\n";

    // +=, -= Numerical and Assignment Operators
    number = 10;
    cout << "original number = "<< number << "\n";
    number += 5;
    cout << "updated number = "<< number << "\n";

    cout << "---------- Example 4: Comparison Operators ----------"<< "\n";
    number = 3;
    number2 = 8;
    // error because comparison operators have higher precedence than shift operators
    // fix using parenthesis to make expressions inside them be evaluated first
    // cout << number == number2 << endl; 

    bool check = number != number2;
    cout << check << "\n"; 

    cout << "---------- Example 5: Logical Operators ----------"<< "\n";
    number = 3;
    number2 = 5;
    check = number && number2;
    cout << (check + check) << "\n"; 

    auto x = {1};

    return 0;
}