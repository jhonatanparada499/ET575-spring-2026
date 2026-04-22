/*
Jhonatan Stiven ParadTorres
April 22, 2026
*/

#include <iostream>

using namespace std;

const int ROWCOL_ARRAY = 4;

void searchValue(int arr[ROWCOL_ARRAY][ROWCOL_ARRAY], int searchVal,
                 int result[2]) {
  result[0] = -1;
  result[1] = -1;

  for (int row = 0; row < ROWCOL_ARRAY; row++) {
    for (int col = 0; col < ROWCOL_ARRAY; col++) {
      if (arr[row][col] == searchVal) {
        result[0] = row;
        result[1] = col;
        return;
      }
    }
  }
}

void displayMessage(int searchVal, int result[2]) {
  if (result[0] != -1 && result[1] != -1) {
    cout << "Number " << searchVal << " was found in row " << result[0]
         << " and column " << result[1] << "." << '\n';
  } else {
    cout << "Number " << searchVal << " was not found." << '\n';
  }
}

int main() {
  int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  int searchVal;
  cout << "Enter a value to search for: ";
  cin >> searchVal;

  int result[2];

  searchValue(ar, searchVal, result);
  displayMessage(searchVal, result);

  return 0;
}
