#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Base irrigation water calculation." << endl;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2 * (100 - moisture);
        cout << "Drip irrigation water required: " << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3 * (100 - moisture);
        cout << "Sprinkler irrigation water required: " << water << " litres" << endl;
    }
};

int main() {
    IrrigationSystem* s1 = new DripIrrigation();
    IrrigationSystem* s2 = new SprinklerIrrigation();

    s1->calculateWater(40.0);
    s2->calculateWater(40.0);

    delete s1;
    delete s2;
    return 0;
} 