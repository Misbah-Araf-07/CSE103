#include <stdio.h>

void printArray1(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    printArray1(numbers, 5); //5 = 5 numbers aka the size
    return 0;
}
