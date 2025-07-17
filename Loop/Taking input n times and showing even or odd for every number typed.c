#include <stdio.h>
void printEvenOrOdd(int num);
int main()
{
    int n,d,counter;
    counter=1;
    printf("Please Tell how many numbers you want to use: ");
    scanf("%d",&n);
    while(counter <=n)
    {   printf("Type a number: ");
        scanf("%d",&d);
        printEvenOrOdd(d);
        counter+=1;
    }

    return 0;
}

void printEvenOrOdd(int num)
{
    if (num%2==0)
        printf("It is even\n");
    else
        printf("It is Odd\n");
}
