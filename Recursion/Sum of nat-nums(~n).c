//Sum of natural numbers up to n

#include <stdio.h>
int sumN(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumN(n - 1);
}
int main() {
    int n = 10;
    printf("Sum of first %d natural numbers is %d\n", n, sumN(n));
    return 0;
}
