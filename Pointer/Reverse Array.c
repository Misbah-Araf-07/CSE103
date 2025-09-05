#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;           // Pointer to first element
    int *end = arr + size - 1;  // Pointer to last element
    
    while (start < end) {
        // Swap elements at start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;  // Move start pointer forward
        end--;    // Move end pointer backward
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    printf("Original array: ");
    printArray(numbers, size);
    
    reverseArray(numbers, size);
    
    printf("Reversed array: ");
    printArray(numbers, size);
    return 0;
}
