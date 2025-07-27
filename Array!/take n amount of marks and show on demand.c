//Take n amount of input(marks) for n amount of students and show their number for the student they ask for

#include <stdio.h>

int main ()

{   int n,x,s,idx;
    float marks[1000];
    printf("Total students : ");
    scanf("%d",&n);
    for (idx=0; idx<n ; idx++)
        scanf("%f",&marks[idx]);
    printf("No of Query: ");
    scanf("%d",&x);
    for (idx=1; idx<=x; idx++)
    {
        scanf("%d",&s);
        printf("students=%d and marks=%.2lf\n",s,marks[s-1]);
    }

    return 0;
}
