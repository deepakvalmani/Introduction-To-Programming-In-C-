/**
 * @file divisible_by_7.cpp
 * @brief Exercise 1: Check if Number is Divisible by 7
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Checks if a number is divisible by 7 using a mathematical algorithm.
 */

#include <iostream>
using namespace std;

int main() {
    int x, digit;
    
    cout << "Enter a number: ";
    cin >> x;
    int y = x;  // Keep original number
    
    cout << "\nProcess: " << endl;
    
    // Algorithm: Repeatedly remove last digit, double it, subtract
    while (y > 7 || y < -7) {
        digit = y % 10;          // Get last digit
        digit *= 2;              // Double the digit
        y = y / 10;              // Remove last digit
        y = y - digit;           // Subtract doubled digit
        cout << "Current value: " << y << endl;
    }
    
    // Check result
    if (y == 7 || y == -7 || y == 0) {
        cout << "\n" << x << " is divisible by 7." << endl;
    } else {
        cout << "\n" << x << " is not divisible by 7." << endl;
    }
    
    return 0;
}