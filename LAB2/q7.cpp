#include <iostream>
#include <string>
using namespace std;

class Product {

    int productID;
    string productName;
    int quantityAvailable;
    double pricePerUnit;

public:
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);
        cout << "Enter Quantity Available: ";
        cin >> quantityAvailable;
        cout << "Enter Price per Unit: ";
        cin >> pricePerUnit;
    }

    void sellProduct(int unitsSold) {
        if (unitsSold > quantityAvailable) {
            cout << "Error: Not enough stock! Sale cancelled." << endl;
        } else if (unitsSold <= 0) {
            cout << "Invalid quantity to sell!" << endl;
        } else {
            quantityAvailable -= unitsSold;
            cout << "Successfully sold " << unitsSold << " units." << endl;
        }
    }

    void displayDetails() {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity Available: " << quantityAvailable << endl;
        cout << "Price per Unit: " << pricePerUnit << endl;
        cout << "Total Inventory Value: " << (quantityAvailable * pricePerUnit) << endl;
    }
};

int main() {
    Product p;
    p.acceptDetails();
    p.displayDetails();

    int units;
    cout << "\nEnter units to sell: ";
    cin >> units;
    p.sellProduct(units);

    p.displayDetails();
    return 0;
}