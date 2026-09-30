#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char snt[] = " I am SONALI having id 121";
    char *ptr = snt;

    int digits = 0, alpha = 0, spaces = 0;
    //check 

    while (*ptr != '\0') {
        if (isdigit(*ptr)) {
            digits++;
        } else if (isalpha(*ptr)) {
            alpha++;
        } else if (isspace(*ptr)) {
            spaces++;
        }
        ptr++; 
    }
    //display

    cout << "Sentence: " << snt << endl;
    cout << "Alphabetic characters: " << alpha << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
