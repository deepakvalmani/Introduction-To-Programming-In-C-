/**
 * @file ticket_purchase.cpp
 * @brief Exercise 3: Ticket Purchase System
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 1
 * 
 * Implements a menu-driven ticket purchasing system with discount.
 */

#include<iostream>
using namespace std;

int main() {
    int choice, seats, sopho, juniors;
    double income;
    
    // Main program loop
    while (true) {
        // Process user choice from previous iteration
        if (choice == 1) {
            // Purchase tickets
            cout << "How many tickets would you like to buy? ";
            cin >> seats;
            
            // Check seat availability
            if (seats > 500) {
                cout << "Sorry, the available seats are 500 " << endl;
            }
            else {
                cout << "How many Sopho? ";
                cin >> sopho;
                cout << "How many Juniors? ";
                cin >> juniors;
            }
        }
        
        // Calculate income
        income = (sopho * 100) + (juniors * 50);
        
        // Apply 20% discount for bulk purchase
        if (seats > 3) {
            income *= 0.8;
        }
        
        // Display information
        if (choice == 2) {
            cout << "for seats: " << seats << " " << "income: " << income << endl;
        }
        
        // Exit program
        if (choice == 3) {
            break;
        }
        
        // Display menu options
        cout << "1. Purchase a ticket \n2. Display information \n3. Exit" << endl;
        cout << "Enter your choice please: ";
        cin >> choice;
    }
    
    return 0;
}