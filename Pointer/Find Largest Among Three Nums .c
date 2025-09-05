/*Create a program with three integer variables. Use pointers to find and print the address and value of the variable that contains the maximum value among the three.*/
//Efficient Way : 

#include <stdio.h>

int main() {
    int a, b, c;
    int *ptrMax;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    

    if (a == 0 && b == 0 && c == 0) {
        printf("All numbers are 0\n");
        printf("Address of 'a': %p, Value: %d\n", &a, a);
        return 0;
    }
    

    if (a == b && b == c) {
        printf("All numbers are equal: %d\n", a);
        printf("Address of 'a': %p, Value: %d\n", &a, a);
        return 0;
    }
    

    if (a >= b && a >= c) {
        ptrMax = &a;
        printf("Variable 'a' has the maximum value\n");
    } else if (b >= a && b >= c) {
        ptrMax = &b;
        printf("Variable 'b' has the maximum value\n");
    } else {
        ptrMax = &c;
        printf("Variable 'c' has the maximum value\n");
    }
    
    
    printf("Maximum value: %d\n", *ptrMax);
    printf("Address of maximum variable: %p\n", ptrMax);
    
    return 0;
}








//Alternative
#include <stdio.h>

void findLarg(int *a,int *b,int *c)

{
    if (*a==0 && *b==0 && *c==0)
        printf ("All Numbers are 0\n");
    else if (*a==*b && *b==*c)
        printf ("All Numbers are equal\n");

    else
    {
    if (*a >=*b && *a>=*c)
        printf("%d is largest, at %p\n", *a, a);
    else if (*b >=*a && *b>=*c)
        printf("%d is largest, at %p\n", *b,b);
    else if (*c >=*a && *c>=*b)
        printf("%d is largest, at %p\n", *c,c);
    }
}

int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    findLarg(&a,&b,&c);

    return 0;
}










