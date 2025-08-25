//

#include<stdio.h>
 
int main()
{
    int M, N, MinimumCuts;
 
    while(scanf("%d %d", &M, &N) == 2){
        MinimumCuts = M * N - 1;
        printf("%d\n", MinimumCuts);
    }
 
    return 0;
}
