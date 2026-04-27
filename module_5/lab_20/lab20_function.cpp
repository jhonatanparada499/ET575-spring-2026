/*
Jhonatan Stiven Parada Torres
April 22, 2026
*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const string FILENAME = "data_user.txt";

void create() {
  ofstream fout;
  fout.open(FILENAME);
  fout.close();
}

void append(string theMessage) {
  ofstream fout;
  fout.open(FILENAME, ios::app);
  fout << theMessage << '\n';
  fout.close();
}

void read(string theFileName) {
  ifstream fin;
  fin.open(theFileName);

  string line;
  while (getline(fin, line)) {
    cout << line << '\n';
  }
  fin.close();
}
