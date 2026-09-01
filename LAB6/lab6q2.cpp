#include <iostream>
using namespace std;

int main() {
    float wlvl = 190.9; // initial
    float *ptr = &wlvl;

  // diplay
    cout << "Current Water Level: " << *ptr << " L" << endl;

    // add
    *ptr += 99;
    cout << "After adding 100 L: " << *ptr << " L" << endl;

    // remove
    *ptr -= 2;

    // final level
    cout << "Final Water Level: " << *ptr << " L" << endl;

    return 0;
}