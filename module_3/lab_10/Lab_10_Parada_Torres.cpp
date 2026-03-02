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
  for(int i = 1; i < 20; i+=3){
    cout << i << '\t';
  }
  cout << '\n';

  cout << "------ EXAMPLE 5 ------" << '\n';
  int counter = 0;
  for(int i = -10; i <= 10; i+=3){
    cout << i << '\t';
    if(i && i%5 == 0){ // if i is zero, the cond is false
      ++counter;
    }
  }
  cout << '\n';
  cout << "There are " << counter << " multiples of five." << '\n';

  cout << "------ EXERCISE 1 ------" << '\n'; 
  counter = 0;
  for(int i = 21; i >= -21; i-=5){
    cout << i << '\t';
    if(i && i%2 == 0){ // if i is zero, the cond is false
      ++counter;
    }
  }
  cout << '\n';
  cout << "There are " << counter << " multiples of two." << '\n';

  cout << "------ EXERCISE 2 ------" << '\n';
  int userNumber;
  cout << "Enter init number: ";
  cin >> userNumber;

  for(int i = userNumber; i <= 30; i+=4){
    cout << i << '\t';
  }
  cout << endl;

  return 0;
}