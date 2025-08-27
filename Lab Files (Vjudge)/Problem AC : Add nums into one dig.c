//Find the repeated sum of digits (digital root) g(n) of a positive integer nn until a single digit remains. (8546= 8+5+4+6= 23= 2+3=5)


#include <stdio.h>

int g(int n) {
    if (n == 0) return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        printf("%d\n", g(n));
    }
    return 0;
}
