#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of table numbers: ";
    cin >> n;

    // dynamic memory allocation
    int *t = new int[n];

    // Accept
    cout << "Enter " << n << " table numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(t + i);
    }
// smallest number
    int *ptr = t;
    int smallest = *ptr; // initialize

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    cout << "\nSmallest Table Number: " << smallest << endl;

    // release the memory
    delete[] t;
    t = nullptr;

    return 0;
}
