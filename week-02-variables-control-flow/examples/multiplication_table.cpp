/**
 * @file multiplication_table.cpp
 * @brief Multiplication Table Generator
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Generates multiplication table for a given number.
 */

#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "=== MULTIPLICATION TABLE GENERATOR ===" << endl;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "\nMultiplication table of " << num << ":" << endl;
    cout << "--------------------------------" << endl;
    
    // Generate table from 1 to 10
    for (int j = 1; j <= 10; j++) {
        cout << num << " x " << j << " = " << num * j;
        
        // Formatting: add tab for even rows
        if (j % 2 == 0) {
            cout << "\t\t" << num << " x " << j + 10 << " = " << num * (j + 10);
        }
        cout << endl;
    }
    
    // Alternative: Display in two columns
    cout << "\n=== TWO-COLUMN FORMAT ===" << endl;
    for (int i = 1; i <= 10; i += 2) {
        cout << num << " x " << i << " = " << num * i << "\t\t";
        cout << num << " x " << i + 1 << " = " << num * (i + 1) << endl;
    }
    
    return 0;
}