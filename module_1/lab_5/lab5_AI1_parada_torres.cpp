#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;

  // Ask user for input
  cout << "Enter a word: ";
  cin >> word;

  // Print 2nd character (index 1)
  cout << "\n2nd character:          " << word[1] << endl;

  // Print length of the word
  cout << "\nword has:               " << word.length() << " characters"
       << endl;

  // Replace 2 characters starting from the 3rd character (index 2)
  string replacedWord = word;
  replacedWord.replace(2, 2, "-- $ --");
  cout << "\nReplace word:           " << replacedWord << endl;

  // Remove 3 characters from the end
  string removedEndWord = word;
  removedEndWord.erase(removedEndWord.length() - 3);
  cout << "\nRemove end characters:  " << removedEndWord << endl;

  return 0;
}

// --- AI Assistant Used: ChatGPT ---
// Q1) Was the code correct? Yes, just a little ugly because it used spaces
// rather than tabs for alignment.
// Q2) Was it readable and properly commented?
// It is readable but there are too many obvious comments.
// Q3) Were you able to explain each line of code? I do not understand this
// question.
// Q4) Did it use the same programming concepts we learned in class? Yes, except
// for the new line character('\n'). which concepts were used and which ones
// were unfamiliar. The new line character.
// Q5) Terminal Output:
// Enter a word: hello
//
// 2nd character:          e
//
// word has:               5 characters
//
// Replace word:           he-- $ --o
//
// Remove end characters:  he
