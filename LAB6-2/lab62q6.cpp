#include <iostream>

using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor to initialize the counter
    Counter(int v = 0) : value(v) {}

    // 1. Overloading Prefix Increment (++c)
    Counter& operator++() {
        ++value;         // Increment the value first
        return *this;    // Return the updated current object by reference
    }

    // 2. Overloading Postfix Increment (c++)
    // The dummy int parameter differentiates postfix from prefix
    Counter operator++(int) {
        Counter temp = *this; // Save the current state
        value++;              // Increment the value
        return temp;          // Return the old state (unincremented copy)
    }

    // Function to display the value
    void display() const {
        cout << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value of c: ";
    c.display();

    // Testing Prefix Increment (++c)
    cout << "\n--- Prefix Increment (++c) ---";
    cout << "\nValue before ++c: ";
    c.display();
    
    Counter c1 = ++c; // Increment, then assign
    
    cout << "Value after ++c (c): ";
    c.display();
    cout << "Value returned to c1: ";
    c1.display();

    // Resetting c to 5 for clean demonstration of postfix
    c = Counter(5);
    cout << "\nResetting c to: ";
    c.display();

    // Testing Postfix Increment (c++)
    cout << "\n--- Postfix Increment (c++) ---";
    cout << "\nValue before c++: ";
    c.display();
    
    Counter c2 = c++; // Assign old value, then increment
    
    cout << "Value after c++ (c): ";
    c.display();
    cout << "Value returned to c2 (original value): ";
    c2.display();

    return 0;
}
