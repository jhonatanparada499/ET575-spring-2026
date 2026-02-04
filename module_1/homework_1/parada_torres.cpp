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

  cout << "concatenated message: " << msg << '\n';

  int msg_lenght = msg.length();
  cout << "Message length: " << msg_lenght << '\n';

  int msg_index = msg.find("ma");
  cout << "Index of character 'ma': " << msg_index << '\n';

  cout << "Replace 'ma' with %---%: " << msg.replace(msg_index, 2, "%---%")
       << '\n';

  return 0;
}
