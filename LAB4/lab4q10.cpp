#include <iostream>
#include <string>

// Forward declaration of HomeController
class HomeController;

class SmartDevice {
private:
    std::string deviceName;
    std::string deviceType;
    bool powerStatus; // true = ON, false = OFF

public:
    // Constructor
    SmartDevice(std::string name, std::string type, bool status = false)
        : deviceName(name), deviceType(type), powerStatus(status) {}

    // Declare HomeController as a friend class
    friend class HomeController;
};

class HomeController {
public:
    // 1. Display full device information
    void displayDeviceInfo(const SmartDevice& device) {
        std::cout << "\n--- Smart Device Info ---" << std::endl;
        std::cout << "Device Name : " << device.deviceName << std::endl;
        std::cout << "Device Type : " << device.deviceType << std::endl;
        std::cout << "Power Status: " << (device.powerStatus ? "ON" : "OFF") << std::endl;
    }

    // 2. Turn the device ON
    void turnOn(SmartDevice& device) {
        device.powerStatus = true;
        std::cout << device.deviceName << " (" << device.deviceType << ") has been turned ON." << std::endl;
    }

    // 3. Turn the device OFF
    void turnOff(SmartDevice& device) {
        device.powerStatus = false;
        std::cout << device.deviceName << " (" << device.deviceType << ") has been turned OFF." << std::endl;
    }

    // 4. Display the current power status
    void displayPowerStatus(const SmartDevice& device) {
        std::cout << device.deviceName << " is currently " 
                  << (device.powerStatus ? "ON." : "OFF.") << std::endl;
    }
};

int main() {
    // Creating SmartDevice objects
    SmartDevice tv("Living Room TV", "Entertainment", false);
    SmartDevice ac("Bedroom AC", "Climate Control", true);

    // Creating a HomeController object
    HomeController controller;

    // Interacting with the TV
    controller.displayDeviceInfo(tv);
    controller.turnOn(tv);
    controller.displayPowerStatus(tv);

    // Interacting with the AC
    controller.displayDeviceInfo(ac);
    controller.turnOff(ac);
    controller.displayPowerStatus(ac);

    return 0;
}