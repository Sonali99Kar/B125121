#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the '-' operator to subtract two Complex objects
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Function to display the complex number
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    // Initializing c1 (8 + 5i) and c2 (3 + 2i)
    Complex c1(8, 5);
    Complex c2(3, 5);

    // Subtracting c2 from c1 using the overloaded '-' operator
    Complex result = c1 - c2;

    // Displaying the results
    cout << "Complex 1: ";
    c1.display();

    cout << "Complex 2: ";
    c2.display();

    cout << "Result of subtraction (c1 - c2): ";
    result.display();

    return 0;
}
