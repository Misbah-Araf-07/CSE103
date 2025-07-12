#include <stdio.h>
#include <ctype.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-9:Write a C program that takes 3 integers as 3 edges and checks wether they form a triangle .\n\nSolution:\n");


    int a,b,c;

    printf("Please give the three edges of the triangle: ");
    scanf(" %d %d %d",&a,&b,&c);

    if( (a+b<c) && (a+c<b) &&(c+b<a) )
        printf("These Edges form a triangle");
    else
        printf("These edges do not for a triangle");

        return 0;
}


