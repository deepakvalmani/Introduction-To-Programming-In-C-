/**
 * @file control_structures.cpp
 * @brief Control Structures
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Demonstrates if-else statements and loops.
 */

#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    // If-else statement
    cout << "\n=== IF-ELSE EXAMPLE ===" << endl;
    if (number > 0) {
        cout << number << " is positive" << endl;
    } 
    else if (number < 0) {
        cout << number << " is negative" << endl;
    }
    else {
        cout << "Number is zero" << endl;
    }
    
    // For loop example
    cout << "\n=== FOR LOOP EXAMPLE ===" << endl;
    cout << "Counting from 1 to 5: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // While loop example
    cout << "\n=== WHILE LOOP EXAMPLE ===" << endl;
    int count = 1;
    cout << "Counting from 1 to 3: ";
    while (count <= 3) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    
    return 0;
}