#include <stdio.h>

int main ()

{
    int r,h;
    float pi=3.1416;

    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");
    printf("Problem-12+14:Given the radius(r) and height(h) of a cylinder, determine its volume\n\n\n\ ");

    printf("Please Give the Radius of the Cylinder:\n");
    scanf("%d",&r);
    printf("Radius , r=%d\n\n",r);

    printf("Please Give the Height of the cylinder:\n");
    scanf("%d",&h);
    printf("Height , h=%d\n\n",h);

    printf("\nThe Volume of this cylinder is= %.2lf\n ",(pi*r*r*h));

    printf("_____________________________________________________");
    return 0;
}
