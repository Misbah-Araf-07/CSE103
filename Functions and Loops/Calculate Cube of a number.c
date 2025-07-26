//Write a C program to input any number from user and find cube of the given number using function.

//Type 1 : For a int type input

#include <stdio.h>
int PrintCubic (int x);


int main ()
{
    int A=0, cA=0;
    printf("Please Enter a number : ");
    scanf("%d",&A);

    cA=PrintCubic(A);
    printf("Cubic of %d is = %d\n",A,cA);
    return 0 ;
}

int PrintCubic(int value)
{
    return value*value*value;
}



//Type-2: For a float type input 


//Write a C program to input any number from user and find cube of the given number using function.


#include <stdio.h>
double CaclulateCubic ();


int main ()
{
    double A=0, cA=0;
    printf("Please Enter a number : ");
    scanf("%lf",&A);

    cA=CaclulateCubic(A);
    printf("Cubic of %.1lf is = %.1lf\n",A,cA);
    return 0 ;
}

double CaclulateCubic(double value)
{
    return value*value*value;
}
