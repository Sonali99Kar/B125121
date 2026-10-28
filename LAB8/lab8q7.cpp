#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int firstInningsScore) {
        cout << "Base match target calculation." << endl;
    }
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01);
        int target = firstInningsScore + margin;
        cout << "T20 Target Score: " << target << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02);
        int target = firstInningsScore + margin;
        cout << "ODI Target Score: " << target << endl;
    }
};

int main() {
    MatchFormat* m1 = new T20Match();
    MatchFormat* m2 = new ODIMatch();

    m1->calculateTarget(180);
    m2->calculateTarget(300);

    delete m1;
    delete m2;
    return 0;
}