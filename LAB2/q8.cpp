#include <iostream>
#include <string>
using namespace std;

class LibraryBook {

    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    double fine;

public:
    void enterDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, bookTitle);
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Number of Days Issued: ";
        cin >> daysIssued;
    }

    void calculateFine() {
        if (daysIssued > 15) {
            fine = (daysIssued - 15) * 2;
        } else {
            fine = 0;
        }
    }

    void displayTransactionDetails() {
        cout << "\n--- Library Transaction Details ---" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Days Issued: " << daysIssued << endl;
        cout << "Late Fine Amount: ₹" << fine << endl;
    }
};

int main() {
    LibraryBook book;
    book.enterDetails();
    book.calculateFine();
    book.displayTransactionDetails();
    return 0;
}