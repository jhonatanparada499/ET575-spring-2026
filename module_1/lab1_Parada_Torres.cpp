/*
Jhonatan Stiven Parada Torres
Jan 28, 2026
Lab assignment 1: introduction to iostream and numerical variables
*/

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main(){
    string country;
    char gender;
    int zipcode;
    float rate;
    
    cout << "Enter country: ";
    cin >> country;
    cout << "Enter gender (f)emale, (m)ale or (o)thers : ";
    cin >> gender;
    cout << "Enter zipcode: ";
    cin >> zipcode;
    cout << "Enter tax rate: ";
    cin >> rate;

    cout << "\n";
    cout << "Entered country: " << "\t" << country << "\n";
    cout << "Selected gender: " << "\t" << gender << "\n";
    cout << "Zip code: " << "\t\t" << zipcode << "\n";
    cout << "Tax rate: " << "\t\t" << zipcode << "\n";

    return 0;
}