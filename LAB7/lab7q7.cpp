#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
};

// First derived class using virtual inheritance to avoid duplication
class Student : virtual public Person {
protected:
    int rollNo;
    float cgpa;
public:
    Student(string n, int a, int r, float c) : Person(n, a), rollNo(r), cgpa(c) {}
};

// Second derived class using virtual inheritance
class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;
public:
    Employee(string n, int a, int id, double sal) : Person(n, a), employeeID(id), salary(sal) {}
};

// Derived class via Hybrid/Multiple Inheritance
class TeachingAssistant : public Student, public Employee {
public:
    // Constructor initializes all base classes directly
    TeachingAssistant(string n, int a, int r, float c, int id, double sal)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, sal) {}

    void display() {
        cout << "--- University Personnel Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main() {
    // Create an object of TeachingAssistant
    TeachingAssistant ta("Rahul Sharma", 21, 1045, 9.2, 501, 25000.0);
    
    // Display all information
    ta.display();
    
    return 0;
}