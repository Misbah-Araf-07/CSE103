/*Create a program that uses a pointer to walk through an integer array and prints each element.
Don't use array indexing (arr[i]), only pointer arithmetic. */

#include <stdio.h>

void printArray(int *arr, int size) {
    int *ptr = arr;  
    printf("Array elements: ");
    
    
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);  
        ptr++;                
    }
    printf("\n");
    
    
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    printArray(numbers, size);
    return 0;
}
