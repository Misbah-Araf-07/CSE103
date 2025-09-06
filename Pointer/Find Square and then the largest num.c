#include <stdio.h>

int* findMax(int *arr, int size) {
    int *maxPtr = arr;  // Start with first element
    
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *maxPtr) {  // Compare using pointers
            maxPtr = arr + i;        // Update max pointer
        }
    }
    return maxPtr;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};  // Simple array
    int squares[5];                    // Array to store squares
    
    // Calculate and display squares
    printf("Number -> Square\n");
    for (int i = 0; i < 5; i++) {
        *(squares + i) = *(numbers + i) * *(numbers + i);  // Using pointers
        printf("%d -> %d\n", *(numbers + i), *(squares + i));
    }
    
    // Find maximum square using pointers
    int *maxPtr = findMax(squares, 5);
    
    printf("\nLargest square: %d\n", *maxPtr);
    printf("Its address: %p\n", maxPtr);
    
    return 0;
}
