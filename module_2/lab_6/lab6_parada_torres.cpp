/*
Jhonatan Stiven Parada Torres
Feb 4, 2026
Lab6 exercise, branching, flow control
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    cout << " EXAMPLE 1" << '\n';
    bool isPositive;
    int number;

    cout << "Enter number";
    cin >> number;

    isPositive = number > 0;

    cout << "Positive? " << isPositive << '\n';

    cout << " EXAMPLE 2" << '\n';
    int num1 = 3, num2 = 5;

    if (num1 == num2) {
        cout << "Nums are equal" << '\n';
    }

    cout << "Nums are not equal" << '\n';
    
    cout << " EXAMPLE 3" << '\n';
    if (num1 > num2) {
        cout << "num1 > num2" << '\n';
    } else{
        cout << "num1 <= num2" << '\n';
    }

    cout << " EXAMPLE 4" << '\n';
    if (num1 == num2) {
        cout << "num1 equal num2" << '\n';
    } else if (num1 > num2){
        cout << "num1 > num2" << '\n';
    } else{
        cout << "num1 <= num2" << '\n';
    }

    cout << " EXAMPLE 5" << '\n';
    int wavelength = 0;
    string color;

    cout << "Enter wavelength ";
    cin >> wavelength;

    if (wavelength <= 379 && wavelength>=10) {
        color = "ultraviolet";
    } else if (wavelength <= 379 && wavelength>=380){
        color = "blue";
    } else if (wavelength <= 590 && wavelength>=521){
        color = "green";
    } else if (wavelength <= 740 && wavelength>=591){
        color = "red";
    } else if (wavelength <= 741){
        color = "infrared";
    } else {
        color = "undefined";
    }

    cout << "----------------- Lab Assignment -----------------" << '\n';
    float final_exam, labs, homework;
    char gpa;

    cout << "Enter Final Exam: ";
    cin >> final_exam;
    cout << "Enter Labs: ";
    cin >> labs;
    cout << "Enter Homework: ";
    cin >> homework;

    float grade = final_exam *0.5 + labs*0.3 + homework*0.2;

    if (grade < 0) { gpa = ' ';}
    else if (grade < 60) { gpa = 'F';}
    else if (grade < 70) { gpa = 'D';}
    else if (grade < 80) { gpa = 'C';}
    else if (grade < 90) { gpa = 'B';}
    else { gpa = 'A';}

    cout << "A final grade of " << grade 
    << " is equivalent to a GPA of " << gpa << "." << '\n';

    return EXIT_SUCCESS;
}
