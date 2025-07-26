//Write a C program to input any number from user and find cube of the given number using function.

#include <stdio.h>
int PrintCubic (int x);


int main ()
{
    int A=0, cA=0;
    printf("Please Enter a number : ");
    scanf("%d",&A);

    cA=PrintCubic(A);
    printf("Cubic of %d is = %d\n",A,cA);
    return 0 ;
}

int PrintCubic(int value)
{
    return value*value*value;
}
