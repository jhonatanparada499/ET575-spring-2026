#include <cmath>
#include <iostream>

using namespace std;

int collectNumbers(int arr[]) {
  int count = 0;
  cout << "Enter 5 non-zero integers: " << '\n';
  while (count < 5) {
    int input;
    cout << "Enter number " << (count + 1) << ": ";
    cin >> input;
    if (input == 0) {
      break;
    }
    arr[count] = input;
    count++;
  }
  return count;
}

double averageNumber(int arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

int closestMean(int arr[], int size, double average) {
  int closest = arr[0];
  double smallestDiff = abs(arr[0] - average);
  for (int i = 1; i < size; i++) {
    double diff = abs(arr[i] - average);
    if (diff < smallestDiff) {
      smallestDiff = diff;
      closest = arr[i];
    }
  }
  return closest;
}

void printResult(double average, int closest) {
  cout << "The closest number to average " << average << " is " << closest
       << "." << '\n';
}
