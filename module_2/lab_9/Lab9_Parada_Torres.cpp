/*
Jhonatan Stiven Parada Torres
Feb 19, 2026
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  double celsius, fahrenheit;

  // Ask the user for input
  std::cout << "Enter temperature in Celsius: ";
  std::cin >> celsius;

  // Apply the conversion formula
  fahrenheit = (celsius * 9.0 / 5.0) + 32;

  // Display the result
  std::cout << celsius << " degrees Celsius is " << fahrenheit
            << " degrees Fahrenheit." << std::endl;

  // 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
  // Because of the prompt. THe AI was using the scope operator to call the
  // function cout and cin. In terms of class concepts, I am supposed to be
  // unfamiliar with it.

  // 2. Are there any issues or improvements you noticed? Explain.
  // No.

  // 3. What test cases did you try, and why? Explain.
  // I tried passing an end-of-line character (Cntrl+d) and it returned this:
  // Enter temperature in Celsius: 6.23437e-310 degrees Celsius is 32 degrees
  // Fahrenheit. I also tried passing a character/string instead of an number
  // and it said zero degrees.
  //

  // Enhanced/Personal version
  cout << "Choose conversion type:" << '\n';
  cout << "1. Celsius to Fahrenheit" << '\n';
  cout << "2. Fahrenheit to Celsius" << '\n';
  int choice;
  cout << "Enter choice: ";
  cin >> choice;

  string conv_type;
  switch (choice) {
  case 1:
    conv_type = "Celsius";
    cout << "Enter temperature in " << conv_type << ": ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << "C is " << fahrenheit << "F" << '\n';
    break;
  case 2:
    conv_type = "Fahrenheit";
    cout << "Enter temperature in " << conv_type << ": ";
    cin >> fahrenheit;
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    cout << fahrenheit << "F is " << celsius << "C" << '\n';
    break;
  default:
    cout << "Invalid." << endl;
    return -1;
  }

  return 0;
}
