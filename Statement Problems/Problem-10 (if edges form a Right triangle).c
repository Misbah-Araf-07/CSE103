#include <stdio.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-10:Write a C program that takes 3 integers as 3 edges and checks if they form a right angled triangle or not .\n\nSolution:\n");


    int a,b,c;

    printf("Please give the three edges of the triangle: ");
    scanf(" %d %d %d",&a,&b,&c);

    if( (a*a + b*b == c*c) || (b*b + c*c== a*a) || (a*a + c*c== b*b))
        printf("These Edges form a right angled triangle\n");
    else
        printf("These edges do not for a triangle\n");

        return 0;
}


