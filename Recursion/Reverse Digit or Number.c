//
#include <stdio.h>

void reverseNumber(int num) {
    if (num > 0) {
        printf("%d", num % 10);   
        reverseNumber(num / 10);   
    }
}

int main() {
    int num = 0;
    scanf("%d",&num);
    printf("Original number: %d\n", num);
    printf("Reversed number: ");
    reverseNumber(num);
    printf("\n");
    return 0;
}


//Alternative 


#include <stdio.h>
#include <math.h>

int reverseNumber(int num) {
    if (num < 10) {
        return num; 
    } else {
        int digits = floor(log10(num));    // Count digits
        return (num % 10) * pow(10, digits) + reverseNumber(num / 10);
    }
}

int main() {
    int num = 12345;
    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reverseNumber(num));
    return 0;
}
