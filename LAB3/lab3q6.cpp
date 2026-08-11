#include <iostream>
#include <string>

class Employee {
private:
    int id;
    std::string name;
    double salary;

public:
    // Member function to accept details
    void acceptDetails(int index) {
        std::cout << "\n--- Enter details for Employee " << index + 1 << " ---" << std::endl;
        std::cout << "Enter Employee ID: ";
        std::cin >> id;
        std::cin.ignore(); // Clear remaining newline character from input buffer
        
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);
        
        std::cout << "Enter Salary: ";
        std::cin >> salary;
    }

    // Member function to display details
    void displayDetails(int index) const {
        std::cout << "\nEmployee " << index + 1 << ":" << std::endl;
        std::cout << "ID:     " << id << std::endl;
        std::cout << "Name:   " << name << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    int n;

    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Number of employees must be greater than 0." << std::endl;
        return 1;
    }

    // Dynamically allocate memory for an array of n Employee objects
    Employee* empArray = new Employee[n];

    // Accept details for each employee
    for (int i = 0; i < n; ++i) {
        empArray[i].acceptDetails(i);
    }

    // Display details of all employees
    std::cout << "\n==================================";
    std::cout << "\n       EMPLOYEE DETAILS";
    std::cout << "\n==================================";
    for (int i = 0; i < n; ++i) {
        empArray[i].displayDetails(i);
    }

    // Free the dynamically allocated array of objects
    delete[] empArray;
    empArray = nullptr;

    return 0;
}