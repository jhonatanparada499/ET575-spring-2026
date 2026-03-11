/*
Jhonatan Stiven Parada Torres
March 11, 2026
*/

#include <iostream>
// #include <string>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main() {
  cout << "------ EXAMPLE 1 ------" << '\n';

  int count = 0, i = 10;
  while (i > 5)
  {
    count = !(--i%2)? count += i: count -= 3;
  }

  cout << "Final count is " << count << '\n'; // count = 5

  cout << "------ EXAMPLE 2 ------" << '\n';
  
  i = 0;
  while (i++ < 3)
  {
    cout << "Outer loop: " << i << '\n';
    int y = 1;
    while (y++ <= 5)
    {
      cout << "Inner loop: " << i << '\t';
    }
    cout << "" << '\n'; 
  }
  
  cout << "------ EXAMPLE 3 ------" << '\n';

  int rows, seats_row;
  cout << "Enter rows: ";
  cin >> rows;
  cout << "Enter seats per rows: ";
  cin >> seats_row;
  cout << "Setting arrangement" << '\n';
  for (int r = 1; r < rows; r++)
  {
    for (int s = 1; s < seats_row; s++)
    {
      cout << "Row " << r << "seat = " << s << '\n';
    }
    cout << '\n'; 
  }
  
  cout << "------ EXAMPLE 4 ------" << '\n';
  const int GRID_SIZE = 9;
  for (int r = 1; r < GRID_SIZE; r++)
  {
    for (int s = 1; s < GRID_SIZE; s++)
    {
      cout << (r==5 || s==5)? " x ":" . ";
    }
    cout << '\n'; 
  }

  cout << "------ EXAMPLE 5 ------" << '\n';
  const int GRID_SIZE_2 = 10;
  for (int r = 1; r < GRID_SIZE_2; r++)
  {
    for (int s = 1; s < GRID_SIZE_2; s++)
    {
      if(s >= 3 && s <= 4 && r >=2 && r <=9){
        cout << " % ";
        continue;
      }
      if(s >= 5 && s <= 6 && r >=5 && r <=6){
        cout << " % ";
        continue;
      }
      if(s >= 7 && s <= 8 && r >=2 && r <=9){
        cout << " % ";
        continue;
      }
      cout << " . ";
    }
    cout << '\n'; 
  }

  return 0;
}