#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Base parking slot fee." << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 10.0;
        if (hours > 5) {
            fee *= 0.9;
        }
        cout << "Two-wheeler final fee: " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30.0;
        if (hours > 5) {
            fee *= 0.9;
        }
        cout << "Four-wheeler final fee: " << fee << endl;
    }
};

int main() {
    ParkingSlot* s1 = new TwoWheelerSlot();
    ParkingSlot* s2 = new FourWheelerSlot();

    s1->calculateFee(6);
    s2->calculateFee(4);

    delete s1;
    delete s2;
    return 0;
}