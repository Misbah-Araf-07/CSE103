//Power function (computing x^xy)

//recursive
#include <stdio.h>
int power(int x, int y) {
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}
int main() {
    int base = 2, exponent = 4;
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));
    return 0;
}


//Non-recursive way 

#include <stdio.h>
#include <math.h>

int main() {
    int base = 2, exponent = 4;
    int result = (int) pow(base, exponent);  

    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
