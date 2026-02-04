/**
 * @file variable_operations.cpp
 * @brief Exercise 2: Variable Operations with Nested Loops
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Demonstrates while loops with break conditions and counter variables.
 */

#include <iostream>
using namespace std;

int main() {
    int num, count = 0, check;  // Declare variables
    
    // Infinite loop with break condition
    while(true) {
        cout << "Enter the number: ";
        cin >> num;
        
        // Exit condition
        if (num <= -1) {
            break;               // Exit loop
        }
        
        check = 0;               // Reset inner counter
        
        // Nested loop to print message multiple times
        while (check < num && num > 0) {
            cout << "CL1002 exam is in week 09 " << endl;
            check++;             // Increment inner counter
            count++;             // Increment total counter
        }
    }
    
    // Display final count
    cout << "count: " << count;
    
    return 0;
}