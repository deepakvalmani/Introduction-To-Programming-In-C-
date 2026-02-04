/**
 * @file university_admission.cpp
 * @brief Exercise 4: University Admission System
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Determines university admission based on FSC and NTS marks.
 */

#include <iostream>
using namespace std;

int main() {
    double nts_marks, fsc_marks;
    
    cout << "=== UNIVERSITY ADMISSION SYSTEM ===" << endl;
    cout << "Enter your FSC marks (%): ";
    cin >> fsc_marks;
    cout << "Enter your NTS marks (%): ";
    cin >> nts_marks;
    
    cout << "\n=== ADMISSION RESULTS ===" << endl;
    
    // Oxford University criteria
    if (fsc_marks > 70) {
        if (nts_marks >= 70) {
            cout << "Congratulations! You got admission in:" << endl;
            cout << "- Oxford University: IT Department" << endl;
        } else if (nts_marks >= 60) {
            cout << "Congratulations! You got admission in:" << endl;
            cout << "- Oxford University: Electronics Department" << endl;
        } else if (nts_marks >= 50) {
            cout << "Congratulations! You got admission in:" << endl;
            cout << "- Oxford University: Telecommunication Department" << endl;
        }
    }
    
    // MIT criteria
    if (fsc_marks >= 60 && fsc_marks <= 70 && nts_marks >= 50) {
        cout << "Congratulations! You got admission in:" << endl;
        cout << "- MIT: IT Department" << endl;
    } else if (fsc_marks >= 50 && fsc_marks < 60 && nts_marks >= 50) {
        cout << "Congratulations! You got admission in:" << endl;
        cout << "- MIT: Chemical Department" << endl;
    } else if (fsc_marks > 40 && fsc_marks < 50 && nts_marks >= 50) {
        cout << "Congratulations! You got admission in:" << endl;
        cout << "- MIT: Computer Department" << endl;
    }
    
    // Check if no admission
    if (!(fsc_marks > 70 && nts_marks >= 50) && 
        !(fsc_marks >= 40 && nts_marks >= 50)) {
        cout << "Sorry, you did not meet the admission criteria for any department." << endl;
    }
    
    return 0;
}