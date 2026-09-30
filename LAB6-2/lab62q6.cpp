#include <iostream>
using namespace std;

void lngep(float *dur, int count) {
    float mxdur = *dur; // first elemnt
    
    for (int i = 1; i < count; i++) {
        if (*(dur + i) > mxdur) {
            mxdur = *(dur + i);
        }
    }
// dispkay
    cout << "Longest episode duration: " << mxdur << " mins" << endl;
}

int main() {
    float dur[6] = { 99.9 , 9.9 , 9.2 ,9.3 , 9.99, 9.96,} ; 

    lngep(dur, 6);

    return 0;
}
