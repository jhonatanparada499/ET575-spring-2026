/*
Jhonatan Stiven ParadTorres
March 14, 2026
*/

#include <iostream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

const int dimension = 11;

int main() {
  int num;
  do {
    cout << "Enter number: ";
    cin >> num;
    if (num < 10) {
      cout << num
           << " is invalid Please enter number greater than 10: " << '\n';
    }
  } while (num < 10);
  cout << num << " is valid number" << '\n';

  cout << '\n';

  int num1, num2, minNum, maxNum;
  cout << "Enter number 1: ";
  cin >> num1;
  cout << "Enter number 2: ";
  cin >> num2;

  if (num1 < num2) {
    minNum = num1;
    maxNum = num2;
  } else {
    minNum = num2;
    maxNum = num1;
  }

  cout << "RESULT = ";
  int i = minNum;
  while (i <= maxNum) {
    cout << i << " ";
    i++;
  }
  cout << '\n';
  cout << '\n';

  for (int row = 0; row < dimension; row++) {
    for (int col = 0; col < dimension; col++) {
      bool print_hash = false;

      if (col == 3 && row >= 2 && row <= 10) {
        print_hash = true;
      }
      if (col == 4 && row >= 2 && row <= 6) {
        print_hash = true;
      }
      if ((col >= 5 && col <= 7) && (row == 3 || row == 4)) {
        print_hash = true;
      }

      if (print_hash) {
        cout << "# ";
      } else {
        cout << ". ";
      }
    }
    cout << endl;
  }

  return 0;
}
