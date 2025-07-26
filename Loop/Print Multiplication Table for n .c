//Write a C program to input a number from user and print multiplication table of the given number using for loop

//Method-1: For Loop

#include <stdio.h>
int main ()
{   int n=0,counter=1 ,mul=0;
    printf("Please Enter the n'th number: ");
    scanf("%d",&n);

    for ( ;counter<=10;counter++)
    {
        mul= counter*n;
        printf("%d X %d = %d\n",n,counter,mul);

    }
    return 0 ;
}




//method-2: Do While loop 



#include <stdio.h>
int main ()
{   int n=0,counter=1 ,mul=0;
    printf("Please Enter the n'th number: ");
    scanf("%d",&n);

    do
    {   mul= counter*n;
        printf("%d X %d = %d\n",n,counter,mul);
        counter++;
    }
    while (counter<=10);


    return 0 ;
}







