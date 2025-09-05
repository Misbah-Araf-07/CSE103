//Fibonacci Sequence aka the value of N (Sum of N's prev 2 digits)

#include <stdio.h>
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int term = 0;
    scanf("%d",&term);
    printf("Fibonacci term %d is %d\n", term, fibonacci(term));
    return 0;
}
