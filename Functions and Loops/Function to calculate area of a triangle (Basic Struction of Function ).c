#include <stdio.h>

double CalculateArea(double b, double h);

int main() {
    double base, height, area;

    printf("Enter base and height: ");
    scanf("%lf %lf", &base, &height);
    area = CalculateArea(base, height);
    printf("Area = %.2lf\n", area);

    printf("Enter base and height: ");
    scanf("%lf %lf", &base, &height);
    area = CalculateArea(base, height);
    printf("Area = %.2lf\n", area);

    return 0;
}



double CalculateArea(double b, double h)
 {
    return 0.5 * b * h;
}
