//Problem A: Finding the Unique Value (Winner among Alice,Bob,Clara) in Zerinho

#include <stdio.h>

void findOdd(int x, int y, int z) {
    printf("Winner: ");

    if (x==y && y==z)
        printf("*\n");
    else if (x!=y && y==z)
        printf("A\n");
    else if (y!=x && x==z)
        printf("B\n");
    else if (z!=x && x==y)
        printf("C\n");
    else
        printf("No winner\n");
}

int main() {
    int a, b, c;


    printf("Alice, Please Enter 0 or 1: ");
    scanf("%d", &a);
    while (a<0 || a>1) {
        printf("Alice, re-enter 0 or 1: ");
        scanf("%d", &a);
    }


    printf("Bob, Please Enter 0 or 1: ");
    scanf("%d", &b);
    while (b<0 || b>1) {
        printf("Bob, re-enter 0 or 1: ");
        scanf("%d", &b);
    }


    printf("Clara, Please Enter 0 or 1: ");
    scanf("%d", &c);
    while (c<0 || c>1) {
        printf("Clara, re-enter 0 or 1: ");
        scanf("%d", &c);
    }

    printf("Alice: %d\nBob: %d\nClara: %d\n\n", a, b, c);

    findOdd(a, b, c);

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



