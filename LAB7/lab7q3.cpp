#include <iostream>
#include <string>
#include <iomanip>

// Base Class: Vehicle
class Vehicle {
protected:
    std::string registration_number;
    int rental_days;

public:
    // Constructor
    Vehicle(std::string reg_no, int days) 
        : registration_number(reg_no), rental_days(days) {}

    virtual ~Vehicle() {} // Virtual destructor for safe inheritance
};

// Intermediate Derived Class: Car
class Car : public Vehicle {
protected:
    double daily_rental_rate;

public:
    // Constructor utilizing base class constructor
    Car(std::string reg_no, int days, double rate) 
        : Vehicle(reg_no, days), daily_rental_rate(rate) {}
};

// Final Derived Class: LuxuryCar
class LuxuryCar : public Car {
private:
    double luxury_charge;

public:
    // Constructor utilizing parent constructor
    LuxuryCar(std::string reg_no, int days, double rate, double charge) 
        : Car(reg_no, days, rate), luxury_charge(charge) {}

    // Function to calculate total rental cost
    // Formula: Total Cost = (Daily Rate + Luxury Charge) * Rental Days
    double calculateTotalCost() const {
        return (daily_rental_rate + luxury_charge) * rental_days;
    }

    // Function to display vehicle and rental details
    void displayDetails() const {
        double total_cost = calculateTotalCost();
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Registration Number: " << registration_number << "\n";
        std::cout << "Rental Days: " << rental_days << "\n";
        std::cout << "Daily Rental Rate: $" << daily_rental_rate << "\n";
        std::cout << "Luxury Charge (per day): $" << luxury_charge << "\n";
        std::cout << "Total Cost: $" << total_cost << "\n";
    }
};

int main() {
    // Creating an instance of LuxuryCar
    // Registration: "KA-01-HH-1234", Rental Days: 5, Daily Rate: $100.00, Luxury Charge: $50.00
    LuxuryCar my_luxury_car("KA-01-HH-1234", 5, 100.0, 50.0);

    // Displaying the calculated details
    my_luxury_car.displayDetails();

    return 0;
}