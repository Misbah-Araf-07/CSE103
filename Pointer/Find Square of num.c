//Create a program with three integer variables. Use pointers to find and print the address and value of the variable that contains the maximum value among the three.

#include <stdio.h>
void square(int *n) {
    *n = (*n) * (*n);  
}

int main() {
    int number = 7;
    printf("Original number: %d\n", number);
    
    square(&number);  // Pass address
    
    printf("Square: %d\n", number);
    return 0;
}
