#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-4:Write a C program to takes an integer number(x) as input and show if the number is odd or even.\n\nSolution:");

    int x ;
    printf(" Please Type Your Integer Number: ");
    scanf("%d",&x);

    if (x%2==0)
            printf("%d is an even number\n\n",x);

    else
            printf("%d is an odd number\n\n",x);


    return 0;
}
