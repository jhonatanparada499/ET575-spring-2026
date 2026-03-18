/*
Jhonatan Stiven Parada Torres
March 18, 2026
*/

#include <iostream>
// #include <string>
#include "lab14_function_paradatorres.cpp"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "EXAMPLE 1" << '\n';
  int calc = calculatedb(2, 3);
  cout << calc << '\n';

  cout << "EXAMPLE 2" << '\n';
  cheer(4);

  cout << "EXAMPLE 3" << '\n';
  int n = linearFunc(3);
  cheer(4);
  cout << "Final result: " << n << '\n';

  cout << "EXAMPLE 4" << '\n';
  int s1 = collectNumber();
  int s2 = collectNumber();
  float h = hypotenuse(s1, s2);
  printResult(s1, s2, h);

  cout << "EXERCISE" << '\n';
  printDistance(2, 2, 3, 3);

  return 0;
}
