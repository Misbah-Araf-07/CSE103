//Problem A: Finding the Unique Value (Winner among Alice,Bob,Clara) in Zerinho

#include <stdio.h>
#include <stdbool.h>
void findOdd(int x , int y , int z)
{   printf("Winner : ");

    if (x==y && y==z)
        printf("*\n");

    else if (x!=y && y==z)
        printf("A\n");
    else if (x!=y && x==z)
        printf("B\n");
    else if (x==y && y!=z)
        printf("C\n");
}



int main ()
{   int a,b,c;
    char N,A,B,C;


    printf("Alice, Please Enter 0 or 1: ");
    scanf("%d",&a);
        for ( ;a<0 || a>1; )
        {
        printf("Alice,re-enter: ");
        scanf("%d",&a);
        }
    printf("\n");



    printf("Bob, Please Enter 0 or 1: ");
    scanf("%d",&b);
        for ( ;a<0 || a>1; )
        {
        printf("Bob,re-enter: ");
        scanf("%d",&b);
        }
    printf("\n");



    printf("Clara, Please Enter 0 or 1: ");
    scanf("%d",&c);
        for ( ;a<0 || a>1; )
        {
        printf("Clara,re-enter: ");
        scanf("%d",&c);
        }

    printf("\n");




    printf("Alice: %d\nBob: %d\nClara: %d\n",a,b,c);
    printf("\n");

    findOdd(a,b,c);



    return 0;
}


