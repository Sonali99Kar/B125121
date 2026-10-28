#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Base cloud resource cost." << endl;
    }
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0;
        if (cpuHours > 100) {
            cost *= 0.85;
        }
        cout << "Standard instance cost: " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0;
        if (cpuHours > 100) {
            cost *= 0.85;
        }
        cout << "Premium instance cost: " << cost << endl;
    }
};

int main() {
    CloudResource* c1 = new StandardInstance();
    CloudResource* c2 = new PremiumInstance();

    c1->calculateCost(120);
    c2->calculateCost(80);

    delete c1;
    delete c2;
    return 0;
}