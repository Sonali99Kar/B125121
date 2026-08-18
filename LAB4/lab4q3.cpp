#include <iostream>
#include <string>

class ParkingSlot {
private:
    int slotNumber;
    std::string vehicleNumber;
    bool isOccupied; // Boolean variable representing occupancy status

public:
    // Constructor
    ParkingSlot(int slotNum, std::string vehicleNum, bool occupied)
        : slotNumber(slotNum), vehicleNumber(vehicleNum), isOccupied(occupied) {}

    // Declaring friend function inside the ParkingSlot class
    friend void checkSlot(const ParkingSlot& slot);
};

// Definition of the friend function
void checkSlot(const ParkingSlot& slot) {
    std::cout << "\n--- Parking Slot " << slot.slotNumber << " Status ---" << std::endl;

    if (slot.isOccupied) {
        std::cout << "Status        : Occupied" << std::endl;
        std::cout << "Vehicle Number: " << slot.vehicleNumber << std::endl;
    } else {
        std::cout << "Status        : Available" << std::endl;
    }
}

int main() {
    // Creating ParkingSlot objects (one occupied, one available)
    ParkingSlot slot1(101, "OR-02-AB-1234", true);
    ParkingSlot slot2(102, "", false);

    // Checking status of each slot using the friend function
    checkSlot(slot1);
    checkSlot(slot2);

    return 0;
}