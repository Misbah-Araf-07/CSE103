//Given the number of odd numbers NN in a line, find the sum of the last three odd numbers in that line


#include <stdio.h>

int main() {
    long long N;

    while (scanf("%lld", &N) == 1) {
        long long x = (N + 1) / 2;
        long long last = x * x;

        long long n1 = 2 * (last - 2) - 1;
        long long n2 = 2 * (last - 1) - 1;
        long long n3 = 2 * last - 1;

        printf("%lld\n", n1 + n2 + n3);
    }

    return 0;
}
