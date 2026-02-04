/**
 * @file coffee_machine.cpp
 * @brief Exercise 6: Coffee Machine Simulator
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Simulates coffee preparation time based on type and cup size.
 */

#include<iostream>
using namespace std;

int main() {
    char coffee_type;
    bool is_double, is_manual;
    double A = 5, B = 7, C = 10;  // Base times for zones
    
    cout << "=== COFFEE MACHINE SIMULATOR ===" << endl;
    
    // Get user input
    cout << "Enter coffee type (B for Black, W for White): ";
    cin >> coffee_type;
    
    cout << "Is the cup size double? (1 for Yes, 0 for No): ";
    cin >> is_double;
    
    cout << "Is the preparation manual? (1 for Yes, 0 for No): ";
    cin >> is_manual;
    
    // Adjust base times for express delivery
    if (is_manual) {
        A *= 1.5;
        B *= 1.5;
        C *= 1.5;
    }
    
    // Calculate times for each step
    cout << "\n=== PREPARATION TIMES ===" << endl;
    
    // Put Water time
    if (coffee_type == 'W' || coffee_type == 'w') {
        cout << "Put Water time: " << 15 * (1 + 0.5 * is_double) << " minutes" << endl;
    } else if (coffee_type == 'B' || coffee_type == 'b') {
        cout << "Put Water time: " << 20 * (1 + 0.5 * is_double) << " minutes" << endl;
    }
    
    // Sugar time
    if (coffee_type == 'W' || coffee_type == 'w') {
        cout << "Sugar time: " << 15 * (1 + 0.5 * is_double) << " minutes" << endl;
    } else if (coffee_type == 'B' || coffee_type == 'b') {
        cout << "Sugar time: " << 20 * (1 + 0.5 * is_double) << " minutes" << endl;
    }
    
    // Add Coffee time
    if (coffee_type == 'W' || coffee_type == 'w') {
        cout << "Add Coffee time: " << 2 * (1 + 0.5 * is_double) << " minutes" << endl;
    } else if (coffee_type == 'B' || coffee_type == 'b') {
        cout << "Add Coffee time: " << 15 * (1 + 0.5 * is_double) << " minutes" << endl;
    }
    
    // Add Milk time (only for white coffee)
    if (coffee_type == 'W' || coffee_type == 'w') {
        cout << "Add Milk time: " << 4 * (1 + 0.5 * is_double) << " minutes" << endl;
    } else {
        cout << "Add Milk time: 0 minutes (Black coffee)" << endl;
    }
    
    // Mix Well time (same for both)
    cout << "Mix Well time: " << 20 * (1 + 0.5 * is_double) << " minutes" << endl;
    
    return 0;
}