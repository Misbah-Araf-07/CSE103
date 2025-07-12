#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-5:Write a C program to takes an integer number(x) as input and show if the number is square or not.\n\nSolution:");

    int x,N ;



    printf(" Please Type Your Integer Number: ");
    scanf("%d",&x);
    N=sqrt(x);
    if (N*N==x)
            printf("%d is a square number\n\n",x);

    else
            printf("%d is not a square number\n\n",x);


    return 0;
}


