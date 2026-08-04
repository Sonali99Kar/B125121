#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {

    int consumerNumber;
    string consumerName;
    double unitsConsumed;
    double totalBill;

public:
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cin.ignore();
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    void calculateBill() {
        double units = unitsConsumed;
        totalBill = 0;

        if (units <= 100) {
            totalBill = units * 5;
        } else if (units <= 200) {
            totalBill = (100 * 5) + ((units - 100) * 7);
        } else {
            totalBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    void displayBill() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Total Amount Due: ₹" << totalBill << endl;
    }
};

int main() {
    ElectricityBill bill;
    bill.acceptDetails();
    bill.calculateBill();
    bill.displayBill();
    return 0;
}