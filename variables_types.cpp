/**
 * @file variables_types.cpp
 * @brief Variables and Data Types
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Demonstrates different data types and variable declarations.
 */

#include <iostream>
#include <string>        // Required for string type
using namespace std;

int main() {
    // Integer types (whole numbers)
    int age = 20;
    short smallNumber = 100;
    long bigNumber = 1000000;
    
    // Floating point types (decimal numbers)
    float pi = 3.14159f;
    double salary = 45000.75;
    
    // Character type (single character)
    char grade = 'A';
    char initial = 'J';
    
    // Boolean type (true/false)
    bool isStudent = true;
    bool hasJob = false;
    
    // String type (text)
    string name = "John Doe";
    string course = "ITP C++ Programming";
    
    // Display all variables
    cout << "=== VARIABLE EXAMPLES ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Salary: $" << salary << endl;
    cout << "PI: " << pi << endl;
    cout << "Is Student: " << isStudent << endl;
    
    return 0;
}