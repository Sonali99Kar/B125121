#include <iostream>
#include <string>

class Student {
private:
    int rollNumber;
    std::string name;
    float marks;

public:
    // Member function to accept student details
    void acceptDetails() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Clear newline buffer before reading string
        
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);
        
        std::cout << "Enter Marks: ";
        std::cin >> marks;
    }

    // Member function to display student details
    void displayDetails() const {
        std::cout << "\n--- Student Details ---" << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Name:        " << name << std::endl;
        std::cout << "Marks:       " << marks << std::endl;
    }
};

int main() {
    // Dynamically allocate a single Student object
    Student* studentPtr = new Student();

    // Access member functions using the arrow (->) operator
    studentPtr->acceptDetails();
    studentPtr->displayDetails();

    // Release dynamically allocated memory
    delete studentPtr;
    studentPtr = nullptr;

    return 0;
}