#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");

    printf("Write a C program to take two integer number (x and y) as input an display the output in the given format.\n\n");
    int A;
    int B;
    printf("Please give Two integer Numbers:\n");
    scanf("%d %d",&A,&B);
    printf("(1):%d + %d = %d\n(2):%d - %d=%d\n(3):%d x %d=%d\n(4):%d / %d =%d\n(5):%d %% %d=%d",A,B,A+B,A,B,A-B,A,B,A*B,A,B,A/B,A,B,A%B);

    printf("\n\n_____________________________________________________");

    return 0;
}
