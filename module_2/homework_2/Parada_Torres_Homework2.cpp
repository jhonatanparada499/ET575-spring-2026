/* Homework 2: Branching

Jhonatan S Parada Torres

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int age = 0;
  cout << "PROGRAM 1" << '\n';
  cout << "Enter your age: ";

  if (!(cin >> age)) {
    cout << "invalid input" << endl;
    return -1;
  }

  if (age < 0 || age > 120) {
    cout << "Invalid age. Please enter a valid age." << '\n';
  } else if (age < 13) {
    cout << "Not eligible for any activities." << '\n';
  } else if (age < 18) {
    cout << "Eligible for youth activities." << '\n';
  } else if (age < 65) {
    cout << "Eligible for adult activities." << '\n';
  } else {
    cout << "Eligible for senior activities." << '\n';
  }

  //
  cout << "PROGRAM 2" << '\n';
  int num1, num2, sum;

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  sum = num1 + num2;

  if (sum < 0) {
    cout << "False alarm! The sum is " << sum << '\n';
  } else if (sum >= 1 && sum <= 100) {
    if (sum % 5 == 0) {
      cout << sum << " is a pentagon" << '\n';
    } else if (sum % 2 != 0) {
      cout << sum << " is an odd guess" << '\n';
    } else {
      cout << "The sum is " << sum << '\n';
    }
  } else if (sum >= 101 && sum <= 200) {
    cout << "The new lucky number is " << sum << '\n';
  } else if (sum >= 201 && sum <= 999) {
    cout << " " << sum << " is a dreaming number" << '\n';
  } else if (sum >= 1000) {
    if (sum >= 2000) {
      cout << sum << " approaches to the infinite and beyond!" << '\n';
    } else if (sum % 2 == 0) {
      cout << sum << " approaches to the infinite evenly!" << '\n';
    } else {
      cout << "The sum is " << sum << '\n';
    }
  }

  //
  cout << "PROGRAM 3" << '\n';
  int choice;
  double inputTemp, result;

  cout << "Menu" << '\n';
  cout << "Celsius to Fahrenheit: 1" << '\n';
  cout << "Fahrenheit to Celsius: 2" << '\n';
  cout << "Kelvin to Celsius:     3" << '\n';
  cout << "Kelvin to Fahrenheit:  4" << '\n';
  cout << "Exit:                  5" << '\n';
  cout << "Your choice: ";
  cin >> choice;

  switch (choice) {
  case 1:
    cout << "Enter the temperature to be converted: ";
    cin >> inputTemp;
    result = inputTemp * (9.0 / 5.0) + 32;
    cout << inputTemp << " Celsius is equal to " << result << " Fahrenheit"
         << '\n';
    break;

  case 2:
    cout << "Enter the temperature to be converted: ";
    cin >> inputTemp;
    result = (inputTemp - 32) * (5.0 / 9.0);
    cout << inputTemp << " Fahrenheit is equal to " << result << " Celsius"
         << '\n';
    break;

  case 3:
    cout << "Enter the temperature to be converted: ";
    cin >> inputTemp;
    result = inputTemp - 273.15;
    cout << inputTemp << " Kelvin is equal to " << result << " Celsius" << '\n';
    break;

  case 4:
    cout << "Enter the temperature to be converted: ";
    cin >> inputTemp;
    result = (inputTemp - 273.15) * (9.0 / 5.0) + 32;
    cout << inputTemp << " Kelvin is equal to " << result << " Fahrenheit"
         << '\n';
    break;

  case 5:
    cout << "Bye." << '\n';
    break;

  default:
    cout << "Invalid option" << '\n';
    break;
  }

  cout << endl;
  return 0;
}
