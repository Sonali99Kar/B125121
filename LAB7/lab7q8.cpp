#include <iostream>
#include <string>
using namespace std;

// Base class with protected data members
class Patient {
protected:
    string patientName;
    int patientID;
    int age;

public:
    // Constructor to initialize patient details
    Patient(string name, int id, int a) {
        patientName = name;
        patientID = id;
        age = a;
    }
};

// Derived class representing an InPatient
class InPatient : public Patient {
private:
    double roomChargesPerDay;
    int numberOfDays;

public:
    // Constructor initializing both base and derived class members
    InPatient(string name, int id, int a, double charges, int days) 
        : Patient(name, id, a) {
        roomChargesPerDay = charges;
        numberOfDays = days;
    }

    // Function to calculate the total hospital bill
    double calculateBill() {
        return roomChargesPerDay * numberOfDays;
    }

    // Function to display bill and patient details
    void displayBill() {
        cout << "--- Hospital In-Patient Bill ---" << endl;
        // Accessing protected members directly inside the derived class
        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges Per Day: Rs. " << roomChargesPerDay << endl;
        cout << "Number of Days: " << numberOfDays << endl;
        cout << "Total Hospital Bill: Rs. " << calculateBill() << endl;
    }
};

int main() {
    // Create an InPatient object
    InPatient patient1("Ananya Mohapatra", 1023, 22, 1500.0, 5);
    
    // Display the details and bill
    patient1.displayBill();
    
    return 0;
}