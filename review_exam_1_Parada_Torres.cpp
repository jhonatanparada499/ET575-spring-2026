/*
Jhonatan Stiven Parada Torres
Feb 11, 2026
Lab 8 
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    // 1
    string name = "Peter Smith";
    cout << name[0] << " " << name[name.find(' ') + 1] << '\n';

    // 2
    char c;
    cout << "Enter Character: ";
    cin >> c;
    cout << "The typed char is: " << c << '\n';

    // 3
    string color1, color2;
    cout << "Enter two colors: ";
    cin >> color1 >> color2;

    string concat = color1.append(color2);
    unsigned concat_len = concat.length();

    // 4
    string college = "Queensborough Community College";
    string keyword = "Community";
    college.erase(college.find(keyword), keyword.length() + 1);
    cout << college << '\n';

    // 5
    string shipping ="Shipping fee is Free per order";
    keyword = "Free";
    shipping.replace(shipping.find(keyword), keyword.length(), "$5.99");
    cout << shipping << '\n';

    // 6
    float height, time = 10.25f;
    const float gravity = 9.8f;
    height = .5 * gravity * time * time;
    printf("%.1f\n", height);

    // 7
    int d=2, e=4;
    bool f = 0;
    f = (e%d==0); // f = true
    cout << f << '\n';

    // 8
    // Line 12
    // Trying to redeclare a name that was already declared.
    // Remove the datatype double

    // 9
    int i;
    cout<<"Type a number: "<<endl;
    cin>>i;

    // bitwise operator (The most efficient way to determine if a number is even/odd)
    if(i & 1 == 0 && !(i % 3 == 0)){
        cout << "You typed: " << i << '\n';
    }

    // Conditional statement
    float midterm_exam, final_exam, lab;
    cout << "Enter 3 grades: ";
    cin >> midterm_exam >> final_exam >> lab;
    const float final_grade = midterm_exam*0.25 + final_exam*0.4 + lab*0.35;
    string gpa;

    if (final_grade < 59) {
        gpa = "FAIL";
    }
    else if (final_grade < 69) {
        gpa = "D";
    }
    else if (final_grade < 70) {
        gpa = "C";
    }
    else if (final_grade < 89) {
        gpa = "B";
    }
    else {
        gpa = "A";
    }
    
    cout << "--------------- RESULT ---------------" << '\n';
    cout << "Final Grade " << final_grade << ", GPA = " << gpa << '\n';
    cout << "--------------------------------------" << '\n';

    // Part 2: switch statement: radio station
    cout << "Radio Station	Selector" << '\n';

    char choice;
    string station_choice;

    cout << "ESPN New York  " << "A or a" << '\n';
    cout << "Z100 New York  " << "B or b" << '\n';
    cout << "La Mega        " << "C or c" << '\n';
    cout << "Classic Rock   " << "D or d" << '\n';
    cout << "WCBS News      " << "E or e" << '\n';

    if(!(cin >> choice)){
        cout << "Invalid choice." << endl;
        return -1;
    }

    switch (choice)
    {
    case 'a': case 'A':
        station_choice = "ESPN New York";
        break;
    case 'b': case 'B':
        station_choice = "Z100 New York";
        break;
    case 'c': case 'C':
        station_choice = "La Mega";
        break;
    case 'd': case 'D':
        station_choice = "Classic Rock";
        break;
    case 'e': case 'E':
        station_choice = "WCBS News";
        break;
    default:
        station_choice = "Invalid.";
        break;
    }
    // how to trim whitespaces in vim

    cout << "--------------- RESULT ---------------" << '\n';
    cout << "You are listening to " << station_choice << '\n';
    cout << "--------------------------------------" << '\n';

    return 0;
}