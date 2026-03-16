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

// EXERCISE
void printIsEven(int theNum){
    cout << "Is " << std::to_string(theNum)
         << " even? "
         << (isEven(theNum)? "True":"False")
         << endl;
}