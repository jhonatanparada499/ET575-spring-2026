/*
Jhonatan Stiven Parada Torres
Jan 31, 2026
Lab 3 exercise, Numerical Variables
*/

#include <iostream>
using namespace std;

int main() {
  int a = 0, b = 0;
  cout << "Enter the first number (a): ";
  cin >> a;
  cout << "Enter the second number (b): ";
  cin >> b;

  cout << '\n';
  cout << "Arithmetic Operations:" << '\n';
  cout << "a + b = " << a + b << '\n';
  cout << "a - b = " << a - b << '\n';
  cout << "a * b = " << a * b << '\n';
  cout << "a / b = " << a / b << '\n';
  cout << "a % b = " << a % b << '\n';
  cout << '\n';

  a += 10;
  b -= 5;
  cout << "After assignment operations:" << '\n';
  cout << "a = " << a << '\n';
  cout << "b = " << b << '\n';
  cout << '\n';

  cout << "Boolean Operations:" << '\n';
  cout << "Is a greater than b? " << (a > b) << '\n';
  cout << "Is a equal to b? " << (a == b) << '\n';
  cout << "Is a not equal to b? " << (a != b) << '\n';
  cout << "Are both a and b positive? " << (a >= 0 && b >= 0) << '\n';
  cout << "Is either a or b negative? " << (a < 0 || b < 0) << '\n';
  cout << "Is a not greater than b? " << !(a > b) << endl;

  return 0;
}
