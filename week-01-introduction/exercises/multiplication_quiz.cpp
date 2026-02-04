/**
 * @file multiplication_quiz.cpp
 * @brief Exercise 5: Multiplication Quiz Game
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Interactive multiplication quiz with random questions.
 */

#include<iostream>
#include <cstdlib>     // For rand() function
#include <ctime>       // For time() function
using namespace std;

int main() {
    int num1, num2, input, result, count_r = 0, count_w = 0;
    srand(time(NULL));  // Seed random number generator
    
    // Main quiz loop
    while(true) {
        // Generate random numbers between 1 and 10
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        
        // Display smaller number first for better presentation
        int minimum = min(num1, num2);
        int maximum = max(num1, num2);
        
        // Ask question
        cout << minimum << "*" << maximum << " = ";
        cin >> input;
        
        // Exit condition (negative number)
        if (input <= -1) {
            break;
        }
        
        cout << endl;
        result = num1 * num2;  // Calculate correct answer
        
        // Check answer
        if (input == result) {
            cout << "Correct " << endl;
            count_r++;         // Increment correct count
        }
        else {
            cout << "Wrong " << endl;
            count_w++;         // Increment wrong count
        }
    }
    
    // Display final results
    cout << endl;
    cout << "Pass = " << count_r << endl;
    cout << "Fail = " << count_w << endl;
    
    return 0;
}