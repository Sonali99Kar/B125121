#include <iostream>
int main() {
    int n;

    // Prompt user for array size
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Dynamically allocate memory for n integers
    int* arr = new int[n];

    // Read array elements from user
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Display array elements
    std::cout << "\nThe elements in the array are: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Free dynamically allocated memory
    delete[] arr;
    arr = nullptr; // Good practice to avoid dangling pointer

    return 0;
}