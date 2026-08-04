#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    long long accountNumber;
    string accountHolderName;
    double balance;

public:
    void enterDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Error: Insufficient balance! Withdrawal failed." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew: " << amount << endl;
        }
    }

    void displayDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.enterDetails();
    
    account.deposit(1500.0);
    account.withdraw(50000.0); // Test over-withdrawal
    account.withdraw(500.0);
    
    account.displayDetails();
    return 0;
}