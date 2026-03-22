/*
Jhonatan Stiven ParadTorres
March 22, 2026
*/

#include <cctype>
#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int speed() {
  int velocity;
  bool invalidInput = true;
  do {
    cout << "Enter wind speed: ";
    cin >> velocity;
    if (velocity <= 0 || velocity >= 100) {
      invalidInput = false;
    }
  } while (invalidInput);
  return velocity;
}

int temp() {
  int temperature;
  bool invalidInput = true;
  do {
    cout << "Enter temperature: ";
    cin >> temperature;
    if (temperature > 10 || temperature <= -90) {
      invalidInput = false;
    }
  } while (invalidInput);
  return temperature;
}

double windSpeed(int theVelocity, int theTemperature) {
  double windChildIndex = // Legacy casting
      33.0 - (10.0 * sqrt((double)theVelocity) - theVelocity + 10.5) *
                 (33.0 - theTemperature);
  return windChildIndex;
}

// inconsistent name format for functions, is it camel case or snake case?
void promptResult(double theWindChildIndex) {
  cout << "The wind index is: " << theWindChildIndex << '\n';
}

// program 2

int collectNumber() {
  int number;
  cout << "Enter number: ";
  cin >> number;
  return number;
}

bool inOrder(int theNum1, int theNum2, int theNum3) {
  return (theNum1 > theNum2 && theNum2 > theNum3);
}

void orderResult(int theNum1, int theNum2, int theNum3,
                 bool theDescendingOrder) {
  if (theDescendingOrder) {
    cout << theNum1 << ", " << theNum2 << ", " << theNum3
         << " are in descending order." << '\n';
  } else {
    cout << theNum1 << ", " << theNum2 << ", " << theNum3
         << " are NOT in descending order." << '\n';
  }

  char userChoice;
  cout << "Do you want to continue: ";
  cin >> userChoice;

  if (tolower(userChoice) == 'y') {
    int num1 = collectNumber(), num2 = collectNumber(), num3 = collectNumber();
    bool theDescendingOrder = inOrder(num1, num2, num3);
    orderResult(num1, num2, num3, theDescendingOrder);
  }
}

void runProgram(int theNum1, int theNum2, int theNum3,
                bool theDescendingOrder) {
  orderResult(theNum1, theNum2, theNum3, theDescendingOrder);
}

int main() {
  int s = speed();
  float t = temp();
  promptResult(windSpeed(s, t));

  int num1 = collectNumber();
  int num2 = collectNumber();
  int num3 = collectNumber();

  bool descendingOrder = inOrder(num1, num2, num3);

  runProgram(num1, num2, num3, descendingOrder);

  return 0;
}
