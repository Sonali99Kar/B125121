#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Default constructor
    Time() : hours(0), minutes(0) {}

    // Parameterized constructor
    Time(int h, int m) {
        hours = h;
        minutes = m;
        // Normalize in case initial minutes are >= 60
        hours += minutes / 60;
        minutes %= 60;
    }

    // Overloading the + operator
    Time operator+(const Time& t) const {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + (result.minutes / 60);
        result.minutes %= 60;
        return result;
    }

    // Function to display the time
    void display() const {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    // Example from lab manual
    Time time1(4, 45); // 4 hours 45 minutes
    Time time2(2, 30); // 2 hours 30 minutes

    Time result = time1 + time2;

    cout << "Time 1: ";
    time1.display();

    cout << "Time 2: ";
    time2.display();

    cout << "Result: ";
    result.display();

    return 0;
}
