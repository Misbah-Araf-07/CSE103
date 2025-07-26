//Write a C program to input a number from user and count number of digits in the given integer using loop
#include <stdio.h>
int main ()
{   int N=0,counter=0 ;

    printf("Please input a number: ");
    scanf("%d",&N);
    {
    if (N==0)
        counter=1;

    else if (N<0)
        N= -1*N;

    for ( ; N>0; N/=10)
        counter++;
    }

    printf("Number of digits : %d",counter);

    return 0 ;
}
