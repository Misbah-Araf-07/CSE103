//Given an integer nn, perform a series of arithmetic operations and output the tens digit of the result.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, tens;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        
        long result;
        result = n * 567;
        result /= 9;
        result += 7492;
        result *= 235;
        result /= 47;
        result -= 498;
        
        tens = (abs(result) / 10) % 10;
        printf("%d\n", tens);
    }
    return 0;
}


