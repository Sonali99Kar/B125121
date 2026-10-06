#include <iostream>
#include <string>
#include <iomanip>

// Base Class: Employee
class Employee {
protected:
    std::string name;
    double base_salary;

public:
    // Constructor
    Employee(std::string emp_name, double salary) 
        : name(emp_name), base_salary(salary) {}

    virtual ~Employee() {} // Virtual destructor for safe inheritance
};

// Intermediate Derived Class: Developer
class Developer : public Employee {
protected:
    double experience; // Experience in years

public:
    // Constructor utilizing base class constructor
    Developer(std::string emp_name, double salary, double exp) 
        : Employee(emp_name, salary), experience(exp) {}
};

// Final Derived Class: SeniorDeveloper
class SeniorDeveloper : public Developer {
private:
    double project_bonus;

public:
    // Constructor utilizing parent constructor
    SeniorDeveloper(std::string emp_name, double salary, double exp, double bonus) 
        : Developer(emp_name, salary, exp), project_bonus(bonus) {}

    // Function to calculate final salary
    // Final Salary = Base Salary + Experience Bonus + Project Bonus
    // where Experience Bonus = 5% * Base Salary * Experience
    double calculateFinalSalary() const {
        double experience_bonus = 0.05 * base_salary * experience;
        return base_salary + experience_bonus + project_bonus;
    }

    // Function to display details
    void displayDetails() const {
        double final_pay = calculateFinalSalary();
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Employee Name: " << name << "\n";
        std::cout << "Base Salary: " << base_salary << "\n";
        std::cout << "Experience: " << experience << " years\n";
        std::cout << "Project Bonus: " << project_bonus << "\n";
        std::cout << "Final Salary: " << final_pay << "\n";
    }
};

int main() {
    // Creating an instance of SeniorDeveloper
    SeniorDeveloper senior_dev("Sonali", 500000.0, 4.0, 10000.0);

    // Displaying the calculated details
    senior_dev.displayDetails();

    return 0;
}
