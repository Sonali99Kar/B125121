#include <iostream>
using namespace std;

void update(int *marks, int n) {
    for (int i = 0; i < n; i++) {
        *(marks + i) += 5; // add mark
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *marks = new int[n]; // dynamic 
    cout << "Enter marks of " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }

    cout << "\nMarks before :  ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
    cout << endl;

    update(marks, n);

    cout << "Marks after adding 5 grace marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
    cout << endl;

    delete[] marks; // release the memory
    return 0;
}