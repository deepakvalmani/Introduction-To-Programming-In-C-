/**
 * @file triangle_type.cpp
 * @brief Exercise 2: Triangle Type Classifier
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Classifies triangle as equilateral, isosceles, or scalene.
 */

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "=== TRIANGLE TYPE CLASSIFIER ===" << endl;
    cout << "Enter lengths of the triangle sides:" << endl;
    cout << "Side a: ";
    cin >> a;
    cout << "Side b: ";
    cin >> b;
    cout << "Side c: ";
    cin >> c;
    
    // Check if valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        cout << "\nValid triangle. Type: ";
        
        // Classify triangle
        if (a == b && b == c) {
            cout << "EQUILATERAL (all sides equal)" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "ISOSCELES (two sides equal)" << endl;
        } else {
            cout << "SCALENE (all sides different)" << endl;
        }
    } else {
        cout << "\nInvalid triangle! Sum of any two sides must be greater than the third side." << endl;
    }
    
    return 0;
}