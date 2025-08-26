//Given two integers N and M, count how many numbers between N and M (inclusive) have no repeated digits.

#include <stdio.h>

int hasRepeatedDigit(int num) {
    int digits[10] = {0};

    while (num > 0) {
        int d = num % 10;
        if (digits[d] == 1) return 1;

        digits[d] = 1;
        num /= 10;
    }
    return 0;
}

int main() {
    int N, M;
    while (scanf("%d %d", &N, &M) == 2) {
        int counter = 0, i;

        for (i = N; i <= M; i++) {
            if (hasRepeatedDigit(i) == 0) {
                counter++;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
