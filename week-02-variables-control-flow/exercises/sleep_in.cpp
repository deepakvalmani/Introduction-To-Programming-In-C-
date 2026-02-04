/**
 * @file sleep_in.cpp
 * @brief Exercise 5: Sleep In Calculator
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Determines if you can sleep in based on weekday and vacation status.
 */

#include<iostream>
using namespace std;

int main() {
    string weekday, vacation;
    
    cout << "=== SLEEP IN CALCULATOR ===" << endl;
    cout << "Is it a weekday? (Enter Y or N): ";
    cin >> weekday;
    cout << "Are you on vacation? (Enter Y or N): ";
    cin >> vacation;
    
    cout << "\nResult: ";
    
    // Determine if you can sleep in
    if (weekday == "N" && vacation == "N") {
        cout << "sleep in True (Weekend, no vacation)" << endl;
    } else if (weekday == "Y" && vacation == "N") {
        cout << "sleep in False (Weekday, no vacation)" << endl;
    } else if (weekday == "N" && vacation == "T") {
        cout << "sleep in True (Weekend, on vacation)" << endl;
    } else if (weekday == "Y" && vacation == "Y") {
        cout << "sleep in True (Weekday, but on vacation)" << endl;
    } else {
        cout << "Invalid input! Please enter Y or N." << endl;
    }
    
    // Alternative logic using OR operator
    cout << "\n=== ALTERNATIVE LOGIC ===" << endl;
    if (weekday == "N" || vacation == "Y") {
        cout << "You CAN sleep in!" << endl;
    } else {
        cout << "You CANNOT sleep in!" << endl;
    }
    
    return 0;
}