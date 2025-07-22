#include <stdio.h>
int main()

{   int n,line,star,space,i;
    printf ("How many lines do you want: ");
    scanf("%d",&n);

    for (line=1; line<=n;line++) //Loop to Control Lines
    {
        space=n-line;
        for(i=1;i<=space;i++)
            printf(" ");

        star=line;
        for (i=1;i<=star;i++)
             printf("*");


        printf("\n");
    }
    return 0;

}
