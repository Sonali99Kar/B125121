#include <iostream>
#include <algorithm> // For std::max

// Overload 1: Finds the greater of two integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Overload 2: Finds the greatest of three integers
int findMax(int a, int b, int c) {
    return std::max({a, b, c});
}

// Overload 3: Finds the greater of two float numbers
float findMax(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    int i1 = 15, i2 = 42, i3 = 28;
    float f1 = 12.5f, f2 = 18.3f;

    std::cout << "Max of two integers (" << i1 << ", " << i2 << "): " 
              << findMax(i1, i2) << std::endl;

    std::cout << "Max of three integers (" << i1 << ", " << i2 << ", " << i3 << "): " 
              << findMax(i1, i2, i3) << std::endl;

    std::cout << "Max of two floats (" << f1 << ", " << f2 << "): " 
              << findMax(f1, f2) << std::endl;

    return 0;
}