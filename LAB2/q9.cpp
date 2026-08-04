#include <iostream>
#include <string>
using namespace std;

class StudentResult {

    string studentName;
    int rollNumber;
    double marks[5];
    double totalMarks;
    double percentage;
    char grade;

public:
    void acceptDetails() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks for 5 subjects (out of 100 each):" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 500.0) * 100.0;

        if (percentage >= 90) grade = 'A';
        else if (percentage >= 80) grade = 'B';
        else if (percentage >= 70) grade = 'C';
        else if (percentage >= 60) grade = 'D';
        else grade = 'F';
    }

    void displayResult() {
        cout << "\n--- Student Grade Card ---" << endl;
        cout << "Name: " << studentName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << totalMarks << " / 500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    StudentResult student;
    student.acceptDetails();
    student.calculateResult();
    student.displayResult();
    return 0;
}