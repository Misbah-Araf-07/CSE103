//Given nn empty bottles, calculate the total number of full bottles of coco-cola you can drink by repeatedly exchanging 3 empties for 1 full bottle.

#include <stdio.h>

int main() 
{
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == 0) break;
        
        int total = 0, bottle_Empt = n;
        while (bottle_Empt >= 3) {
            int bottle_new = bottle_Empt / 3;
            total += bottle_new;
            bottle_Empt = bottle_new + (bottle_Empt % 3);
        }
        
        if (bottle_Empt == 2) total++; 
        printf("%d\n", total);
    }
    return 0;
}
