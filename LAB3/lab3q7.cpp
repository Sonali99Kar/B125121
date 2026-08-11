#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    // 1. Allocate array of row pointers
    int** matrix = new int*[rows];

    // 2. Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // 3. Accept matrix elements
    std::cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    // 4. Display matrix
    std::cout << "\nThe Matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n"; // Move to next line after each row
    }

    // 5. Deallocate memory in reverse order
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; // Delete individual row arrays
    }
    delete[] matrix;        // Delete row pointers array
    matrix = nullptr;

    return 0;
}