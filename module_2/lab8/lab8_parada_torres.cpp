/*
Jhonatan Stiven Parada Torres
Feb 11, 2026
Lab 8 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "------ EXAMPLE 1 ------" << '\n';
  int day = 0;
  string dayoff;
  cout << "Select a dayoff: " << '\n';
  cout << "1 for Monday" << '\n';
  cout << "2 for Tuesday" << '\n';
  cout << "3 for Wendnesday" << '\n';
  cout << "4 for Thursday" << '\n';
  cout << "5 for Friday" << '\n';
  cin >> day;

  switch (day)
  {
  case 1:
    dayoff = "Moday";
    break;
  case 2:
    dayoff = "Tuesday";
    break;
  case 3:
    dayoff = "Wendnesday";
    break;
  case 4:
    dayoff = "Thursday";
    break;
  case 5:
    dayoff = "Friday";
    break;
  default:
    cout << "Invalid option" << endl;
    return -1;
  }

  cout << "------ EXAMPLE 2 ------" << '\n';
  char gender;
  cout << "Select a gender: " << '\n';
  cout << "(f)emale, (m)ale, (o)ther: ";
  cin >> gender;

  switch (gender)
  {
  case 'f': case 'F':
    cout << "Gender = Female" << '\n';
    break;
  case 'm': case 'M':
    cout << "Gender = Male" << '\n';
    break;
  case 'o': case 'O':
    cout << "Gender = Other" << '\n';
    break;
  default:
    cout << "Gender = Undefined" << '\n';
    break;
  }

  cout << "------ EXERCISE ------" << '\n';
  int first_number = 0, second_number = 0, result = 0;
  char operation;
  cout << "Enter the first number: ";
  cin >> first_number;
  cout << "Enter the second number: ";
  cin >> second_number;

  cout << "Choose an operation (+, -, *, /, %, q to quit): ";
  cin >> operation;

  switch (operation)
  {
  case '+':
    result = first_number + second_number;
    break;
  case '-':
    result = first_number - second_number;
    break;
  case '*':
    result = first_number * second_number;
    break;
  case '/':
    result = first_number / second_number;
    break;
  case '%':
    result = first_number % second_number;
    break;
  case 'q':
    return 0;

  default:
    cout << "Invalid operation character" << endl;
    return -1;
  }

  cout << "Result: " << first_number << " " 
    << operation << " " << second_number 
    << " = " << result << endl;

  return 0;
}