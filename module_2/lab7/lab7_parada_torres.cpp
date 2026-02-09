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

  cout << "------ EXERCISE 1 ------" << '\n';
  int car_budget = 0;
  cout << "Enter car budget: ";
  cin >> car_budget;
  
  if (car_budget < 0) {
    cout << "Invalid budget!" << '\n';
  }else if(car_budget < 10000){
    cout << "Keep saving!" << '\n';
  } else{
    cout << "With $" << car_budget << ", you can afford a(n) ";
    if(car_budget < 30000){
      cout << "Economy Car: ";
      cout << (car_budget < 20000 ? "Compact Car":"Mid-sized Car") << '\n';
    } else if(car_budget < 70000){
      cout << "Standard Car: ";
      cout << (car_budget < 50000 ? "Sedan":"Luxury Sedan") << '\n';
    } else if(car_budget < 150000){
      cout << "Performance-oriented Car: ";
      cout << (car_budget < 100000 ? "Sports Car":"Super Car") << '\n';
    } else{
      cout << "High-end luxury Cars: Maserati or Rolls-Royce?" << endl;
    }
  }

  cout << "------ EXERCISE 2 ------" << '\n';
  int n;
  char char_choice;
  cout << "Type a number: ";
  cin >> n;
  cout << "Do you want to double the number? (y/n): ";
  cin >> char_choice;

  switch (tolower(char_choice)) {
  case 'y':
    n *= 2; 
    break;
  
  case 'n':
    break;

  default:
    n = 0;
    break;
  }

  cout << "The number is set to " << n << endl;

  return 0;
}
