#include <stdio.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-11:Write a C program that takes an input and whether the year is a leap year.\n\nSolution:\n");



    int a ;

    printf("Please Type the year number: ");
    scanf(" %d",&a);

    if ( (a%4==0) || (a%100==0) || (a%400==0) )
            printf("The year %d is a Leap year\n",a);
    else
            printf("The year %d is not a leap year\n",a);

        return 0;
}


