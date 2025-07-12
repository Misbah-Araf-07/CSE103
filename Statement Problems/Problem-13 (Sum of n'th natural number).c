#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-13:Write a C program that takes an input and sums it up to n'th number.\n\nSolution:\n");
    int n;

    printf("Please Input n'th number: ");
    scanf("%d",&n);
    printf("Summed up Number= %d\n",(n*(n+1))/2);




    return 0;
}


