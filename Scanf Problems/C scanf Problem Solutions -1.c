#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");
    float A;
    printf("Problem-2: Write a C program to take a floating point (x) number as input and display it.Here -100000< x < 100000\n\n");
    printf("Solution:\n\nPlease input a number between -100000 & 100000\n\n");
    scanf("%f",&A);
    printf("Your given number is: %f\n",A);
    printf("Your given number(Rounding version) is: %.2f\n\n",A);



    printf("_____________________________________________________");

    return 0;
}
