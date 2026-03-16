/*
Jhonatan Stiven Parada Torres
March 16, 2026
*/

#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

void printHello() {
    cout << "Hello World" << '\n';
}

void greeting(std::string username){
    cout << "Welcome to function " 
         << username
         << '\n';
}

int tripleNum(int theNum){
    return theNum*3;
}

bool isEven(int theNum){
    return !(theNum % 2);
}

std::string checkNum(int theNum){
    if (theNum < 0){ return "negative"; }
    return theNum? "positive":"zero";
}

int validatePositive(){
    int theNum = 0;
    cout << "Enter num: ";
    cin >> theNum;

    while (theNum<=0)
    {
        cout << "Must be positive. Enter num: ";
        cin >> theNum;
    }

    return theNum;
}

int areaRectangle(int lenght, int width){
    return lenght*width;
}

// EXERCISE
void printIsEven(int theNum){
    cout << "Is " << std::to_string(theNum)
         << " even? "
         << (isEven(theNum)? "True":"False")
         << endl;
}