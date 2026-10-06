#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Person constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Person constructor" << endl;
    }
};

// Intermediate derived class
class Employee : public Person {
protected:
    int employeeID;
    double salary;

public:
    // Employee constructor initializing Person as well
    Employee(string n, int a, int id, double sal) : Person(n, a), employeeID(id), salary(sal) {
        cout << "Employee constructor" << endl;
    }
};

// Most derived class
class Manager : public Employee {
private:
    string department;

public:
    // Manager constructor initializing Employee (which initializes Person)
    Manager(string n, int a, int id, double sal, string dept) 
        : Employee(n, a, id, sal), department(dept) {
        cout << "Manager constructor" << endl;
    }

    // Function to display all initialized information
    void display() {
        cout << "\n--- Manager Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create an object of Manager
    // This will trigger the constructors in the order of inheritance hierarchy
    Manager mgr("Prakash Jena", 35, 102, 75000.0, "Software Engineering");
    
    // Display all information
    mgr.display();
    
    return 0;
}