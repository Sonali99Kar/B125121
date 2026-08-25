#include <iostream>

// 1. Two Integers: Returns the larger number
int processData(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// 2. Integer and Float: Multiplies them together
double processData(int a, double b) {
    return a * b;
}

// 3. Two Floats: Adds them together
double processData(double a, double b) {
    return a + b;
}

// 4. Integer Array and Size: Calculates the sum of all elements
int processData(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// 5. Two Integer Pointers: Swaps the values stored in variables
void processData(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // 1. Calling function with two integers
    int num1 = 15, num2 = 25;
    std::cout << "Larger of " << num1 << " and " << num2 << ": " 
              << processData(num1, num2) << std::endl;

    // 2. Calling function with an integer and a float
    int count = 5;
    double price = 12.50;
    std::cout << "Total cost (5 * 12.50): " 
              << processData(count, price) << std::endl;

    // 3. Calling function with two floats
    double float1 = 4.5, float2 = 3.2;
    std::cout << "Sum of floats (4.5 + 3.2): " 
              << processData(float1, float2) << std::endl;

    // 4. Calling function with an array and its size
    int numbers[] = {10, 20, 30, 40};
    int size = 4;
    std::cout << "Sum of array elements: " 
              << processData(numbers, size) << std::endl;

    // 5. Calling function with two integer pointers
    int x = 100, y = 200;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    processData(&x, &y); // Passing memory addresses using '&'
    std::cout << "After swap:  x = " << x << ", y = " << y << std::endl;

    return 0;
}