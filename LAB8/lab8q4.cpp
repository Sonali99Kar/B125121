#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double distance) {
        cout << "Base delivery time estimation." << endl;
    }
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 20.0) * 60 + 5;
        cout << "Bike delivery time: " << time << " minutes" << endl;
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 40.0) * 60 + 2;
        cout << "Drone delivery time: " << time << " minutes" << endl;
    }
};

int main() {
    Delivery* d1 = new BikeDelivery();
    Delivery* d2 = new DroneDelivery();

    d1->estimateTime(10.0);
    d2->estimateTime(10.0);

    delete d1;
    delete d2;
    return 0;
}