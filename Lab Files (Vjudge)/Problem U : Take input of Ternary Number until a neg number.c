//Given a list of non-negative decimal numbers, output the ternary (base-3) representation of each until a negative number is encountered.

#include <stdio.h>
int main() {
    
    long long int n;
    int ternary[100];
    int i, j;
 
    while (1) {
        scanf("%lld", &n);
 
        if (n < 0) {
            break;
        }
 
        if (n == 0) {
            printf("0\n");
            continue;
        }
 
        i = 0;
        while (n > 0) {
            ternary[i] = n % 3;
            n = n / 3;
            i++;
        }
 
        for (j = i - 1; j >= 0; j--) {
            printf("%d", ternary[j]);
        }
        printf("\n");
    }
 
    return 0;
}

