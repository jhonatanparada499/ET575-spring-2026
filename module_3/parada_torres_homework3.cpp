/*
Jhonatan Stiven Parada Torres
March 14, 2026
*/

#include <iostream>
// #include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main() {
  // PROGRAM 1
  int positiveNumbers = 0, negativeNumbers = 0, zeroNumbers = 0, number;

  cout << "Enter 10 nums: " << '\n';

  for (int i = 1; i <= 10; i++) {
    cout << "Enter number " << i << ": ";
    cin >> number;
    if (number > 0) {
      positiveNumbers++;
    } else if (number < 0) {
      negativeNumbers++;
    } else {
      zeroNumbers++;
    }
  }

  cout << '\n';
  cout << "Total positive numbers = " << positiveNumbers << '\n';
  cout << "Total negative numbers = " << negativeNumbers << '\n';
  cout << "Total zeros = " << zeroNumbers << '\n';
  cout << '\n';

  // PROGRAM 2
  int numberOfDays;
  double dailySales, totalSales = 0.0, averageSales = 0.0;

  cout << "Enter number of days: ";
  cin >> numberOfDays;

  if (numberOfDays < 0) {
    cout << "Invalid number of days." << endl;
    return -1;
  }

  for (int i = 1; i <= numberOfDays; i++) {
    cout << "Enter sales figure for day " << i << ": ";
    cin >> dailySales;
    totalSales += dailySales;
  }

  averageSales = totalSales / numberOfDays;
  cout << '\n';
  cout << "Total sales $" << totalSales << " for " << numberOfDays
       << " days. Average daily sales $" << averageSales << '\n';

  return 0;
}
