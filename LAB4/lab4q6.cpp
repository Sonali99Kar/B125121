#include <iostream>
#include <string>

// Forward declaration of SecuritySystem so Door knows it exists
class SecuritySystem;

class Door {
private:
    int doorNumber;
    bool isLocked; // true = Locked, false = Unlocked

public:
    // Constructor
    Door(int number, bool status) : doorNumber(number), isLocked(status) {}

    // Declare SecuritySystem as a friend class
    friend class SecuritySystem;
};

class SecuritySystem {
public:
    // Member function to check and display lock status of a Door object
    void checkLockStatus(const Door& d) {
        std::cout << "\n--- Security System Check ---" << std::endl;
        std::cout << "Door Number : " << d.doorNumber << std::endl;
        
        if (d.isLocked) {
            std::cout << "Lock Status : Locked" << std::endl;
        } else {
            std::cout << "Lock Status : Unlocked" << std::endl;
        }
    }
};

int main() {
    // Creating Door objects
    Door frontDoor(199, true);
    Door backDoor(103, false);

    // Creating a SecuritySystem object
    SecuritySystem secSys;

    // Checking status of doors
    secSys.checkLockStatus(frontDoor);
    secSys.checkLockStatus(backDoor);

    return 0;
}