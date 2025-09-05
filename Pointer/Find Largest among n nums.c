//Find Maximum using Pointers. 

#include <stdio.h>

int* findMax(int *arr, int size) {
    int *maxPtr = arr;  // Assume first element is max
    
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;  // Update pointer to new max and does it until for checks n (int size) times.
        }
    }
    return maxPtr;
}

int main() {
    int numbers[] = {15, 8, 23, 42, 16};
    int size = 5;
    
    int *maxPtr = findMax(numbers, size);
    printf("Maximum value: %d\n", *maxPtr);
    printf("Address of maximum: %p\n", maxPtr);
    return 0;
}
