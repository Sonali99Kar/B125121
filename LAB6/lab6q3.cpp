#include <iostream>
using namespace std;

int main() {
    int equipIDs[6] = {101, 102, 103, 104, 105, 106};
    int *ptr = equipIDs;

    cout << "Equipment Details :" << endl;
    for (int i = 0; i < 6; i++) {
        // display
        cout << "ID: " << *(ptr + i) << " | Address: " << (ptr + i) << endl;
    }

    return 0;
}