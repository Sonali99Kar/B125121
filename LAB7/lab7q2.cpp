#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNo;

public:
    // Constructor to initialize Student details
    Student(string n, int roll) {
        name = n;
        rollNo = roll;
    }

    // Virtual function for runtime polymorphism and overriding
    virtual void calculateResult(float marks1, float marks2, float marks3) {
        float total = marks1 + marks2 + marks3;
        cout << "--- Base Student Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

// Derived class for Regular Students
class RegularStudent : public Student {
public:
    RegularStudent(string n, int roll) : Student(n, roll) {}

    // Overriding calculateResult for regular students (normal calculation)
    void calculateResult(float marks1, float marks2, float marks3) override {
        float total = marks1 + marks2 + marks3;
        cout << "--- Regular Student Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

// Derived class for Scholarship Students
class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int roll) : Student(n, roll) {}

    // Overriding calculateResult for scholarship students (adds 5 bonus marks)
    void calculateResult(float marks1, float marks2, float marks3) override {
        float total = marks1 + marks2 + marks3 + 5.0; // Adding 5 bonus marks
        cout << "--- Scholarship Student Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks (Including 5 Bonus Marks): " << total << endl;
    }
};

int main() {
    // Create objects for Regular and Scholarship students
    RegularStudent regStudent("Akash Das", 101);
    ScholarshipStudent scholStudent("Priyanka Mohanty", 102);

    // Call calculateResult with sample marks for 3 subjects
    regStudent.calculateResult(85.0, 90.0, 78.5);
    cout << endl;
    scholStudent.calculateResult(85.0, 90.0, 78.5);

    return 0;
}