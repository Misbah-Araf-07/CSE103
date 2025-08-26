//Given the radius R of the red circle in the Bangladesh flag, find the integer coordinates of the four corners of the green.

#include <stdio.h>

int main()
{
    int T,R,i;
    int x_neg,x_pos,y_pos,y_neg;

    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d", &R);

        x_neg = - 2.25*R;
        x_pos = 2.75*R ;
        y_pos = 1.5*R ;
        y_neg = - 1.5*R;


        printf("Case %d:\n", i);
        printf("%d %d\n", x_neg, y_pos);
        printf("%d %d\n", x_pos, y_pos);
        printf("%d %d\n", x_pos,y_neg);
        printf("%d %d\n", x_neg, y_neg);
    }

    return 0;
}
