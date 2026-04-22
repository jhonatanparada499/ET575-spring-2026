/*
Jhonatan Stiven Parada Torres
April 22, 2026
*/

#include "lab18_function.cpp"
#include <iostream>

int main() {
  int numbers[5];
  int count = collectNumbers(numbers);

  if (count == 0) {
    cout << "No numbers were entered." << endl;
    return 0;
  }

  double average = averageNumber(numbers, count);
  int closest = closestMean(numbers, count, average);
  printResult(average, closest);

  return 0;
}
