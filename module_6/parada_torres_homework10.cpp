/*
Jhonatan Stiven ParadTorres
May 4, 2026
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void read_file(ifstream &finObj, string theFileName) {
  finObj.open(theFileName);

  if (finObj.fail()) {
    cout << theFileName << " doesn't exist." << '\n';
    exit(1);
  }

  string line;
  while (getline(finObj, line)) {
    cout << line << endl;
  }
  finObj.close();
}

int count_all_words(ifstream &finObj, string theFileName) {
  int total_words;
  finObj.open(theFileName);
  if (finObj.fail()) {
    cout << theFileName << " doesn't exist." << '\n';
    exit(1);
  }

  string word;
  while (finObj >> word) {
    ++total_words;
  }

  finObj.close();
  return total_words;
}

int count_one_word(ifstream &finObj, string theFileName, string theWord) {
  int total_words;

  finObj.open(theFileName);
  if (finObj.fail()) {
    cout << theFileName << " doesn't exist." << '\n';
    exit(1);
  }

  string word;
  while (finObj >> word) {
    if (word.find(theWord) != string::npos) {
      ++total_words;
    }
    word = "";
  }

  finObj.close();
  return total_words;
}

void append_to_file(ofstream &foutObj, string theFileName, string theMessage) {
  foutObj.open(theFileName, ios::app);
  foutObj << theMessage;
  foutObj.close();
}

int main() {
  string fileName = "wordcounts.txt";
  string inputFile = "Remembering_Earth.txt";
  string word = "Earth";

  ifstream fin;
  ofstream fout;

  read_file(fin, inputFile);

  int word_counts = count_all_words(fin, inputFile);
  string msg1 = "Parada Torres\nTotal words: " + to_string(word_counts) + '\n';
  append_to_file(fout, fileName, msg1);

  int target_word_count = count_one_word(fin, inputFile, word);
  string msg2 = "The word " + word + " appears " +
                to_string(target_word_count) + " times in the doc." + '\n';
  append_to_file(fout, fileName, msg2);
  return 0;
}
