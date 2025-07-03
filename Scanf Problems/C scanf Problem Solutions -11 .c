#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");

    printf("Problem :Given the radius(r) of a circle, determine its area.\n\n\n");
    double r,pi;
    pi=3.1416;

    printf("Please give the radius of the circle:");
    scanf("%lf",&r);
    printf("\t\tThe Radius of the circle,r=%.1lf\n\n",r);

    printf("\t\t\tThus the area of the circle= %.2lf",(pi*(r*r)));


    printf("\n\n_____________________________________________________");

    return 0;
}
