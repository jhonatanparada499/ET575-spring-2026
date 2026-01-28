/*
Jhonatan Stiven Parada Torres
Jan 28, 2026
Lab 3, Numerical Variables
*/

#include<iostream>
using namespace std;

int main(){
    cout << "---------- Example 1 ----------"<< endl;

    int number = 10.9;
    cout << "number = " << number << endl;

    float n = 7.8;
    cout << "n = " << n << endl;

    cout << "---------- Example 2: Numberical Operators ----------"<< endl;

    number = 5;
    cout << "sum = "<< number + n << endl;

    int number2 = 2;
    // explicit casting from int to float
    cout << "division = "<< 
        number / static_cast<float>(number2) << endl;

    return 0;
}