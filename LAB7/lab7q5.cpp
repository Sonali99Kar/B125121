#include <iostream>
#include <string>
#include <iomanip>

// Base Class 1: Academic
class Academic {
protected:
    double sub1, sub2, sub3;

public:
    // Constructor
    Academic(double s1, double s2, double s3) 
        : sub1(s1), sub2(s2), sub3(s3) {}

    // Helper to get total academic marks
    double getAcademicTotal() const {
        return sub1 + sub2 + sub3;
    }
};

// Base Class 2: Sports
class Sports {
protected:
    double sport_mark;

public:
    // Constructor
    Sports(double s_mark) 
        : sport_mark(s_mark) {}

    // Helper to get sport marks
    double getSportMark() const {
        return sport_mark;
    }
};

// Derived Class: Student inheriting from both Academic and Sports
class Student : public Academic, public Sports {
private:
    std::string name;

public:
    // Constructor initializing both base classes and student-specific attributes
    Student(std::string student_name, double s1, double s2, double s3, double s_mark) 
        : Academic(s1, s2, s3), Sports(s_mark), name(student_name) {}

    // Function to calculate total marks
    // Total = Academic Marks (sub1 + sub2 + sub3) + Sport Mark
    double calculateTotal() const {
        return getAcademicTotal() + sport_mark;
    }

    // Function to calculate average marks across 4 subjects/categories (3 academic + 1 sport)
    double calculateAverage() const {
        return calculateTotal() / 4.0;
    }

    // Function to display student details and scores
    void displayDetails() const {
        double total = calculateTotal();
        double average = calculateAverage();

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "--- Student Score Card ---\n";
        std::cout << "Student Name: " << name << "\n";
        std::cout << "Subject 1: " << sub1 << "\n";
        std::cout << "Subject 2: " << sub2 << "\n";
        std::cout << "Subject 3: " << sub3 << "\n";
        std::cout << "Sports Mark: " << sport_mark << "\n";
        std::cout << "--------------------------\n";
        std::cout << "Total Marks: " << total << " / 400\n";
        std::cout << "Average Mark: " << average << "\n\n";
    }
};

int main() {
    // Creating an instance of Student
    // Name: John Doe, Subject marks: 85.5, 90.0, 78.0, Sports mark: 92.0
    Student student("John Doe", 85.5, 90.0, 78.0, 92.0);

    // Displaying calculated results
    student.displayDetails();

    return 0;
}