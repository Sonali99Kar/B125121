#include <iostream>
using namespace std;

class Distance {

    int feet;
    int inches;

public:
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void addDistances(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;

        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    void displayDistance() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, total;

    cout << "Enter First Distance:" << endl;
    d1.inputDistance();

    cout << "\nEnter Second Distance:" << endl;
    d2.inputDistance();

    total.addDistances(d1, d2);

    cout << "\nTotal Distance: ";
    total.displayDistance();

    return 0;
}