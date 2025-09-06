#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;           
    int *end = arr + size - 1;  
    
    while (start < end) 
    {   int temp = *start;
        *start = *end;
        *end = temp;
        
        start++; 
        end--;   
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
