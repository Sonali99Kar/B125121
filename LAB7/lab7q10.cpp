#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, string n) : employeeID(id), name(n) {
        // Constructor for Employee
    }
};

// First derived class using virtual inheritance
class Developer : virtual public Employee {
protected:
    string programmingLanguage;

public:
    Developer(int id, string n, string lang) : Employee(id, n), programmingLanguage(lang) {}
};

// Second derived class using virtual inheritance
class Tester : virtual public Employee {
protected:
    string testingTool;

public:
    Tester(int id, string n, string tool) : Employee(id, n), testingTool(tool) {}
};

// Most derived class combining Developer and Tester via multiple inheritance
class TechLead : public Developer, public Tester {
private:
    int teamSize;

public:
    // The most-derived class (TechLead) directly initializes the virtual base class (Employee)
    TechLead(int id, string n, string lang, string tool, int size)
        : Employee(id, n), Developer(id, n, lang), Tester(id, n, tool), teamSize(size) {}

    void display() {
        cout << "--- Tech Lead Details ---" << endl;
        // Direct access to Employee members because virtual inheritance prevents ambiguity/duplication
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Programming Language: " << programmingLanguage << endl;
        cout << "Testing Tool: " << testingTool << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    // Create an object of TechLead
    TechLead lead(204, "Debashis Pradhan", "C++ & Python", "Selenium", 8);
    
    // Display all information
    lead.display();
    
    return 0;
}