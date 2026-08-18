#include <iostream>
#include <string>

class FoodOrder {
private:
    int orderID;
    std::string foodItem;
    int quantity;
    double price; // Price per item

public:
    // Constructor to initialize food order details
    FoodOrder(int id, std::string item, int qty, double p)
        : orderID(id), foodItem(item), quantity(qty), price(p) {}

    // Declaring friend function inside FoodOrder class
    friend void calculateBill(const FoodOrder& order);
};

// Definition of the friend function
void calculateBill(const FoodOrder& order) {
    double totalBill = order.quantity * order.price;

    std::cout << "\n--- Food Order Details ---" << std::endl;
    std::cout << "Order ID    : " << order.orderID << std::endl;
    std::cout << "Food Item   : " << order.foodItem << std::endl;
    std::cout << "Quantity    : " << order.quantity << std::endl;
    std::cout << "Price/Item  : " << order.price << std::endl;
    std::cout << "Total Bill  : " << totalBill << std::endl;
}

int main() {
    // Creating a FoodOrder object
    FoodOrder myOrder(99, "cabbage roll ", 2, 50);

    // Calculating and displaying the bill using the friend function
    calculateBill(myOrder);

    return 0;
}