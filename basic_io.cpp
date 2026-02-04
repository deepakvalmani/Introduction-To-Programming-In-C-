/**
 * @file basic_io.cpp
 * @brief Basic Input/Output Operations
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Demonstrates basic input/output operations using cin and cout.
 */

#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    string name;
    int age;
    double gpa;
    
    // Output examples
    cout << "=== BASIC I/O EXAMPLE ===" << endl;
    cout << "Enter your information:" << endl;
    
    // Input examples
    cout << "Name: ";
    cin >> name;                     // Read string input
    
    cout << "Age: ";
    cin >> age;                      // Read integer input
    
    cout << "GPA: ";
    cin >> gpa;                      // Read double input
    
    // Display collected information
    cout << "\n=== YOUR INFORMATION ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    
    return 0;
}