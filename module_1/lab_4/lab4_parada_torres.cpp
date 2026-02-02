/*
Jhonatan Stiven Parada Torres
Feb 2, 2026
Lab 4 exercise, String and String Methods
*/

#include <iostream>
using namespace std;

#include <string>
#include <cstdlib>

int main() {
  cout << "Example 1: String Indexing" << '\n';
  string firstName = "Peter";

  cout << "The 4th char is "<< firstName[3] << '\n';
  cout << "The 3rd char is " << firstName.at(2) << '\n';

  cout << "Example 2: String Length" << '\n';
  size_t firstNameLen = firstName.length();
  cout << "firstName has " << firstNameLen << '\n';

  cout << "Example 3: String Concatenation" << '\n';
  string color = "Orange";
  string animal = "animal";
  string animalAndColor = animal + color;
  cout << "Concatenation result: "<< animalAndColor << '\n';

  cout << "Example 4: String Substraction" << '\n';
  string city = "Bayside";
  string sub_char = city.substr(3,2);
  cout << "Substracted: " << sub_char << '\n';

  cout << "Example 5: String Insertion" << '\n';
  city.insert(3, "Queens-");
  cout << "After insertion: "<< city << '\n';

  cout << "Example 6: String Append" << '\n';
  string fullName = "Jhonatan Parada";
  fullName.append("@neverland");
  cout << "After append: " << fullName << '\n';

  cout << "Example 7: Char Replacement" << '\n';
  string word = "engineering";
  word.replace(5,2,"FUTURE");
  cout << "After char rep: "<< word << '\n';

  cout << "Example 8: String Erasement" << '\n';
  word = "layout";
  cout << "Original: " << word << '\n';
  word.erase(2,3);
  cout << "After: " << word << '\n';

  cout << "Example 9: String Finding" << '\n';
  word = "characters";

  int index = word.find('a');
  cout << "Index for a: "<< index << '\n';

  cout << "Exercise" << '\n';






  return EXIT_SUCCESS;
}