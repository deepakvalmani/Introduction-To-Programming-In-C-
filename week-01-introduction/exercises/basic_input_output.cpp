/**
 * @file basic_input_output.cpp
 * @brief Exercise 1: Basic Input/Output with Bitwise Operations
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Takes two numbers, performs bitwise and arithmetic operations,
 * and demonstrates while loops.
 */

#include <iostream>
using namespace std;

int main() {
    int num1, num2;      // Declare two integer variables
    
    // Get input from user
    cout << "Enter 1st number please: ";
    cin >> num1;
    cout << "Enter the 2nd number please: ";
    cin >> num2;
    
    // Perform operations
    num1 = num1 >> 2;    // Right shift by 2 bits (divide by 4)
    num2 = num2 * num2;  // Square the number
    
    // Display initial results
    cout << "1stNumber = " << num1 << endl;
    cout << "2ndNumber = " << num2 << endl;
    cout << endl;
    
    // Loop until numbers become equal
    while (num1 != num2) {
        num1 = num1 >> 2;  // Continue right shifting
        num2 *= num2;      // Continue squaring
    }
    
    // Check for zero values
    if ((num1 == 0) || (num2 == 0)) {
        return 1;          // Return error code
    }
    else {
        cout << "1stNumber = " << num1 << endl;
        cout << "2ndNumber = " << num2 << endl;
    }
    
    return 0;
}