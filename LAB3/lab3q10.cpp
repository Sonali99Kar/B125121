#include <iostream>
#include <string>
#include <iomanip>

class Employee {
private:
    int id;
    std::string name;
    float basicSalary;
    int months;
    float* earnings; // Dynamic array for monthly earnings

public:
    // 1. Accept employee details and allocate dynamic memory
    void acceptDetails() {
        std::cout << "Enter Employee ID: ";
        std::cin >> id;

        std::cin.ignore(); // Clear newline character
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Basic Salary: ";
        std::cin >> basicSalary;

        std::cout << "Enter Number of Months: ";
        std::cin >> months;

        // Allocate dynamic memory on the heap
        earnings = new float[months];

        // 2. Accept monthly earnings
        std::cout << "\nEnter earnings for " << months << " months:\n";
        for (int i = 0; i < months; i++) {
            std::cout << "Month " << i + 1 << ": ";
            std::cin >> earnings[i];
        }
    }

    // 3, 4, 5 & 6. Analyze and display complete salary details
    void displayAnalysis() {
        float total = 0.0;
        int highestMonthIndex = 0;

        for (int i = 0; i < months; i++) {
            total += earnings[i];
            if (earnings[i] > earnings[highestMonthIndex]) {
                highestMonthIndex = i; // Track index of peak earning
            }
        }

        float average = total / months;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n--- SALARY ANALYSIS REPORT ---\n";
        std::cout << "ID             : " << id << "\n";
        std::cout << "Name           : " << name << "\n";
        std::cout << "Basic Salary   : $" << basicSalary << "\n";
        std::cout << "Total Earnings : $" << total << "\n";
        std::cout << "Average Earning: $" << average << "\n";
        std::cout << "Highest Earning: $" << earnings[highestMonthIndex] 
                  << " (Month " << highestMonthIndex + 1 << ")\n";
    }

    // 7. Destructor automatically deallocates dynamic memory
    ~Employee() {
        delete[] earnings;
        earnings = nullptr;
    }
};

int main() {
    Employee emp;

    emp.acceptDetails();
    emp.displayAnalysis();

    return 0; // Memory is automatically cleaned up here by ~Employee()
}