#include <iostream>

// 1. Add specified value to an integer (returns modified value)
int addValue(int base, int increment) {
    return base + increment;
}

// 2. Add specified value to a floating-point number (returns modified value)
double addValue(double base, double increment) {
    return base + increment;
}

// 3. Modify an integer value in-place using a pointer
void addValue(int* numPtr, int increment) {
    if (numPtr != nullptr) {
        *numPtr += increment; // Dereferences pointer to modify original variable
    }
}

int main() {
    int intNum = 20;
    double floatNum = 15.5;

    // 1. Add value to integer (pass by value)
    int newInt = addValue(intNum, 10);
    std::cout << "Original int: " << intNum << " | Returned sum: " << newInt << std::endl;

    // 2. Add value to double (pass by value)
    double newFloat = addValue(floatNum, 4.25);
    std::cout << "Original float: " << floatNum << " | Returned sum: " << newFloat << std::endl;

    // 3. Modify integer directly using a pointer
    std::cout << "Int before pointer modification: " << intNum << std::endl;
    addValue(&intNum, 15); // Pass memory address
    std::cout << "Int after pointer modification: " << intNum << std::endl;

    return 0;
}