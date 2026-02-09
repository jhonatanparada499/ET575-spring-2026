/*
Jhonatan Stiven Parada Torres
Feb 9, 2026
Lab 7 exercise, Nested conditional statements
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "EXAMPLE 1" << '\n';
  int number = 0;

  // This code was modified after learning concepts from class.
  if (number) {
    if (number > 0) {
      cout << number << " is positive and ";
    } else{
      cout << number << " is negative and ";
    }
      cout << (number % 2 == 0 ? "even" : "odd") << '\n';
  }
  else {
    cout << number << " is zero" << '\n';
  }
  
  cout << "EXAMPLE 2" << '\n';
  int num1, num2, num3;

  cout << "Enter three number: ";
  cin >> num1 >> num2 >> num3;

  if (num1>num2 && num1>num3) {
    cout << num1 << " is the highest number" << '\n';
    cout << num1 << '\t';
    if (num2 > num3) {
      cout << num2 << '\t' << num3 << '\n';
    }else{
      cout << num3 << '\t' << num2 << '\n';
    }
  }
  else if(num2>num1 && num2>num3){
    cout << num2 << " is the highest number" << '\n';
    cout << num2 << '\t';
    if (num1 > num2) {
      cout << num1 << '\t' << num2 << '\n';
    }else{
      cout << num2 << '\t' << num1 << '\n';
    }
  } else{
    cout << num3 << " is the highest number" << '\n';
    cout << num3 << '\t';
    if (num1 > num2) {
      cout << num1 << '\t' << num2 << '\n';
    }else{
      cout << num2 << '\t' << num1 << '\n';
    }
  }

  cout << " EXAMPLE 3" << '\n';

  int x = 5;
  cout << x << " is " << (x % 2 == 0 ? "even" : "odd") << '\n';

  cout << "EXERCISE" << '\n';
  return 0;
}
