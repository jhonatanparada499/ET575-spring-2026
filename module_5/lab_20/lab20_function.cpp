/*
Jhonatan Stiven Parada Torres
April 27, 2026
*/

#include <cstdlib>
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
