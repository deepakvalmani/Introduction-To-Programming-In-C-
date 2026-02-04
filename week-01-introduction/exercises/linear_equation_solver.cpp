/**
 * @file linear_equation_solver.cpp
 * @brief Exercise 7: Linear Equation Integer Solver
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Finds integer solutions for equation 3a + 7b - 5c = 10
 * with a, b, c in range -10 to 10.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Integer roots for the given problem are: " << endl;
    
    // Triple nested loop to try all combinations
    for (int a = -10; a <= 10; a++) {
        for (int b = -10; b <= 10; b++) {
            for (int c = -10; c <= 10; c++) {
                // Check if equation is satisfied
                if (3 * a + 7 * b - 5 * c == 10) {
                    cout << "Solution found: a = " << a 
                         << ", b = " << b 
                         << ", c = " << c << endl;
                }
            }
        }
    }
    
    return 0;
}