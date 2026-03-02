/*
Jhonatan Stiven Parada Torres
March 2, 2026
*/

#include <iostream>
// #include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
  cout << "------ EXAMPLE 1 ------" << '\n';

  for(int i = 0; i < 5; ++i){
    cout << "Hello" << i << '\n';
  }

  cout << "------ EXAMPLE 2 ------" << '\n';

  for(int i = 0; i < 10; ++i){
    cout << i << '\t';
  }
  cout << '\n';

  cout << "------ EXAMPLE 3 ------" << '\n';
  for(int i = 0; i >= -5; --i){
    cout << i << '\t';
  }
  cout << '\n';

  cout << "------ EXAMPLE 4 ------" << '\n';
  for(int i = 0; i < 20; i+=3){
    cout << i << '\t';
  }
  cout << '\n';

  return 0;
}