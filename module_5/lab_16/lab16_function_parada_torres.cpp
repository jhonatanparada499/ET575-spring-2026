/*
Jhonatan Stiven Parada Torres
April 13, 2026
*/

#include <cstdio>
#include <iostream>
#include <string>

// using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void pointerReference(){
    int num = 12;
    char syn = 'T';
    string n = "Peter";

    // best practice is to initialize pointers
    int* pointerInt = &num;
    char* pointerChar = nullptr;
    string* pointerString = &n;
    pointerChar = &syn;

    cout << "int pointer " << pointerInt << '\n';
    // A pointer to void: a pointer that points to any type
    cout << "char pointer " << 
        static_cast<void*>(pointerChar) << '\n';
    cout << "string pointer " << pointerString << '\n';
}

void printValues(string n){
    cout << "Values = " << n << '\n';
}

void printAddress(string* n){
    cout << "Pointer = " << n << '\n';
}

void printReference(string& n){
    cout << "Pointer value = " << n << '\n';
}

void introArray(){
    int scores[5];
    cout << "Pointer value = " << scores[3] << '\n';
}
