//Given nn passengers board nn seats, with the first passenger choosing a seat randomly, what is the probability the last passenger finds their seat taken?



#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n == 1) {
            printf("0/1\n");
        } else {
            printf("1/2\n");
        }
    }
    return 0;
}
