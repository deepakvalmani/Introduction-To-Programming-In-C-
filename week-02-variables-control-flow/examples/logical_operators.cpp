/**
 * @file logical_operators.cpp
 * @brief Logical Operators
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Demonstrates AND (&&), OR (||), and NOT (!) operators.
 */

#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasLicense, hasCar;
    
    cout << "=== LOGICAL OPERATORS ===" << endl;
    
    // Get user input
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Do you have a driver's license? (1 for yes, 0 for no): ";
    cin >> hasLicense;
    
    cout << "Do you have a car? (1 for yes, 0 for no): ";
    cin >> hasCar;
    
    cout << "\n=== DECISION MAKING ===" << endl;
    
    // AND operator (&&) - both conditions must be true
    if (age >= 18 && hasLicense) {
        cout << "You can drive legally." << endl;
    } else {
        cout << "You cannot drive legally." << endl;
    }
    
    // OR operator (||) - at least one condition must be true
    if (hasLicense || hasCar) {
        cout << "You have either a license or a car." << endl;
    }
    
    // NOT operator (!) - reverses the condition
    if (!hasCar) {
        cout << "You don't have a car." << endl;
    }
    
    // Combined conditions
    if ((age >= 16 && age < 18) && hasLicense) {
        cout << "You have a learner's permit." << endl;
    }
    
    // Complex condition
    if (age >= 18 && hasLicense && !hasCar) {
        cout << "You can drive but need to rent/buy a car." << endl;
    }
    
    // Example: Number range checking
    int number;
    cout << "\nEnter a number between 1 and 100: ";
    cin >> number;
    
    if (number >= 1 && number <= 100) {
        cout << "Valid number in range." << endl;
    } else {
        cout << "Number out of range!" << endl;
    }
    
    return 0;
}