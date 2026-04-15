#ifndef LAB16_FUNCTION
#define LAB16_FUNCTION
/*
Jhonatan Stiven Parada Torres
April 13, 2026
*/

// #include <cstdio>
#include <iostream>
#include <string>

void pointerReference(){
    int num = 12;
    char syn = 'T';
    std::string n = "Peter";

    // best practice is to initialize pointers
    int* pointerInt = &num;
    char* pointerChar = nullptr;
    std::string* pointerString = &n;
    pointerChar = &syn;

    std::cout << "int pointer " << pointerInt << '\n';
    // A pointer to void: a pointer that points to any type
    std::cout << "char pointer " << 
        static_cast<void*>(pointerChar) << '\n';
    std::cout << "std::string pointer " << pointerString << '\n';
}

void printValues(std::string n){
    std::cout << "Values = " << n << '\n';
}

void printAddress(std::string* n){
    std::cout << "Pointer = " << n << '\n';
}

void printReference(std::string& n){
    std::cout << "Pointer value = " << n << '\n';
}

void introArray(){
    int scores[5];
    std::cout << "Pointer value = " << scores[3] << '\n';
}

void lengthArray(){
    std::cout << "Char = " << sizeof(char) << '\n';
    std::cout << "Int" << sizeof(int) << '\n';
}

void loopArray(){
    constexpr int s = 5;
    int arr[s] = {1,2,3,4,5};

    int *start = arr;
    int *end = arr + s;

    for (auto* curr = start; curr != end; ++curr) {
        std::cout << *curr << '\n';
    }
    
}

void fillArray(int arrSize, int arrNumbs[]){
    for (int i = 0; i < arrSize; ++i) {
        std::cin >> arrNumbs[i];
    }
}

#endif