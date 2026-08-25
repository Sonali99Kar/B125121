#include <iostream>

// 1. Search for an integer in an integer array
int search(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Returns index where target is found
        }
    }
    return -1; // Not found
}

// 2. Search for a character in a character array
int search(const char arr[], int size, char target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Returns index where target is found
        }
    }
    return -1; // Not found
}

// 3. Search for an integer within a specified index range [startIndex, endIndex]
int search(const int arr[], int size, int target, int startIndex, int endIndex) {
    // Bounds checking
    if (startIndex < 0 || endIndex >= size || startIndex > endIndex) {
        return -1;
    }

    for (int i = startIndex; i <= endIndex; ++i) {
        if (arr[i] == target) {
            return i; // Returns index where target is found
        }
    }
    return -1; // Not found
}

int main() {
    int numbers[] = {10, 25, 40, 55, 70, 85, 100};
    char letters[] = {'c', 'p', 'p', 'r', 'o', 'g'};

    int intSize = sizeof(numbers) / sizeof(numbers[0]);
    int charSize = sizeof(letters) / sizeof(letters[0]);

    // Search integer in full array
    int idx1 = search(numbers, intSize, 55);
    std::cout << "Integer 55 found at index: " << idx1 << std::endl;

    // Search character in char array
    int idx2 = search(letters, charSize, 'r');
    std::cout << "Character 'r' found at index: " << idx2 << std::endl;

    // Search integer within range (indices 0 to 2)
    int idx3 = search(numbers, intSize, 55, 0, 2);
    std::cout << "Integer 55 in range [0, 2]: " << (idx3 != -1 ? "Found" : "Not Found") << std::endl;

    // Search integer within range (indices 2 to 5)
    int idx4 = search(numbers, intSize, 55, 2, 5);
    std::cout << "Integer 55 in range [2, 5] found at index: " << idx4 << std::endl;

    return 0;
}