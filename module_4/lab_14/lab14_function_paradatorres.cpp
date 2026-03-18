/*
Jhonatan Stiven Parada Torres
March 18, 2026
*/

#include <cmath>
#include <cstdio>
#include <iostream>

// using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int multiply(int a, int b) { return a * b; }

int calculatedb(int a, int b) { return 2 * multiply(a, b); }

void cheer(int a) {
  if (a == 1) {
    cout << "STOP" << '\n';
    return;
  }

  cout << (a * 2) << '\n';
  cheer(a - 1);
}

int linearFunc(int a) {
  if (a > 10) {
    return -6;
  }
  return linearFunc(a + 2) * (a - 4);
}

int collectNumber() {
  int n;
  cout << "Enter positive num: ";
  cin >> n;

  if (n <= 0) {
    cout << "Error";
    return collectNumber();
  }

  return n;
}

float hypotenuse(int a, int b) { return sqrt(pow(a, b)) + sqrt(pow(b, b)); }

void printResult(int a, int b, float c) {
  cout << "Side 1: " << a << '\n';
  cout << " Side 2: " << b << " is " << c << endl;
}

// EXERCISE

double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void printDistance(double x1, double y1, double x2, double y2) {
  printf("The distance of points (%.2f,%.2f) and (%.2f,%.2f) is %.2f.\n", x1,
         y1, x2, y2, distance(x2, y1, x2, y2));
}
