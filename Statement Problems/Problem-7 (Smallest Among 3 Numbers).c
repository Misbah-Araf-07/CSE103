#include <stdio.h>
#include <ctype.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-7:Write a C program that takes 3 integers as inputs and display the smallest.\n\nSolution:\n");


    int x,y,z;
    printf("Please input three numbers: ");
    scanf(" %d %d %d",&x,&y,&z);

    if      ((x<=y) && (x<=z))
        printf("%d is the smallest",x);

    else  if ((y<=z) && (y<=x))
        printf("%d is the smallest number",y);

    else
        printf("%d is the smallest number",z);




    return 0;
}


