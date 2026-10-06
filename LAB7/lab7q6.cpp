#include <iostream>
using namespace std;

// First base class
class InternalExam {
public:
    void display() {
        cout << "Internal Exam Marks: 25/30" << endl;
    }
};

// Second base class
class ExternalExam {
public:
    void display() {
        cout << "External Exam Marks: 60/70" << endl;
    }
};

// Derived class using multiple inheritance
class FinalResult : public InternalExam, public ExternalExam {
public:
    void showResults() {
        cout << "--- Final Result Details ---" << endl;
        
        // Resolving ambiguity using the scope resolution operator
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    // Create an object of the derived class
    FinalResult student;
    
    // Call the member function that handles ambiguity resolution
    student.showResults();
    
    return 0;
}