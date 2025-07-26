
//Write a C program to input week number(1-7) and print day of week name using switch case

#include <stdio.h>
int main()
{
    int d ;
    printf("Please Enter the number of day(1~7): ");
    scanf("%d",&d);
    if (d>0 && d<=7)
    {

      switch (d)
        {
        case 1:
            printf("It is Saturday\n");
            break;

        case 2:
            printf("It is Sunday\n");
            break;
        case 3:
            printf("It is Monday\n");
            break;

        case 4:
            printf("It is Tuesday\n");
            break;
        case 5:
            printf("It is Wednesday\n");
            break;

        case 6:
            printf("It is Thursday\n");
            break;
        case 7:
            printf("It is Friday\n");
            break;
        }

    }
    else
        printf("Invalid Input! 1 week= 7 days\n");
    return 0;
}
