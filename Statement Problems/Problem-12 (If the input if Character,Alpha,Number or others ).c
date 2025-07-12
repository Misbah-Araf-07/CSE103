#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-12:Write a C program that takes an input and indentifies if its alphabet, number or others.\n\nSolution:\n");


    int B;
    printf("please give an input: ");
    scanf("%c",&B);

        if (isalpha(B))
            printf("%c is a character\n",B);

        else if (isdigit(B))
            printf("%c is a number\n",B);

        else
            printf("%c is neither a character nor a number\n",B);


    return 0;
}


