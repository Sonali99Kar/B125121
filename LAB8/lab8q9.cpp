#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Base robot move." << endl;
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 2.0;
        cout << "Wheeled robot travel time: " << time << " seconds" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 1.2;
        cout << "Tracked robot travel time: " << time << " seconds" << endl;
    }
};

int main() {
    Robot* r1 = new WheeledRobot();
    Robot* r2 = new TrackedRobot();

    r1->move(10.0);
    r2->move(10.0);

    delete r1;
    delete r2;
    return 0;
}