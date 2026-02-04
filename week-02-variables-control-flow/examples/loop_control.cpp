/**
 * @file loop_control.cpp
 * @brief Loop Control Statements
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Demonstrates break, continue, and nested loops.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "=== BREAK STATEMENT ===" << endl;
    cout << "Counting from 1 to 10 (breaks at 5):" << endl;
    
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i equals 5
        }
        cout << i << " ";
    }
    cout << endl;
    
    cout << "\n=== CONTINUE STATEMENT ===" << endl;
    cout << "Numbers 1-10 (skipping multiples of 3):" << endl;
    
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;  // Skip this iteration when i is multiple of 3
        }
        cout << i << " ";
    }
    cout << endl;
    
    cout << "\n=== NESTED LOOPS ===" << endl;
    cout << "Multiplication table (1-3):" << endl;
    
    for (int i = 1; i <= 3; i++) {      // Outer loop
        for (int j = 1; j <= 3; j++) {  // Inner loop
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    
    cout << "\n=== INFINITE LOOP WITH BREAK ===" << endl;
    int counter = 0;
    
    while (true) {  // Infinite loop
        cout << counter << " ";
        counter++;
        
        if (counter > 5) {
            break;  // Exit infinite loop
        }
    }
    cout << endl;
    
    return 0;
}