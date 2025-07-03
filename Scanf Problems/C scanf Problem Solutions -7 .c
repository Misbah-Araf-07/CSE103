#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");

    printf("Write a C program to take two integer number (x and y) as input and display the value of x modulo y (x%y). [Modulo means remainder]\n\n");
    int P;
    int S;
    printf("Please input Two Numbers:\n");
    scanf("%d %d",&P,&S);
    printf("Your given numbers are %d & %d .\nThe expected remainder is = %d",P,S,P%S);


    printf("\n\n_____________________________________________________");

    return 0;
}
