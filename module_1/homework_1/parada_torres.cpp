//
// Homework 1: strings, string methods, and numerical variables
//
// Student's Name: Jhonatan Parada Torres
//
//
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

  if (msg_index == -1) {
     return 0;
  }

  cout << "Index of character 'ma': " << '\t' <<
  msg_index << '\n';

  cout << "Replace 'ma' with %---%: " << '\t' <<
  msg.replace(msg_index, 2, "%---%") << endl;

  return 0;
}
