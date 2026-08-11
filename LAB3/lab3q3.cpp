#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Array size must be greater than 0." << std::endl;
        return 1;
    }

    // Dynamically allocate memory
    int* arr = new int[n];

    // Read elements from user
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> *(arr + i); // Pointer arithmetic access
    }

    // Determine the largest element using a pointer
    int max = *arr; // Initialize max with the first element
    for (int i = 1; i < n; ++i) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    std::cout << "\nThe largest element in the array is: " << max << std::endl;

    // Deallocate memory
    delete[] arr;
    arr = nullptr;

    return 0;
}