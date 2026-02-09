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

  // checks if number is either positive or negative.
  // if false, number is zero
  if (number) {
    if (number > 0) {
      cout << number << " is positive and ";
      if (number%2==0) {
        cout << "even" << '\n';
      }else{
        cout << "odd" << '\n';
      }
    } else{
      cout << number << " is negative and ";
      if (number%2==0) {
        cout << "even" << '\n';
      }else{
        cout << "odd" << '\n';
      }
    }
  }
  else {
    cout << number << " is zero" << '\n';
  }
  
  cout << "EXAMPLE 2" << '\n';
  int num1, num2, num3;

  return 0;
}
