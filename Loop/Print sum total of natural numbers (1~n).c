//Write a C program to find the sum of all natural numbers between 1 to n using for loop
//Method -1: (check for condition) 


#include <stdio.h>
int main ()
{   int n=0 ,sum=0, counter=1 ;
    printf("Please enter n-th number: ");
    scanf("%d",&n);


    for( ;counter<=n; )
    {   sum+=counter;
        counter++;
    }
    printf("Sum Total (1~n) is : %d",sum);


    return 0 ;
}





//Method-2 : 



#include <stdio.h>

int main() {
    int n = 0, sum = 0;

    printf("Please enter n-th number: ");
    scanf("%d", &n);

    for(int counter = 1; counter <= n; counter++) 
    {
        sum += counter;
    }

    printf("Sum Total (1~n) is: %d\n", sum);

    return 0;
}
