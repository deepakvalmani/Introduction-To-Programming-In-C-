/**
 * @file switch_case.cpp
 * @brief Switch-Case Statement
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Demonstrates switch-case statement for multiple choices.
 */

#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    
    cout << "=== SWITCH-CASE EXAMPLE ===" << endl;
    cout << "Enter day number (1-7): ";
    cin >> dayNumber;
    
    switch(dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number! Please enter 1-7." << endl;
    }
    
    // Another example with characters
    cout << "\n=== GRADE CONVERTER ===" << endl;
    char grade;
    cout << "Enter grade (A, B, C, D, F): ";
    cin >> grade;
    
    switch(grade) {
        case 'A':
        case 'a':
            cout << "Excellent! (90-100)" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good! (80-89)" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Average (70-79)" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Below Average (60-69)" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Fail (Below 60)" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }
    
    return 0;
}