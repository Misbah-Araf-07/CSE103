#include <stdio.h>

int main ()
{


    int A=0;
    printf("Input a num from 1 to 100  : ");
    scanf("%d",A);

    while (A<1 || A>100)
    {
        printf("Re Enter the Number  ");
        scanf("%d",&A);
    }
    printf("Perfect : %d",A);

}
