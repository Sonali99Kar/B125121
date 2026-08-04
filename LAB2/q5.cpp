#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double basicSalary;
    double hra;
    double da;
    double grossSalary;

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = 0.20 * basicSalary;
        da = 0.10 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }

    void displaySalaryDetails() {
        cout << "\n--- Employee Salary Details ---" << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << hra << endl;
        cout << "DA (10%): " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.calculateSalary();
    emp.displaySalaryDetails();
    return 0;
}