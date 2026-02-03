#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;

  // 1. Ask user for a word
  cout << "Enter a word: ";
  cin >> word;

  // 2. Print the 2nd character (index 1)
  // We check if the word is long enough to avoid errors
  if (word.length() >= 2) {
    cout << "2nd character:         " << word[1] << endl;
  } else {
    cout << "2nd character:         N/A (word too short)" << endl;
  }

  // 3. Find and print the length
  int len = word.length();
  cout << "word has:              " << len << " characters" << endl;

  // 4. Replace 2 characters starting from the 3rd character (index 2)
  // We create a copy so we don't ruin the word for the next step
  string replacedWord = word;
  if (len >= 3) {
    replacedWord.replace(2, 2, "-- $ --");
    cout << "Replace word:          " << replacedWord << endl;
  } else {
    cout << "Replace word:          N/A (word too short)" << endl;
  }

  // 5. Remove 3 characters from the end
  string shortenedWord = word;
  if (len >= 3) {
    shortenedWord.erase(len - 3, 3);
    cout << "Remove end characters: " << shortenedWord << endl;
  } else {
    cout << "Remove end characters: (word is shorter than 3 chars)" << endl;
  }

  return 0;
}

// --- AI Assistant Used: Gemini ---
// Q1) Was the code correct? yes, the output looks even cleaner than ChatGPT.
// Q2) Was it readable and properly commented? Decently readable and the
// comments offer more details about the code. The only thing I don't like is
// the numbers and the begginging of each sentence. I feel them weird because we
// are not scripting.
// Q3) Were you able to explain each line of code? I don't understand this
// question your answer.
// Q4) Did it use the same programming concepts we learned
// in class? Explain which concepts were used and which ones were unfamiliar.
// Yes, all concepts covered in class and no new line characters.
// Q5) Terminal
// Output: (Paste the output of your program here)
//
// Enter a word: jhonatan
// 2nd character:         h
// word has:              8 characters
// Replace word:          jh-- $ --atan
// Remove end characters: jhona
