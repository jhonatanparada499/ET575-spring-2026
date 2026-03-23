/*
Jhonatan Stiven Parada Torres
March 23, 2026
*/

#include <cmath>
#include <cstdio>
#include <iostream>
#include <ctime>

// using std::cerr;
using std::cin;
using std::cout;
using std::endl;

// range [min, max]
int randomNumber(int min, int max){
    srand(std::time(0));
    return  min + ((std::rand() % max + 1) - min);
}

int rollDice(){
    srand(std::time(0));
    return 1 + rand() % 6;
}

bool matchDices(int roll1, int roll2){
    return roll1 == roll2;
}

void printDices(int roll1, int roll2, bool result){
    cout << roll1 << " and " << roll2 << " are the same? "
         << (matchDices(roll1, roll2)? "Yes": "No") << endl;
}