//

#include <stdio.h>
#include <math.h>
 
int main() {
    int x, y;
    int N1,N2,counter;
 
    scanf("%d %d", &x, &y);
 
    for ( ; x != 0 || y != 0; scanf("%d %d", &x, &y)) {
         N1 = ceil(sqrt(x));
         N2 = floor(sqrt(y));
 
         counter = 0;
        if (N1 <= N2) {
            counter = N2 - N1 + 1;
        }
 
        printf("%d\n", counter);
    }
 
    return 0;
}  
    
