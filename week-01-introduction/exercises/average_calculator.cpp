/**
 * @file average_calculator.cpp
 * @brief Exercise 6: Average Calculator for Multiple Courses
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Calculates averages for 3 courses with 4 students each.
 */

#include <iostream>
using namespace std;

int main() {
    int marks;
    double avg_by_course = 0, avg_total = 0;
    
    // Outer loop: 3 courses
    for (int i = 1; i <= 3; i++) {
        avg_by_course = 0;  // Reset course average
        
        // Inner loop: 4 students per course
        for (int j = 1; j <= 4; j++) {
            cout << "Enter the marks of student " << j << " for course " << i << ": ";
            cin >> marks;
            
            // Input validation
            while (marks > 100) {
                cout << "Please input valid marks. " << endl;
                cin >> marks;
            }
            
            avg_by_course += marks;  // Add to course total
        }
        
        // Calculate course average
        avg_by_course /= 4.0;
        cout << "Average for course " << i << " = " << avg_by_course << endl;
        
        // Add to overall total
        avg_total += avg_by_course;
    }
    
    // Calculate overall average
    avg_total /= 3.0;
    cout << "Overall average = " << avg_total << endl;
    
    return 0;
}