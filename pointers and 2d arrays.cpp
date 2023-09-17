#include <iostream>

int main() {
    // Declare a 2D integer array (3x3)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Declare a pointer to an integer (int*)
    int* ptr;

    // Assign the address of the first element of the array to the pointer
    ptr = &matrix[0][0];

    // Use pointer arithmetic to access elements
    std::cout << "Using pointers to access elements of the 2D array:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Use the pointer to access elements
            std::cout << *(ptr + i * 3 + j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
