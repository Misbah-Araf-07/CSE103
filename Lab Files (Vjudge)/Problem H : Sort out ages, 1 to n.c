//Sort each list of ages in ascending order for each test case until termination.
#include <stdio.h>

int main() {
    int n, age, i, j, count[100];
    while (scanf("%d", &n) && n) {
        for (i = 0; i < 100; i++) count[i] = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &age);
            count[age]++;
        }
        int first = 1;
        for (i = 1; i < 100; i++)
            while (count[i]--)
                printf(first ? "%d" : " %d", i), first = 0;
        printf("\n");
    }
    return 0;
}
