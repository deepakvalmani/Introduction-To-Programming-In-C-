/**
 * @file arithmetic_operations.cpp
 * @brief Arithmetic Operations
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Demonstrates basic arithmetic operations in C++.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 4;    // Initialize two variables
    
    cout << "=== ARITHMETIC OPERATIONS ===" << endl;
    cout << "a = " << a << ", b = " << b << endl << endl;
    
    // Basic arithmetic operations
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Division (a / b): " << a / b << endl;
    cout << "Modulus (a % b): " << a % b << endl;
    
    // Combined operations
    cout << "\n=== COMBINED OPERATIONS ===" << endl;
    cout << "(a + b) * 2: " << (a + b) * 2 << endl;
    cout << "a * b + 10: " << a * b + 10 << endl;
    
    return 0;
}