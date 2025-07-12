#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-14:Write a C program that takes an input and prints the total even numbers within 0 to n'th number.\n\nSolution:\n");
    int n, en;
    printf("Please Input n'th number: ");
    scanf("%d",&n);

    if (n>0)
       {
        if (n%2==0)
            printf("Amount of Even Numbers= %d\n\n",n/2);
        else
            printf("Amount of Even Numbers= %d\n\n", (n-1)/2);
        }

    else
        printf("\tPlease type a number above 0\n\n");






    return 0;
}
