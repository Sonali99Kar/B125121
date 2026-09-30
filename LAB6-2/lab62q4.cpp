#include <iostream>

using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int v = 0) : value(v) {}

    // Overloading the unary '-' operator
    Number operator-() const {
        // Returns a new Number object with the negated value
        return Number(-value);
    }

    // Function to display the number
    void display() const {
        cout << value << endl;
    }
};

int main() {
    // Initializing n1 with 25
    Number n1(25);

    // Overloading the unary minus operator to assign to n2
    Number n2 = -n1;

    // Displaying the results
    cout << "n1 = ";
    n1.display();

    cout << "n2 = -n1 => n2 = ";
    n2.display();

    return 0;
}
