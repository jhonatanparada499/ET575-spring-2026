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

int getAreaRectangle(int lenght, int width){
    return lenght*width;
}

void printAreaRectangle(int lenght, int width){
    cout << "The area of rectangle "
         << lenght << " and "
         << width << " is "
         << getAreaRectangle(lenght, width) << endl;
}

// EXERCISE

bool isEven(int theNum){
    return !(theNum % 2);
}

void printIsEven(int theNum){
    cout << "Is " << std::to_string(theNum)
         << " even? "
         << (isEven(theNum)? "True":"False")
         << endl;
}