/**
 * @file food_ordering.cpp
 * @brief Exercise 8: Food Ordering System
 * @author ITP Student
 * @date 2024
 * @course ITP C++ Programming - Week 2
 * 
 * Implements a restaurant food ordering system with menu and bill calculation.
 */

#include <iostream>
using namespace std;

int main() {
    string choice;
    int food_num;
    int quantity;
    double total_charges = 0;
    
    // Display menu
    cout << "=== WELCOME TO ITP RESTAURANT ===" << endl;
    cout << "Menu:" << endl;
    cout << "B - Burger = Rs 200" << endl;
    cout << "F - French Fries = Rs 50" << endl;
    cout << "P - Pizza = Rs 500" << endl;
    cout << "S - Sandwiches = Rs 150" << endl;
    cout << "================================" << endl;
    
    // Get number of food types
    cout << "Enter number of food types to order: ";
    cin >> food_num;
    
    // Process each food item
    for(int i = 1; i <= food_num; i++) {
        cout << "\n--- Item " << i << " ---" << endl;
        cout << "Enter choice (B/F/P/S): ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;
        
        // Calculate cost based on choice
        if (choice == "B" || choice == "b") {
            total_charges += quantity * 200;
            cout << "Added " << quantity << " Burger(s)" << endl;
        } else if (choice == "F" || choice == "f") {
            total_charges += quantity * 50;
            cout << "Added " << quantity << " French Fries" << endl;
        } else if (choice == "P" || choice == "p") {
            total_charges += quantity * 500;
            cout << "Added " << quantity << " Pizza(s)" << endl;
        } else if (choice == "S" || choice == "s") {
            total_charges += quantity * 150;
            cout << "Added " << quantity << " Sandwich(es)" << endl;
        } else {
            cout << "Invalid choice! Item not added." << endl;
            i--;  // Decrement counter to retry this item
        }
    }
    
    // Display final bill
    cout << "\n=== FINAL BILL ===" << endl;
    cout << "Total items ordered: " << food_num << endl;
    cout << "Total charges: Rs " << total_charges << endl;
    
    // Apply discount for large orders
    if (total_charges > 1000) {
        double discount = total_charges * 0.10;  // 10% discount
        total_charges -= discount;
        cout << "Discount (10%): Rs " << discount << endl;
        cout << "Final amount after discount: Rs " << total_charges << endl;
    }
    
    cout << "\nThank you for your order!" << endl;
    
    return 0;
}