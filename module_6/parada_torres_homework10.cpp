/*
Jhonatan Stiven ParadTorres
May 4, 2026
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void read_file(string theFileName) {
  ifstream fin;
  fin.open(theFileName);

  if (fin.fail()) {
    cout << theFileName << " doesn't exist." << '\n';
    exit(1);
  }

  string line;
  while (getline(fin, line)) {
    cout << line << '\n';
  }
  fin.close();
}

int count_all_words(string theFileName){
  int total_words, word;
  ifstream fin;
  fin.open(theFileName);
  if (fin.fail()) {
    cout << theFileName << " doesn't exist." << '\n';
    exit(1);
  }

  while (fin >> word){ ++total_words; }
  fin.close();

  return total_words;
}

int count_one_word(string theFileName, string theWord){
  int total_words;

  ifstream fin;
  fin.open(theFileName);
  if (fin.fail()) {
    cout << theFileName << " doesn't exist." << '\n';
    exit(1);
  }
  
  string word;
  while (fin >> word){ 
    if (word == theWord) {
      ++total_words;
    }
  }

  return total_words;
}

void append_to_file(string theFileName, string theMessage){
  ofstream fout;
  fout.open(theFileName, ios::app);
  fout << theMessage;
  fout.close();
}

int main() {
  string fileName = "wordcounts.txt";
  string inputFile = "Remembering_Earth.txt";

  read_file(inputFile);

  append_to_file(
    fileName,
    "Parada Torres\nTotal words: " + 
      to_string(count_all_words(inputFile)) + '\n'
  );

  string word = "Earth";
  append_to_file(
    fileName,
    "The word " + word + " appears " + 
      to_string(count_one_word(inputFile, word)) +
        " times in the document." + '\n'
  );

  return 0;
}