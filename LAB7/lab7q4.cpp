#include <iostream>
#include <string>
#include <iomanip>

// Base Class: Bank
class Bank {
protected:
    std::string accountNumber;
    double balance;

public:
    // Constructor
    Bank(std::string acc_no, double initial_balance) 
        : accountNumber(acc_no), balance(initial_balance) {}

    virtual ~Bank() {} // Virtual destructor for safe polymorphism
};

// Derived Class 1: SavingsAccount
class SavingsAccount : public Bank {
private:
    double interestRate; // e.g., 0.04 for 4%

public:
    // Constructor utilizing base class constructor
    SavingsAccount(std::string acc_no, double initial_balance, double rate) 
        : Bank(acc_no, initial_balance), interestRate(rate) {}

    // Function to update balance by adding interest
    void updateBalance() {
        double interest = balance * interestRate;
        balance += interest;
        std::cout << "[Savings Account " << accountNumber << "] Interest added: $" << interest << "\n";
    }

    // Function to display details
    void display() const {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "--- Savings Account Details ---\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Interest Rate: " << (interestRate * 100) << "%\n";
        std::cout << "Current Balance: $" << balance << "\n\n";
    }
};

// Derived Class 2: CurrentAccount
class CurrentAccount : public Bank {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    // Constructor utilizing base class constructor
    CurrentAccount(std::string acc_no, double initial_balance, double min_bal, double charge) 
        : Bank(acc_no, initial_balance), minimumBalance(min_bal), maintenanceCharge(charge) {}

    // Function to update balance by deducting maintenance charge if below minimum balance
    void updateBalance() {
        if (balance < minimumBalance) {
            balance -= maintenanceCharge;
            std::cout << "[Current Account " << accountNumber << "] Balance fell below minimum ($" 
                      << minimumBalance << "). Maintenance charge deducted: $" << maintenanceCharge << "\n";
        } else {
            std::cout << "[Current Account " << accountNumber << "] Balance is above minimum. No charge applied.\n";
        }
    }

    // Function to display details
    void display() const {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "--- Current Account Details ---\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Minimum Balance Required: $" << minimumBalance << "\n";
        std::cout << "Maintenance Charge: $" << maintenanceCharge << "\n";
        std::cout << "Current Balance: $" << balance << "\n\n";
    }
};

int main() {
    // 1. Testing Savings Account
    // Account No: "SAV-101", Initial Balance: $5000.00, Interest Rate: 5% (0.05)
    SavingsAccount savings("SAV-101", 5000.0, 0.05);
    
    std::cout << "Initial State:\n";
    savings.display();

    savings.updateBalance(); // Adds interest
    
    std::cout << "\nAfter Update:\n";
    savings.display();

    std::cout << "========================================\n\n";

    // 2. Testing Current Account (Triggering maintenance charge)
    // Account No: "CUR-202", Initial Balance: $800.00, Minimum Balance: $1000.00, Charge: $50.00
    CurrentAccount current("CUR-202", 800.0, 1000.0, 50.0);
    
    std::cout << "Initial State:\n";
    current.display();

    current.updateBalance(); // Deducts maintenance charge because balance < min balance
    
    std::cout << "\nAfter Update:\n";
    current.display();

    return 0;
}