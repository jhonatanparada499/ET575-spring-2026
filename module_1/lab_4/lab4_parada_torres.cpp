/*
Jhonatan Stiven Parada Torres
Feb 2, 2026
Lab 4 exercise, String and String Methods
*/

#include <cstdlib>
#include <format>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Example 1: String Indexing" << '\n';
  string firstName = "Peter";

  cout << "The 4th char is " << firstName[3] << '\n';
  cout << "The 3rd char is " << firstName.at(2) << '\n';

  cout << "Example 2: String Length" << '\n';
  size_t firstNameLen = firstName.length();
  cout << "firstName has " << firstNameLen << '\n';

  cout << "Example 3: String Concatenation" << '\n';
  string color = "Orange";
  string animal = "animal";
  string animalAndColor = animal + color;
  cout << "Concatenation result: " << animalAndColor << '\n';

  cout << "Example 4: String Substraction" << '\n';
  string city = "Bayside";
  string sub_char = city.substr(3, 2);
  cout << "Substracted: " << sub_char << '\n';

  cout << "Example 5: String Insertion" << '\n';
  city.insert(3, "Queens-");
  cout << "After insertion: " << city << '\n';

  cout << "Example 6: String Append" << '\n';
  string fullName = "Jhonatan Parada";
  fullName.append("@neverland");
  cout << "After append: " << fullName << '\n';

  cout << "Example 7: Char Replacement" << '\n';
  string word = "engineering";
  word.replace(5, 2, "FUTURE");
  cout << "After char rep: " << word << '\n';

  cout << "Example 8: String Erasement" << '\n';
  word = "layout";
  cout << "Original: " << word << '\n';
  word.erase(2, 3);
  cout << "After: " << word << '\n';

  cout << "Example 9: String Finding" << '\n';
  word = "characters";

  int index = word.find('a');
  cout << "Index for a: " << index << '\n';

  cout << "---- Exercise ----" << '\n';
  // Source: https://cplusplus.com/forum/beginner/283798/

  // I am not using external libraries, all you need is
  // to run:
  //
  // $ g++ -std=c++20 [source] -o [dest]

  cout << "Type a word: ";
  cin >> word;
  cout << endl;

  char secondChar = word[1];
  size_t wordLenght = word.length();
  string removedWord = word.substr(0, word.length() - 3);
  string replacedWord = word.replace(2, 2, "--$--");

  const int minWidth = 25;
  // format '2nd characters' using the minWidth
  cout << format("{:<{}}{}\n", "2nd character:", minWidth, secondChar);
  cout << format("{:<{}}{} characters\n", "Word has:", minWidth, wordLenght);
  cout << format("{:<{}}{}\n", "Replace word:", minWidth, replacedWord);
  cout << format("{:<{}}{}\n", "Remove end characters:", minWidth, removedWord);

  return EXIT_SUCCESS;
}
