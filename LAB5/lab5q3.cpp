#include <iostream>
#include <numeric>

// 1. Total of an integer array
int calculateTotal(const int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

// 2. Total of a floating-point array
double calculateTotal(const double arr[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

// 3. Total of a specified portion of an integer array (first 'count' elements)
int calculateTotal(const int arr[], int size, int count) {
    if (count > size) count = size; // Guard against out-of-bounds
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += arr[i];
    }
    return total;
}

// 4. Total of a specified portion of a floating-point array (first 'count' elements)
double calculateTotal(const double arr[], int size, int count) {
    if (count > size) count = size; // Guard against out-of-bounds
    double total = 0.0;
    for (int i = 0; i < count; ++i) {
        total += arr[i];
    }
    return total;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {2.5, 4.1, 3.4, 1.2, 5.8};
    
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    // Entire arrays
    std::cout << "Sum of integer array: " << calculateTotal(intArr, intSize) << std::endl;
    std::cout << "Sum of float array: " << calculateTotal(doubleArr, doubleSize) << std::endl;

    // Portions of arrays (e.g., first 3 elements)
    std::cout << "Sum of first 3 integers: " << calculateTotal(intArr, intSize, 3) << std::endl;
    std::cout << "Sum of first 2 floats: " << calculateTotal(doubleArr, doubleSize, 2) << std::endl;

    return 0;
}