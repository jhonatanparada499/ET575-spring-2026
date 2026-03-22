/*
Jhonatan Stiven ParadTorres
March 22, 2026
*/

#include <cctype>
#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int *ptr;
  int var = 7;
  int foo = 22;
  ptr = &var;
  ptr = &foo;
  int &ref = var;

  cout << "ref = " << ref << endl;
  return 0;
}
