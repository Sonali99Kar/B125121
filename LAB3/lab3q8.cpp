#include <iostream>
#include <string>
#include <iomanip>

class Student {
private:
    int rollNumber;
    std::string name;
    int numSubjects;
    float* marks; // Pointer to dynamically allocate marks array

public:
    // Constructor to initialize pointer to null
    Student() : rollNumber(0), numSubjects(0), marks(nullptr) {}

    // Destructor to ensure clean memory release when object is destroyed
    ~Student() {
        delete[] marks;
        marks = nullptr;
    }

    // Function to accept student details and allocate marks array
    void acceptDetails() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Clear newline buffer

        std::cout << "Enter Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Number of Subjects: ";
        std::cin >> numSubjects;

        // Allocate memory dynamically for marks array
        marks = new float[numSubjects];

        // Accept marks for each subject
        std::cout << "Enter marks for " << numSubjects << " subjects:\n";
        for (int i = 0; i < numSubjects; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
    }

    // Function to calculate total marks
    float calculateTotal() const {
        float total = 0.0f;
        for (int i = 0; i < numSubjects; ++i) {
            total += marks[i];
        }
        return total;
    }

    // Function to calculate average marks
    float calculateAverage() const {
        if (numSubjects == 0) return 0.0f;
        return calculateTotal() / numSubjects;
    }

    // Function to display result
    void displayResult() const {
        std::cout << "\n==================================";
        std::cout << "\n         STUDENT RESULT";
        std::cout << "\n==================================";
        std::cout << "\nRoll Number : " << rollNumber;
        std::cout << "\nName        : " << name;
        std::cout << "\nSubjects    : " << numSubjects;
        
        std::cout << "\n\nMarks Obtained:";
        for (int i = 0; i < numSubjects; ++i) {
            std::cout << "\n - Subject " << i + 1 << ": " << marks[i];
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n\nTotal Marks : " << calculateTotal();
        std::cout << "\nAverage     : " << calculateAverage() << "%\n";
    }
};

int main() {
    Student s;

    s.acceptDetails();
    s.displayResult();

    return 0; // Destructor is automatically called here to release memory
}