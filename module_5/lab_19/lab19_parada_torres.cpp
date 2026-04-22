/*
Jhonatan Stiven Parada Torres
April 22, 2026
*/

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

void populate(int arr[3][4]) {
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      arr[row][col] = rand() % 101;
    }
  }
}

void printvaluearray(int arr[3][4]) {
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      cout << setw(6) << arr[row][col];
    }
    cout << '\n';
  }
}

double average(int arr[3][4]) {
  double sum = 0;
  int total = 3 * 4;

  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      sum += arr[row][col];
    }
  }

  return sum / total;
}

int main() {
  srand(time(0));

  int arr[3][4];
  char choice;

  do {
    cout << "-------- // -------- //-------- // --------" << '\n';

    populate(arr);
    printvaluearray(arr);

    cout << '\n';
    cout << "Average = " << average(arr) << '\n';
    cout << '\n';
    cout << "Another run? (y/n): ";
    cin >> choice;
    cout << '\n';

  } while (choice == 'y' || choice == 'Y');

  return 0;
}
