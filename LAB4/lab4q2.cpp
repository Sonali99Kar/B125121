#include <iostream>
#include <string>

class Mobile {
private:
    std::string brand;
    std::string model;
    int Percentage;

public:
    // Constructor to initialize data members
    Mobile(std::string b, std::string m, int battery)
        : brand(b), model(m), Percentage(battery) {}

    // Declaring friend function inside the Mobile class
    friend void checkBattery(const Mobile& phone);
};

// Definition of the friend function
void checkBattery(const Mobile& phone) {
    std::cout << "\n--- Mobile Details ---" << std::endl;
    std::cout << "Brand             : " << phone.brand << std::endl;
    std::cout << "Model             : " << phone.model << std::endl;
    std::cout << "Battery Percentage: " << phone.Percentage << "%" << std::endl;

    // Check battery status based on percentage
    if (phone.Percentage < 20) {
        std::cout << "Battery Status    : Battery Low" << std::endl;
    } else {
        std::cout << "Battery Status    : Battery Normal" << std::endl;
    }
}

int main() {
    // Creating Mobile objects with different battery levels
    Mobile phone1("Samsung", "Galaxy S24", 85);
    Mobile phone2("Google", "Pixel 8", 15);

    // Checking battery status using the friend function
    checkBattery(phone1);
    checkBattery(phone2);

    return 0;
}