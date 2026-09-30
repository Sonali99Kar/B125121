include <iostream>
#include <string>

using namespace std;

class Cart {
private:
    string productName;
    double price;
    int quantity;

public:
    // Parameterized constructor
    Cart(string name = "", double p = 0.0, int q = 0) {
        productName = name;
        price = p;
        quantity = q;
    }

    // Overloading the '+' operator to combine items if product names match
    Cart operator+(const Cart& c) const {
        if (this->productName == c.productName) {
           
            int totalQty = this->quantity + c.quantity;
            return Cart(productName, price, totalQty);
        } else {
            cout << "Warning: Different products cannot be combined! Returning first item." << endl;
            return *this;
        }
    }

    // Function to calculate and return the total value (price * quantity)
    double getTotalValue() const {
        return price * quantity;
    }

    // Function to display cart item details
    void display() const {
        cout << "Product: " << productName 
             << " | Unit Price: $" << price 
             << " | Quantity: " << quantity 
             << " | Total Value: $" << getTotalValue() << endl;
    }
};

int main() {
    // Initializing cart items
    Cart item1("Laptop", 800.0, 1);
    Cart item2("Laptop", 800.0, 2);

    cout << "Item 1 details:" << endl;
    item1.display();

    cout << "Item 2 details:" << endl;
    item2.display();

    // Adding two Cart objects using the overloaded '+' operator
    Cart cartResult = item1 + item2;

    cout << "\nResult after adding Item 1 + Item 2:" << endl;
    cartResult.display();

    return 0;
}
