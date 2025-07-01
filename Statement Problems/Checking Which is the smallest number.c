#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main()
{
    int a,b,c;

    printf("Please give three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if    ((a<=b)&&(a<=c))
             printf("%d is the smallest number",a);


    else  if  ((b<=c)&&(b<=a))
             printf("%d is the smallest number",b);

    else
             printf("%d is the smallest number",c);


    return 0;
}

