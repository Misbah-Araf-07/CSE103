#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-15:Write a C program that takes an input and prints the total even numbers within -n to +n'th number.\n\nSolution:\n");
    int n;
    printf("Please Input n'th number: ");
    scanf("%d",&n);

    if (n!=0)
    {
        if (n%2==0)
            printf("Amount of Even Numbers: %d\n", n+1);
        else
            printf("Amount of Even Numbers :%d\n",n);
    }
    else
        printf("Amount of Even numbers : %d\n",1);





    return 0;
}
