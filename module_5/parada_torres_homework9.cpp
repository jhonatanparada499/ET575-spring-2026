/*
Jhonatan Stiven ParadTorres
April 24, 2026
*/

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int arraysize() {
  int size;
  do {
    cout << "Enter array size between 1 and 100: ";
    cin >> size;
    if (size < 1 || size > 100) {
      cout << "Invalid input." << '\n';
    }
  } while (size < 1 || size > 100);
  return size;
}

void randPopulate(int noise[], int sizearray) {
  for (int i = 0; i < sizearray; i++) {
    noise[i] = rand() % 21 + 10;
  }
}

void print(int noise[], int sizearray) {
  for (int i = 0; i < sizearray; i++) {
    cout << setw(10) << noise[i];
  }
  cout << '\n';
}

void reverse(int noise[], int sizearray) {
  for (int i = 0; i < sizearray / 2; i++) {
    int temp = noise[i];
    noise[i] = noise[sizearray - 1 - i];
    noise[sizearray - 1 - i] = temp;
  }
}

int main() {
  srand(time(0));

  int sizearray = arraysize();
  int noise[sizearray];

  randPopulate(noise, sizearray);

  cout << '\n' << "Original Set:" << '\n';
  print(noise, sizearray);

  reverse(noise, sizearray);

  cout << '\n' << "Reversed Set:" << '\n';
  print(noise, sizearray);

  return 0;
}
