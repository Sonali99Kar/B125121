#include <iostream>
#include <iomanip> // For formatting output decimal places

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Number of elements must be greater than 0." << std::endl;
        return 1;
    }

    // Dynamically allocate memory for n floats
    float* arr = new float[n];
    float sum = 0.0f;

    // Read numbers and accumulate sum
    std::cout << "Enter " << n << " floating-point numbers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> arr[i];
        sum += arr[i];
    }

    // Calculate average
    float average = sum / n;

    // Display results formatted to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nSum = " << sum << std::endl;
    std::cout << "Average = " << average << std::endl;

    // Release dynamically allocated memory
    delete[] arr;
    arr = nullptr;

    return 0;
}