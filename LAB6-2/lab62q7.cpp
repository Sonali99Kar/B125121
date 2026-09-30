#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Parameterized Constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Overloading the '==' operator to compare two Date objects
    bool operator==(const Date& d) const {
        return (day == d.day) && (month == d.month) && (year == d.year);
    }

    // Function to display the date
    void display() const {
        if (day < 10) cout << "0";
        cout << day << "-";
        if (month < 10) cout << "0";
        cout << month << "-" << year << endl;
    }
};

int main() {
    // Initializing date1 and date2 using the parameterized constructor
    Date date1(15, 8, 2026);
    Date date2(15, 8, 2024);

    // Displaying the dates
    cout << "Date 1: ";
    date1.display();

    cout << "Date 2: ";
    date2.display();

    cout << "\nComparison Result:\n";
    
    // Using the overloaded '==' operator
    if (date1 == date2) {
        cout << "Both dates are the SAME." << endl;
    } else {
        cout << "Both dates are DIFFERENT." << endl;
    }

    return 0;
}
