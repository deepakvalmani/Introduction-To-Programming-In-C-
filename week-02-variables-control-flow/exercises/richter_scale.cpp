/**
 * @file richter_scale.cpp
 * @brief Exercise 7: Richter Scale Earthquake Classifier
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Classifies earthquake damage based on Richter scale magnitude.
 */

#include<iostream>
using namespace std;

int main() {
    double scale_num;
    
    cout << "=== RICHTER SCALE EARTHQUAKE CLASSIFIER ===" << endl;
    cout << "Enter the Richter Scale Number: ";
    cin >> scale_num;
    
    // Input validation
    if (scale_num < 1) {
        cout << "Invalid input! Richter scale must be >= 1.0" << endl;
        return 1;
    }
    
    cout << "\n=== EARTHQUAKE IMPACT ===" << endl;
    
    // Classify based on magnitude
    if (scale_num < 5.0) {
        cout << "Little or no Damage." << endl;
    } else if (scale_num >= 5.0 && scale_num < 5.5) {
        cout << "Some Damage." << endl;
    } else if (scale_num >= 5.5 && scale_num < 6.5) {
        cout << "Serious damage: walls may crack or fall." << endl;
    } else if (scale_num >= 6.5 && scale_num < 7.5) {
        cout << "Disaster: House and Buildings may collapse." << endl;
    } else if (scale_num >= 7.5) {
        cout << "Catastrophe: most buildings destroyed." << endl;
    }
    
    // Additional information based on magnitude
    cout << "\n=== ADDITIONAL INFORMATION ===" << endl;
    if (scale_num >= 8.0) {
        cout << "This is a MAJOR earthquake!" << endl;
        cout << "Expect widespread destruction and tsunami warnings." << endl;
    } else if (scale_num >= 6.0) {
        cout << "This is a STRONG earthquake!" << endl;
        cout << "Seek shelter immediately." << endl;
    }
    
    return 0;
}