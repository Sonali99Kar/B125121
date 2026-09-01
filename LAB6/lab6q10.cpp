#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of contact numbers: ";
    cin >> n;

    // dynamic memory allocation
    long long *contacts = new long long[n];

    // accept
    cout << "Enter " << n << " contact numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(contacts + i);
    }

    long long target;
    cout << "\nEnter contact number to search: ";
    cin >> target;

    // search
    long long *ptr = contacts;
    bool found = false;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == target) { 
            found = true;
            position = i + 1;
            break;
        }
    }

 // display
    if (found) {
        cout << "Contact number " << target << " found at position: " << position << endl;
    } else {
        cout << "Contact number " << target << " not found in the list." << endl;
    }

   // deallocate
    delete[] contacts;
    contacts = nullptr;

    return 0;
}