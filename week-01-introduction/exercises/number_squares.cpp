/**
 * @file number_squares.cpp
 * @brief Exercise 4: Number Squares and Categorization
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Calculates squares of numbers and categorizes them.
 */

#include <iostream>
using namespace std;

int main() {
    int num, square, count_n = 0, count_p = 0, count = 0;
    
    // Do-while loop for repeated input
    do { 
        cout << "Enter a number: ";
        cin >> num;
        
        // Calculate square
        square = num * num;
        cout << "Square of the given number is = " << square << endl;
        
        // Categorize numbers
        if (num > 0) {
            count_p++;                 // Count positive numbers
        }
        if (num < -1) {
            count_n++;                 // Count negative numbers
        }
        if (num >= 100 && num <= 200) {
            count++;                   // Count numbers in range 100-200
        }
    }
    // Continue until number is between 15 and 25 (inclusive)
    while (num < 15 || num > 25);
    
    // Display results
    cout << "Positive Numbers = " << count_p << endl;
    cout << "Negative Numbers = " << count_n << endl;
    cout << "Total Count of [100-200] = " << count << endl;
    
    return 0;
}