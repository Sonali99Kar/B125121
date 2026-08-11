#include <iostream>
#include <string>
#include <iomanip>

struct Product {
    int id;
    std::string name;
    float price;
    int quantity;
};

int main() {
    int n;
    std::cout << "Enter number of products: ";
    std::cin >> n;

    // Dynamically allocate memory for n products
    Product* cart = new Product[n];

    // 1. Accept product details
    for (int i = 0; i < n; i++) {
        std::cout << "\nProduct " << i + 1 << ":\n";
        
        std::cout << "ID: ";
        std::cin >> cart[i].id;

        std::cin.ignore(); // Clear newline buffer
        std::cout << "Name: ";
        std::getline(std::cin, cart[i].name);

        std::cout << "Price: ";
        std::cin >> cart[i].price;

        std::cout << "Quantity: ";
        std::cin >> cart[i].quantity;
    }

    // 2. Display details and calculate total
    float grandTotal = 0.0;

    std::cout << "\n--- SHOPPING CART ---\n";
    std::cout << "ID\tName\tPrice\tQty\tTotal\n";

    for (int i = 0; i < n; i++) {
        float itemTotal = cart[i].price * cart[i].quantity;
        grandTotal += itemTotal;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << cart[i].id << "\t" 
                  << cart[i].name << "\t" 
                  << cart[i].price << "\t" 
                  << cart[i].quantity << "\t" 
                  << itemTotal << "\n";
    }

    std::cout << "\nGrand Total: " << grandTotal << "\n";

    // 3. Free dynamically allocated memory
    delete[] cart;
    cart = nullptr;

    return 0;
}