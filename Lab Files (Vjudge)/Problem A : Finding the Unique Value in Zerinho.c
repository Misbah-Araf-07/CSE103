//Sol A : 
#include <stdio.h>

int main() {
    int A, B, C;

    while (scanf("%d %d %d", &A, &B, &C) != EOF) {
        if (A != B && A != C && B == C) {
            printf("A\n");
        }
        else if (B != A && B != C && A == C) {
            printf("B\n");
        }
        else if (C != A && C != B && A == B) {
            printf("C\n");
        }
        else {
            printf("*\n");
        }
    }

    return 0;
}



















//Sol B : 

//
//#include <stdio.h>
//
//void findOdd(int x, int y, int z)
//{
//    printf("Winner: ");
//
//    if (x==y && y==z)
//        printf("*\n");
//    else if (x!=y && y==z)
//        printf("A\n");
//    else if (y!=x && x==z)
//        printf("B\n");
//    else if (z!=x && x==y)
//        printf("C\n");
//    else
//        printf("No winner\n");
//}
//


//int main()
//{
//    int a, b, c;
//
//
//    printf("Alice, Please Enter 0 or 1: ");
//    scanf("%d", &a);
//    while (a<0||a>1)
//        {
//        printf("Alice, re-enter 0 or 1: ");
//        scanf("%d", &a);
//        }
//
//
//    printf("Bob, Please Enter 0 or 1: ");
//    scanf("%d", &b);
//    while (b<0||b>1)
//        {
//        printf("Bob, re-enter 0 or 1: ");
//        scanf("%d", &b);
//        }
//
//
//    printf("Clara, Please Enter 0 or 1: ");
//    scanf("%d", &c);
//    while (c<0||c>1)
//        {
//        printf("Clara, re-enter 0 or 1: ");
//        scanf("%d", &c);
//        }
//
//    printf("Alice: %d\nBob: %d\nClara: %d\n\n", a, b, c);
//
//    findOdd(a, b, c);
//
//    return 0;
//}
