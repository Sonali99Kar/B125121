#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int totalMarks;

public:
    // Constructor to initialize student name and marks
    Student(string n = "", int m = 0) : name(n), totalMarks(m) {}

    // Overloading the '>' operator to compare student marks
    bool operator>(const Student& s) const {
        return this->totalMarks > s.totalMarks;
    }

    // Function to display student details
    void display() const {
        cout << "Name: " << name << ", Total Marks: " << totalMarks << endl;
    }

    // Getter for name (optional, useful for printing results)
    string getName() const {
        return name;
    }
};

int main() {
    // Initializing two student objects
    Student s1("Alice", 450);
    Student s2("Bob", 420);

    // Displaying student details
    cout << "Student 1: ";
    s1.display();

    cout << "Student 2: ";
    s2.display();

    cout << "\nComparison Result:\n";
    // Using the overloaded '>' operator
    if (s1 > s2) {
        cout << s1.getName() << " has higher marks than " << s2.getName() << "." << endl;
    } else {
        cout << s2.getName() << " has higher or equal marks than " << s1.getName() << "." << endl;
    }

    return 0;
}
