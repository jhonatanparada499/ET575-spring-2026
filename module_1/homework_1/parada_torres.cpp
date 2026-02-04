//
// Homework 1: strings, string methods, and numerical variables
//
// Student's Name: Jhonatan Parada Torres
//

#include <iostream>
#include <string>

using namespace std;

int main() {
  string greeting = "Welcome to ";
  string city = "New York City ";
  string name = "";

  cout << "Enter name: ";
  cin >> name;
  string msg = greeting + city + name;

  cout << "------------------------------ RESULT ACTIVITY 1 "
          "----------------------------"
       << '\n';

  int msg_lenght = msg.length();
  int msg_index = msg.find("ma");

  cout << "concatenated message: " << "\t\t" <<
  msg << '\n';

  cout << "Message length: " << "\t\t" <<
  msg_lenght << '\n';

  if (msg_index != -1) {
     cout << "Index of character 'ma': " << '\t' <<
     msg_index << '\n';

     cout << "Replace 'ma' with %---%: " << '\t' <<
     msg.replace(msg_index, 2, "%---%") << endl;
  }


  constexpr double PI = 3.14159;
  float height, radius;

  cout << "Enter Height: ";
  cin >> height;
  cout << "Enter Radius: ";
  cin >> radius;

  bool radiusGreaterHeight = radius > height;
  bool radiusEqualHeight = radius == height;

  height *= 3;
  radius += 5;

  bool radiusNotEqualAndGreaterHeight = radius != height and radius > height;

  float cylinderVolume = PI * (radius * radius) * height;

  cout << "------------------------------ RESULT ACTIVITY 2 "
          "----------------------------"
       << '\n';

  cout << "Step 3) Is the radius greater than height? " << "\t\t\t\t\t" <<
  radiusGreaterHeight << '\n';

  cout << "Step 4) Is the radius equal to height? " << "\t\t\t\t\t\t" <<
  radiusEqualHeight << '\n';
   
  cout << "Step 5) Triple height = " << "\t\t\t\t\t\t\t" <<
  height << '\n';

  // Error in instructions, repeated step number
  cout << "Step 5) Increased radius by 5 = " << "\t\t\t\t\t\t" <<
  radius << '\n';

  cout << "Step 6) Is the radius not equal to and greater than height ? " << "\t\t\t" <<
  radiusNotEqualAndGreaterHeight << '\n';

  cout << "Step 7) The volume of a right cylinder with radius " << 
  radius << "cm and height " << height << "cm is =" << "\t" <<
  cylinderVolume << "cm^3" << endl;

  return 0;
}
