/*
Jhonatan Stiven Parada Torres
Feb 4, 2026
Lab6 exercise, branching, flow control
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    cout << " EXAMPLE 1" << '\n';
    bool isPositive;
    int number;

    cout << "Enter number";
    cin >> number;

    isPositive = number > 0;

    cout << "Positive? " << isPositive << '\n';

    cout << " EXAMPLE 2" << '\n';
    int num1 = 3, num2 = 5;

    if (num1 == num2) {
        cout << "Nums are equal" << '\n';
    }
    
    cout << " EXAMPLE 3" << '\n';
    if (num1 > num2) {
        cout << "num1 > num2" << '\n';
    } else{
        cout << "num1 <= num2" << '\n';
    }

    cout << " EXAMPLE 4" << '\n';
    if (num1 == num2) {
        cout << "num1 equal num2" << '\n';
    } else if (num1 > num2){
        cout << "num1 > num2" << '\n';
    } else{
        cout << "num1 <= num2" << '\n';
    }

    cout << " EXAMPLE 5" << '\n';
    int wavelength = 0;
    string color;

    cout << "Enter wavelength ";
    cin >> wavelength;

    return EXIT_SUCCESS;
}
