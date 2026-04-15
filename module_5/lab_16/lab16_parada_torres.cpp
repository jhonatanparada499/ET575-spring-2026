/*
Jhonatan Stiven Parada Torres
April 13, 2026
*/

#include <iostream>
#include <string>

#include "lab16_function_parada_torres.h"

using std::size;
using std::string;
using std::cout;
using std::endl;

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

    cout << "EXAMPLE 4" << '\n';
    lengthArray();

    cout << "EXAMPLE 5" << '\n';
    loopArray();

    cout << "EXERCISE" << '\n';

    // declare an array with 6 values ==> fixed length array
    int scores[5] = {60, 90, 75, 88, 100};

    int max = 0;
    for(int i = 0; i < size(scores); ++i){
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    cout << "The maximum score is " << max << endl;

    return 0;
}