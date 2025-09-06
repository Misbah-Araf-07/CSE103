//Write a C program to print the given triangle number pattern using 0, 1. How to print the given triangle number


#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==1 || i==N || j==1 || j==i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
