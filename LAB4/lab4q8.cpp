#include <iostream>
#include <string>

// Forward declaration of TicketChecker
class TicketChecker;

class TrainSeat {
private:
    int seatNumber;
    std::string passengerName;
    bool isBooked; // true = Booked, false = Available

public:
    // Constructor
    TrainSeat(int number, std::string name, bool booked)
        : seatNumber(number), passengerName(name), isBooked(booked) {}

    // Declare TicketChecker as a friend class
    friend class TicketChecker;
};

class TicketChecker {
public:
    // 1. Display full seat details
    void displaySeatDetails(const TrainSeat& seat) {
        std::cout << "\n--- Seat Details ---" << std::endl;
        std::cout << "Seat Number   : " << seat.seatNumber << std::endl;
        std::cout << "Booking Status: " << (seat.isBooked ? "Booked" : "Available") << std::endl;
        if (seat.isBooked) {
            std::cout << "Passenger Name: " << seat.passengerName << std::endl;
        }
    }

    // 2. Check whether the seat is booked or available
    void checkBookingStatus(const TrainSeat& seat) {
        std::cout << "Seat " << seat.seatNumber << " is currently " 
                  << (seat.isBooked ? "BOOKED." : "AVAILABLE.") << std::endl;
    }

    // 3. Display the passenger name if the seat is booked
    void displayPassengerName(const TrainSeat& seat) {
        if (seat.isBooked) {
            std::cout << "Seat " << seat.seatNumber << " Passenger: " << seat.passengerName << std::endl;
        } else {
            std::cout << "Seat " << seat.seatNumber << " is not booked by any passenger." << std::endl;
        }
    }
};

int main() {
    // Creating TrainSeat objects
    TrainSeat seat1(12, "Sanghamitra", true);
    TrainSeat seat2(13, "", false);

    // Creating a TicketChecker object
    TicketChecker checker;

    // Testing operations for Seat 1
    checker.displaySeatDetails(seat1);
    checker.checkBookingStatus(seat1);
    checker.displayPassengerName(seat1);

    // Testing operations for Seat 2
    checker.displaySeatDetails(seat2);
    checker.checkBookingStatus(seat2);
    checker.displayPassengerName(seat2);

    return 0;
}