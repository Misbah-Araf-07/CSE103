//Given two very large numbers digit-by-digit, compute their sum and print the result.

#include <stdio.h>

int main(void) {
    int T, M, i, testcase;
    scanf("%d", &T);
    getchar();

    for (testcase = 0; testcase < T; testcase++) {
        scanf("%d", &M);
        int a, b, carry = 0;
        int result[1000000];

        for (i = 0; i < M; i++) {
            scanf("%d %d", &a, &b);
            result[i] = a + b;
        }

        for (i = M - 1; i >= 0; i--) {
            result[i] += carry;
            if (result[i] >= 10) {
                carry = 1;
                result[i] -= 10;
            } else {
                carry = 0;
            }
        }

        for (i = 0; i < M; i++) {
            printf("%d", result[i]);
        }
        printf("\n");

        if (testcase != T - 1) {
            printf("\n");
            getchar();
        }
    }
    return 0;
}
