# include <iostream>
using namespace std ;
int main() {
    int seats[3] = {9, 92 ,96};
    int pos, newseat;
    cout << "original seat list : ";
    for (int i = 0; i < 3; i++) {
        cout << *(seats + i) << " ";
    }
    cout << endl;

    cout << "Enter index to modify : ";
    cin >> pos;
    cout << "Enter  new seat number: ";
    cin >> newseat ;

    // modification
    *(seats + pos) = newseat;

    // display
    cout << " modified seat list : ";
    for (int i = 0; i < 3; i++) {
        cout << *(seats + i) << " ";
    }
    cout << endl;

    return 0;
}