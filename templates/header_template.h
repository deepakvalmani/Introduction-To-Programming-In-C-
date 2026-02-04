/**
 * @file {filename}
 * @brief Brief description of the header file
 * @author Your Name
 * @date {date}
 * @course ITP C++ Programming
 * 
 * This header file contains declarations for...
 */

#ifndef {guard_name}
#define {guard_name}

// Include necessary headers
#include <iostream>
#include <string>

// Using declarations
using namespace std;

// Constant declarations
const int MAX_SIZE = 100;
const double PI = 3.14159;

// Class declarations
class ClassName {
private:
    // Private member variables
    int private_var;
    
public:
    // Constructors
    ClassName();
    ClassName(int value);
    
    // Public member functions
    void setValue(int value);
    int getValue() const;
    
    // Destructor
    ~ClassName();
};

// Function declarations
void function_name(int param);
double calculate_value(double x, double y);

#endif // {guard_name}
