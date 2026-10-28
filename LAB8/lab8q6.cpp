#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Base security scan." << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic scanner detected threats: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int remaining = threats * 0.1;
        cout << "Advanced scanner - Detected: " << threats << ", Remaining after removal: " << remaining << endl;
    }
};

int main() {
    SecurityScanner* s1 = new BasicScanner();
    SecurityScanner* s2 = new AdvancedScanner();

    s1->scan(50);
    s2->scan(50);

    delete s1;
    delete s2;
    return 0;
}