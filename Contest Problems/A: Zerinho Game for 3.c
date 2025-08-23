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































//int main ()
//{   int a,b,c;
//    char N,A,B,C;
//    a=0,b=0,c=0;
//    printf("Please Enter Your Name: ");
//    scanf("%c",&N);
//        if (N=='Alice')
//            {
//            printf("Please Enter 0 or 1: ");
//            scanf("%d",&a);
//            }
//        else if (N=='Bob')
//            {
//            printf("Please Enter 0 or 1: ");
//            scanf("%d",&b);
//            }
//        else if (N=='Clara')
//            {
//            printf("Please Enter 0 or 1: ");
//            scanf("%d",&c);
//            }
//      printf("Alice: %d\nBob: %d\nClara: %d\n",a,b,c);
//
//    return 0;
//}


//
//int main ()
//{   int a,b,c;
//    char N,A,B,C;
//    a=0,b=0,c=0;
//    printf("Please Enter Your Name: ");
//    scanf("%c",&N);
//    switch (N)
//    {
//
//        case'Alice':
//            {
//            printf("Please Enter 0 or 1: ");
//            scanf("%d",&a);
//            }
//            break;
//
//        case'Bob':
//            {
//            printf("Please Enter 0 or 1: ");
//            scanf("%d",&b);
//            }
//            break;
//        case'Clara':
//            {
//            printf("Please Enter 0 or 1: ");
//            scanf("%d",&c);
//            }
//            break;
//         default : printf("You are not in the team\n");
//
//    }
//      printf("Alice: %d\nBob: %d\nClara: %d\n",a,b,c);
//
//    return 0;
//}
//
//
//
//
//
//
//


//
//int main ()
//{   int n,a,b,c;
//    char N,A,B,C;
//
//
//    printf("Please Enter Your Name: ");
//    scanf("%c",&N);
//
//    for (int i=0;i<3;i++)
//        {
//        printf("Please Enter Your Name: ");
//        scanf("%c",&N);
//
//        printf("Please Enter 0 or 1: ");
//        scanf("%d",&n);
//        switch (N)
//            {
//            case'Alice':
//                {
//                n==a;
//                }
//                break;
//
//        case'Bob':
//                {
//                n=b;
//                }
//                break;
//        case'Clara':
//                {
//                n==c;
//                }
//                break;
//         default : printf("You are not in the team\n");
//            }
//
//         }
//
//
//
//
//    printf("\n");
//    printf("Alice: %d\nBob: %d\nClara: %d\n",a,b,c);
//
//
//    return 0;
//}



