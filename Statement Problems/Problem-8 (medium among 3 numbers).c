#include <stdio.h>
#include <ctype.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-8:Write a C program that takes 3 integers as inputs and display the medium.\n\nSolution:\n");


    int x,y,z;
    printf("Please input three numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    if( (x>=y && x<=z) || (x>=z && x<=y) )
        printf("%d is the medium number\n",x);

    else if((y>=x && y<=z) || (y>=z && y<=x) )
        printf("%d is the medium number\n",y);

    else if((z>=x && z<=y) || (z<=x && z>=y) )
        printf("%d is the medium number\n",z);




    return 0;
}


