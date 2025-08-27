//Given integer I, output its binary representation and the parity (sum of bits modulo 2). Continue until input is zero.

#include <stdio.h>

void print_binary(int n, int *ones) {
    int b[32], i = 0;
    while (n) {
        b[i++] = n & 1;
        n >>= 1;
    }

    *ones = 0;
    while (--i >= 0) {
        *ones += b[i];
        putchar(b[i] + '0');
    }
}


int main() {
    int n, ones;
    while (scanf("%d", &n) == 1 && n) {
        printf("The parity of ");
        print_binary(n, &ones);
        printf(" is %d (mod 2).\n", ones);
    }
    return 0;
}
