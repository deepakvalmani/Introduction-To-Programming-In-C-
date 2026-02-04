/**
 * @file fat_calculator.cpp
 * @brief Exercise 3: Fat Calculator and Health Check
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Calculates calories from fat and checks if food is low in fat.
 */

#include <iostream>
using namespace std;

int main() {
    double calories, fat_grams, fat_cal, fat_cal_percent;
    
    cout << "=== FAT CALCULATOR ===" << endl;
    cout << "Enter the total calories: ";
    cin >> calories;
    cout << "Enter the number of fat grams: ";
    cin >> fat_grams;
    
    // Calculate calories from fat (1 gram fat = 9 calories)
    fat_cal = fat_grams * 9;
    fat_cal_percent = (fat_cal / calories) * 100;
    
    // Input validation
    if (calories < 1 || fat_grams < 1 || fat_cal > calories) {
        cout << "\nERROR: Invalid input!" << endl;
        cout << "Either the calories or fat grams were incorrectly entered." << endl;
        return 1;
    }
    
    // Display results
    cout << "\n=== RESULTS ===" << endl;
    cout << "Calories from fat: " << fat_cal << endl;
    cout << "Percentage of calories from fat: " << fat_cal_percent << "%" << endl;
    
    // Health check
    if (fat_cal_percent < 30) {
        cout << "This food is LOW in fat." << endl;
    } else {
        cout << "This food is NOT low in fat." << endl;
    }
    
    return 0;
}