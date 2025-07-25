//Write a C program to enter month number between(1-12) and print number of days in month using if else
#include <stdio.h>
#include <ctype.h>

int main()
{
    int m,y;
    printf("Please enter what year is it: ");
//    scanf("%d",&y);

    if (scanf("%d", &y) == 1 )
    {
        {
            printf("\nNow Please Enter What numbered month it is : ");
//            scanf("%d",&m);
        }
       if ((scanf("%d",&m))==1)
            {
            if (m==1)
            {
                printf("It Is January\n");
                printf("There are 31 days this month\n");
            }
            else if (m==2)
            {
                if ((y%4==0)||(y%100==0)||(y%400==0))
                {
                    printf("It is February\n");
                    printf("There are 29 days in this month\n");
                }
                else
                    printf("It is February\nThere are 28 days this month\n");
            }
            else if (m==3)
            {
                printf("It is March\nThere");
                printf("There are 31 days this month\n");
            }
            else if (m==4)
            {
                printf("It is April\nThere");
                printf("There are 30 days this month\n");
            }
            else if (m==5)
            {
                printf("It is May\nThere");
                printf("There are 31 days this month\n");
            }
            else if (m==6)
            {
                printf("It is June\nThere");
                printf("There are 30 days this month\n");
            }
            else if (m==7)
            {
                printf("It is July\nThere");
                printf("There are 30 days this month\n");
            }
            else if (m==8)
            {
                printf("It is August\nThere");
                printf("There are 31 days this month\n");
            }
            else if (m==9)
            {
                printf("It is September\nThere");
                printf("There are 30 days this month\n");
            }
            else if (m==10)
            {
                printf("It is October\nThere");
                printf("There are 31 days this month\n");
            }
            else if (m==11)
            {
                printf("It is November\nThere");
                printf("There are 30 days this month\n");
            }
            else if (m==12)
            {
                printf("It is December\nThere");
                printf("There are 31 days this month\n");
            }

            else if (m<1 || m>12)
                printf("Error Input: 1 Year = 12 Months\n");
            }

        else if ((scanf("%d",&m))!=1)
            printf("Please input a number as a month\n");
    }
    else
        printf("Please Input a Number as year\n");


    return 0 ;

     }


