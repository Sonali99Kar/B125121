#include <iostream>
#include <string>

using namespace std;

class Item {
private:
    string name;
    double price;
    int quantity;

public:
    // Parameterized constructor
    Item(string n = "", double p = 0.0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Overloading the '+=' operator with a check for same item name
    Item& operator+=(const Item& i) {
        // Compare if the names of the items are the same
        if (this->name == i.name) {
            this->price += i.price;       // Add price
            this->quantity += i.quantity; // Add quantity
            cout << "Success: Items match! Prices and quantities added.\n";
        } else {
            cout << "Error: Cannot add! Item names do not match (" 
                 << this->name << " vs " << i.name << ").\n";
        }
        return *this;
    }

    // Function to display item details
    void display() const {
        cout << "Item Name: " << name 
             << ", Price: $" << price 
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    // Test Case 1: Same items (Should add successfully)
    cout << "--- Test Case 1: Same Items ---" << endl;
    Item item1("Laptop", 800.0, 1);
    Item item2("Laptop", 800.0, 2);

    cout << "Before:\n";
    item1.display();
    item2.display();

    cout << "\nPerforming: item1 += item2\n";
    item1 += item2;

    cout << "\nResult in Item 1:\n";
    item1.display();


    // Test Case 2: Different items (Should return a message)
    cout << "\n\n--- Test Case 2: Different Items ---" << endl;
    Item item3("Laptop", 800.0, 1);
    Item item4("Mouse", 25.0, 2);

    cout << "Before:\n";
    item3.display();
    item4.display();

    cout << "\nPerforming: item3 += item4\n";
    item3 += item4;

    cout << "\nResult in Item 3 (Unchanged):\n";
    item3.display();

    return 0;
}
