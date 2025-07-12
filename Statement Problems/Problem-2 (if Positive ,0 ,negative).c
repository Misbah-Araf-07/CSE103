#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-2:Write a C program to take an integer number(x) as input and Print positive or negative or zero\n\nsolution: \n");

    int x ;
    scanf("%d",&x);

    if (x<0)
        printf("%d is Negative",x);

    else if (x>0)
        printf("%d is Positive",x);

    else
        printf("%d is Zero",x);



    return 0;
}
