#include <iostream>
#include <string>

// Forward declaration of Result
class Result;

class Exam {
private:
    std::string studentName;
    std::string subject;
    double marks;
    double maximumMarks;

public:
    // Constructor
    Exam(std::string name, std::string sub, double m, double maxM)
        : studentName(name), subject(sub), marks(m), maximumMarks(maxM) {}

    // Declare Result as a friend class
    friend class Result;
};

class Result {
public:
    // Member function to calculate percentage, check pass/fail, and display complete result
    void displayResult(const Exam& e) {
        // 1 & 2. Access private members and calculate percentage
        double percentage = (e.marks / e.maximumMarks) * 100.0;

        std::cout << "\n--- Online Exam Result ---" << std::endl;
        std::cout << "Student Name : " << e.studentName << std::endl;
        std::cout << "Subject      : " << e.subject << std::endl;
        std::cout << "Marks Obtained: " << e.marks << " / " << e.maximumMarks << std::endl;
        std::cout << "Percentage   : " << percentage << "%" << std::endl;

        // 3. Display Pass or Fail based on 40% criteria
        if (percentage >= 40.0) {
            std::cout << "Status       : Pass" << std::endl;
        } else {
            std::cout << "Status       : Fail" << std::endl;
        }
    }
};

int main() {
    // Creating Exam objects
    Exam student1("Sonali Swetapadma Kar", "Object Oriented Programming", 99, 100);
    Exam student2("tanya tondon", "Data Structures", 39, 100);

    // Creating a Result object
    Result res;

    // Displaying complete results using the friend class member function
    res.displayResult(student1);
    res.displayResult(student2);

    return 0;
}