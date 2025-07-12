#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-3:Write a C program to take two integers number(x,y) as inputs and show Which is bigger.\n\nSolution:");

    int x,y ;
    printf(" Please Type Your Integer Numbers:");
    scanf("%d %d",&x,&y);

    if (x>y)
            printf("%d is the larger number\n\n",x);

    else if (x<y)
            printf("%d is the larger number\n\n",y);

    else
            printf("Both numbers are equal\n\n",x);


    return 0;
}
