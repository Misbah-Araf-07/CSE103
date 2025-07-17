
  method-1: using if else 


#include <stdio.h>


int main()
{
    int day;
    printf("Please input what numbered day is it : ");
    scanf("%d",&day);
    if (day==1)
        printf("It is Saturday :(\n");
    else if (day==2)
        printf("It is Sunday\n");
    else if (day==3)
        printf("It is Monday\n");
    else if (day==4)
        printf("It is Tuesday\n");
    else if (day==5)
        printf("It is Wednesday\n");
    else if (day==6)
        printf("It is Thursday\n");
    else if (day==7)
        printf("It is Friday!!\n");
    else if (day==0)
        printf("0th day doesn't exist\n");
    else
        printf("1 week = 7days\n");
    return 0;
}


    method- 2 : using switch 


#include <stdio.h>


int main()
{   int day;
    printf("Please input what numbered day is it : ");
    scanf("%d",&day);
    if (day>=1 && day<=7)

        switch (day)
        {
        case 1: printf("It is Saturday\n");
        break;

        case 2: printf("It is Sunday\n");
        break;

        case 3: printf("It is Monday\n");
        break;

        case 4: printf("It is Tuesday\n");
        break;

        case 5: printf("It is Wednesday\n");
        break;

        case 6: printf("It is Thursday\n");
        break;

        case 7: printf("It is Friday\n");
        break;

        }

     else if (day==0)
        printf("0th day doesn't exist\n");
     else
        printf("1 week = 7 days\n");
    return 0;
}

      

