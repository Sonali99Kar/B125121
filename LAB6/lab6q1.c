#include <iostream>
using namespace std;

int main() {
    int battery = 45; // initial battry
    int *ptr = &battery;

    // display
    cout << "Current Battery Percentage: " << *ptr << "%" << endl;
    // add
    *ptr += 45;

    // updated
    cout << "Updated Battery Percentage: " << *ptr << "%" << endl;

    return 0;
}
