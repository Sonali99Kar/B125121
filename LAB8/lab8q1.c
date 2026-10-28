#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Generic character attack." << endl;
    }
};

class Warrior : public Character {
private:
    int strength;
public:
    Warrior(int s) : strength(s) {}
    void attack() override {
        int damage = 20 + 2 * strength;
        cout << "Warrior damage: " << damage << endl;
    }
};

class Archer : public Character {
private:
    int agility;
public:
    Archer(int a) : agility(a) {}
    void attack() override {
        int damage = 15 + 3 * agility;
        cout << "Archer damage: " << damage << endl;
    }
};

int main() {
    Character* c1 = new Warrior(10);
    Character* c2 = new Archer(8);

    c1->attack();
    c2->attack();

    delete c1;
    delete c2;
    return 0;
}
