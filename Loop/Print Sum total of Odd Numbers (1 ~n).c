//Write a C program to find sum of all odd numbers from 1 to n using for loop

//Method-1 - For Loop



#include <stdio.h>
int main ()
{
    int counter=1,sum=0,n=0;
    printf("Please Enter N'th Number: ");
    scanf("%d",&n);
    for ( ;counter<=n; counter+=2)
        if (counter%2 != 0)
        {
        sum+=counter;
        }

    printf("Sum Total (Only Odds of 1~n): %d\n",sum);


    return 0 ;
}


//Method-2: While Loop 

#include <stdio.h>

int main() {
    int counter = 1, sum = 0, n = 0;

    printf("Please Enter N'th Number: ");
    scanf("%d", &n);

    while (counter <= n) {
        sum += counter;
        counter += 2;
    }

    printf("Sum Total (Only Odds of 1~%d): %d\n", n, sum);

    return 0;
}





















