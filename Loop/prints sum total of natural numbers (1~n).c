//Write a C program to find the sum of all natural numbers between 1 to n using for loop


#include <stdio.h>
int main ()
{   int n=0 ,sum=0, counter=0 ;
    printf("Please enter n-th number: ");
    scanf("%d",&n);


    for(counter=1;counter<=n;sum)
    {   sum+=counter;
        counter++;
    }
    printf("Sum Total (1~n) is : %d",sum);


    return 0 ;
}
