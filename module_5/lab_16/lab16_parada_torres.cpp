/*
Jhonatan Stiven Parada Torres
April 13, 2026
*/

#include <iostream>
#include <string>
#include "lab16_function_parada_torres.cpp"

using namespace std;

int main() {
    cout << "EXAMPLE 1" << '\n';
    pointerReference();

    cout << "EXAMPLE 2" << '\n';
    string something = "Hello world";
    printValues(something);
    printAddress(&something);
    printReference(something);
    
    cout << "EXAMPLE 3" << '\n';
    introArray();

    cout << "EXERCISE" << '\n';

    // declare an array with 6 values ==> fixed length array
    int scores[5];

    // assign value to each item in array 'scores'
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;

    int max = 0;
    for(int i = 0; i < size(scores); ++i){
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    cout << "The maximum score is " << max << endl;

    return 0;
}