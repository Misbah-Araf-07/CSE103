#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main()
{
    int a,b,c;

    printf("Please give three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if    ((a<b)&&(b<c)&&(a<c))
             printf("%d is the smallest number",a);


   if     ((b<c)&&(b<a))
             printf("%d is the smallest number",b);

    if    ((c<b)&&(c<a))
             printf("%d is the smallest number",c);


    return 0;
}

