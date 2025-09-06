#include <stdio.h>


int DecToBin(int n) {
    if (n == 0) {
        return 0;  // Base case
    } else {
        return (n % 2 + 10 * DecToBin(n / 2));
    }
}


int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    int binary = DecToBin(decimal);
    printf("Binary equivalent: %d\n", binary);
    
    return 0;
}
