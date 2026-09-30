#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

    // Helper function to normalize inches >= 12 into feet
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

public:
    // Constructor with default values
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {
        normalize();
    }

    // Overloading the '+' operator to add two Distance objects
    Distance operator+(const Distance& d) const {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        temp.normalize(); // Converts excess inches to feet if >= 12
        return temp;
    }

    // Function to display the distance
    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    // Initializing dist1 (5 ft, 8 in) and dist2 (3 ft, 7 in)
    Distance dist1(5, 8);
    Distance dist2(3, 7);

    // Adding two Distance objects using the overloaded '+' operator
    Distance result = dist1 + dist2;

    // Displaying the results
    cout << "Distance 1: ";
    dist1.display();

    cout << "Distance 2: ";
    dist2.display();

    cout << "Result of addition: ";
    result.display();

    return 0;
}
