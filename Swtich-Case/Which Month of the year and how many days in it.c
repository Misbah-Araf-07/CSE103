//Write a C program to input month number and print total number of days in month using switch...case
#include <stdio.h>
int main()
{
    int m,y;
    printf("What year is it ?: ");
    scanf("%d",&y);

    printf("What numbered Month is it? (1~12): ");
    scanf("%d",&m);


    switch (m){

        case 1:
            printf("\tJanuary!\nThere are 31 days this month\n");
            break;

        case 2:
            if ((y%400==0) || (y%100!=0 && y%4==0))
                printf("\tFebruary!\nThere are 29 days this month\n");
            else
                printf("\tFebruary!\nThere are 28 days this month\n");
            break;

        case 3:
            printf("\tMarch\nThere are 31 days this month\n");
            break;
        case 4:
            printf("\tApril\nThere are 30 days this month\n");
            break;
        case 5:
            printf("\tMay\nThere are 31 days this month\n");
            break;
        case 6:
            printf("\tJune\nThere are 30 days this month\n");
            break;
        case 7:
            printf("\tJuly\nThere are 31 days this month\n");
            break;
        case 8:
            printf("\tAugust\nThere are 31 days this month\n");
            break;
        case 9:
            printf("\tSeptember\nThere are 30 days this month\n");
            break;
        case 10:
            printf("\tOctober\nThere are 31 days this month\n");
            break;
        case 11:
            printf("\tNovember\nThere are 31 days this month\n");
            break;
        case 12:
            printf("\tDecember\nThere are 31 days this month\n");
            break;

        default:

            printf("Invalid input : 1 year= 12 months\n");
            break;
            }

    return 0;
}
