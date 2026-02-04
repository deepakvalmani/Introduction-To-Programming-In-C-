/**
 * @file conditional_statements.cpp
 * @brief Conditional Statements (if, else if, else)
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Demonstrates different types of conditional statements.
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "=== CONDITIONAL STATEMENTS ===" << endl;
    cout << "Enter a number: ";
    cin >> number;
    
    // Simple if statement
    cout << "\n1. Simple if statement:" << endl;
    if (number > 0) {
        cout << "The number is positive" << endl;
    }
    
    // if-else statement
    cout << "\n2. if-else statement:" << endl;
    if (number % 2 == 0) {
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }
    
    // if-else if-else ladder
    cout << "\n3. if-else if-else ladder:" << endl;
    if (number > 100) {
        cout << "Number is greater than 100" << endl;
    } else if (number > 50) {
        cout << "Number is between 51 and 100" << endl;
    } else if (number > 0) {
        cout << "Number is between 1 and 50" << endl;
    } else if (number == 0) {
        cout << "Number is zero" << endl;
    } else {
        cout << "Number is negative" << endl;
    }
    
    // Nested if statements
    cout << "\n4. Nested if statements:" << endl;
    if (number != 0) {
        if (number > 0) {
            cout << "Positive non-zero number" << endl;
        } else {
            cout << "Negative number" << endl;
        }
    }
    
    return 0;
}