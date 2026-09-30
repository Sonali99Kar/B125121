#include <iostream>

using namespace std;

class Temperature {
private:
    double celsius;

public:
    // Parameterized constructor
    Temperature(double c = 0.0) : celsius(c) {}

    // Overloading the '<' operator
    bool operator<(const Temperature& t) const {
        return this->celsius < t.celsius;
    }

    // Overloading the '>' operator
    bool operator>(const Temperature& t) const {
        return this->celsius > t.celsius;
    }

    // Function to display the temperature
    void display() const {
        cout << celsius << "°C";
    }
};

int main() {
    // Initializing two Temperature objects
    Temperature t1(32.5);
    Temperature t2(28.0);

    cout << "Temperature 1: ";
    t1.display();
    cout << endl;

    cout << "Temperature 2: ";
    t2.display();
    cout << endl;

    cout << "\nComparison Result:\n";

    // Using the overloaded '>' operator to find and display the higher temperature
    if (t1 > t2) {
        cout << "Higher Temperature is: ";
        t1.display();
        cout << endl;
    } else if (t2 > t1) {
        cout << "Higher Temperature is: ";
        t2.display();
        cout << endl;
    } else {
        cout << "Both temperatures are equal." << endl;
    }

    return 0;
}
