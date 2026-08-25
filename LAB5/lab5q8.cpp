#include <iostream>
#include <cmath>

// 1. Count the number of digits in an integer
int count(int number) {
    if (number == 0) return 1;
    
    int digitCount = 0;
    number = std::abs(number); // Handle negative numbers
    
    while (number > 0) {
        number /= 10;
        digitCount++;
    }
    return digitCount;
}

// 2. Count the number of elements in an integer array
int count(const int arr[], int size) {
    return size; // Returns the total element count
}

// 3. Count the occurrences of a given character in a character array
int count(const char arr[], int size, char target) {
    int occurrences = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            occurrences++;
        }
    }
    return occurrences;
}

int main() {
    int num = -98765;
    int intArr[] = {10, 20, 30, 40, 50, 60};
    char charArr[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    // 1. Digit count call
    std::cout << "Number of digits in " << num << ": " 
              << count(num) << std::endl;

    // 2. Integer array element count call
    std::cout << "Number of elements in integer array: " 
              << count(intArr, intSize) << std::endl;

    // 3. Character occurrence count call
    char targetChar = 'r';
    std::cout << "Occurrences of '" << targetChar << "' in char array: " 
              << count(charArr, charSize, targetChar) << std::endl;

    return 0;
}