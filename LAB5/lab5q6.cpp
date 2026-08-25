#include <iostream>

// 1. Display a single integer
void display(int value) {
    std::cout << "Integer: " << value << std::endl;
}

// 2. Display a single floating-point number
void display(double value) {
    std::cout << "Float/Double: " << value << std::endl;
}

// 3. Display a single character
void display(char value) {
    std::cout << "Char: " << value << std::endl;
}

// 4. Display all elements of an integer array
void display(const int arr[], int size) {
    std::cout << "Integer Array: [ ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    std::cout << "]" << std::endl;
}

// 5. Display all elements of a character array
void display(const char arr[], int size) {
    std::cout << "Char Array: [ ";
    for (int i = 0; i < size; ++i) {
        std::cout << '\'' << arr[i] << '\'' << (i < size - 1 ? ", " : " ");
    }
    std::cout << "]" << std::endl;
}

int main() {
    int myInt = 42;
    double myFloat = 3.14159;
    char myChar = 'Z';

    int intArr[] = {1, 2, 3, 4, 5};
    char charArr[] = {'H', 'e', 'l', 'l', 'o'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    // Single value calls
    display(myInt);
    display(myFloat);
    display(myChar);

    // Array calls
    display(intArr, intSize);
    display(charArr, charSize);

    return 0;
}