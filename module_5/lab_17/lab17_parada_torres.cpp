/*
Jhonatan Stiven Parada Torres
April 16, 2026
*/

#include <iostream>
using std::cout;

int sumEvenNumbers(int theArr[], int theSize) {
  int sum = 0;
  for (int i = 0; i < theSize; ++i) {
    if (theArr[i] % 2 == 0) {
      sum += theArr[i];
    }
  }
  return sum;
}

int countNegativeNumbers(int theArr[], int theSize) {
  int count = 0;
  for (int i = 0; i < theSize; ++i) {
    if (theArr[i] < 0) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {12, -5, 8, -2, 10, -15, 4};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  cout << "Sum of even numbers: " << sumEvenNumbers(arr, arrSize) << '\n';
  cout << "Count of negative numbers: " << countNegativeNumbers(arr, arrSize)
       << '\n';

  return 0;
}
