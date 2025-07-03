#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");

    printf("Problem :Given the base and height of a triangle, determine its area.\n\n\n");
    double b,h;


    printf("Please give the Base of the triangle, b: ");
    scanf("%lf",&b);
    printf("\n\t\t\tThe Base of the Triangle is,b = %.0lf\n\n",b);

    printf("Now Please give the height of the triangle ,h:");
    scanf("%lf",&h);
    printf("\n\t\t\tThe height of the Triangle is , h=%.0lf\n\n\n\n\n",h);

    printf("\t\t\tThus the Area of the triangle is : %.0lf", ((1.00/2.00)*b*h)); // The .2lf turns 2.559874 into 2.56 and .0lf turns it into 2


    printf("\n\n_____________________________________________________");

    return 0;
}
