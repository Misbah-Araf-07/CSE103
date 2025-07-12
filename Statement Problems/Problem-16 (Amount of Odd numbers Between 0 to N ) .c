#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-16:Write a C program that takes an input and prints the total odd numbers within 0 to +n'th number.\n\nSolution:\n");
    int n;
    printf("Please Input n'th number: ");
    scanf("%d", &n);

    if (n > 0)

        if (n % 2 == 0)
            printf("The Amount of odd numbers : %d\n\n", n / 2);
        else
            printf("The Amount of odd numbers : %d\n\n", (n + 1) / 2);}
    else if (n == 0)

        printf("The Amount of odd numbers : 0\n\n");

    else

        printf("Please Input a Number greater than 0\n\n");


    return 0;
}
