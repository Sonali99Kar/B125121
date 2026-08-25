#include <iostream>
#include <climits>

// 1. Maximum between two integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// 2. Maximum between two integers accessed through pointers
int findMax(const int* ptr1, const int* ptr2) {
    if (ptr1 == nullptr && ptr2 == nullptr) return 0;
    if (ptr1 == nullptr) return *ptr2;
    if (ptr2 == nullptr) return *ptr1;

    return (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
}

// 3. Maximum among all elements of an array using a pointer and size
int findMax(const int* arrPtr, int size) {
    if (arrPtr == nullptr || size <= 0) {
        std::cerr << "Invalid array or size!" << std::endl;
        return INT_MIN;
    }

    int maxVal = *arrPtr; // Initialize with the first element
    for (int i = 1; i < size; ++i) {
        if (*(arrPtr + i) > maxVal) { // Pointer arithmetic access
            maxVal = *(arrPtr + i);
        }
    }
    return maxVal;
}

int main() {
    int val1 = 45, val2 = 82;
    int arr[] = {12, 67, 34, 99, 23, 85};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 1. Compare two integers
    std::cout << "Max of " << val1 << " and " << val2 << ": " 
              << findMax(val1, val2) << std::endl;

    // 2. Compare two values via integer pointers
    std::cout << "Max between pointer values (" << val1 << ", " << val2 << "): " 
              << findMax(&val1, &val2) << std::endl;

    // 3. Find max in array using array pointer and size
    std::cout << "Max in array: " 
              << findMax(arr, size) << std::endl;

    return 0;
}