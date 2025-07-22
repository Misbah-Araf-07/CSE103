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
             printf(" *"); //eg. for 5 , the code prints _____* , then ____*_*, then __*_*_*, then_*_*_*_*


        printf("\n");
    }
    return 0;

}
