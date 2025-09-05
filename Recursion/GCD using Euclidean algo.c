#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main() {
    int x = 48, y = 18;
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
}
