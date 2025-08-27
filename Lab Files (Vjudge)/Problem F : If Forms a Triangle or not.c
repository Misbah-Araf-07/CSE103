//For each set of three side lengths, determine if they can form a valid triangle and print 'OK' if they can, or 'Wrong!!' if they cannot.

#include <stdio.h>

int main() {
    int N, a, b, c, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b <= c || a + c <= b || b + c <= a)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    return 0;
}
