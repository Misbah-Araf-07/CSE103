// Calculate the area of a regular polygon inscribed in a circle given the circle's radius and the number of polygon sides.

#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)

int main() {
    double r;
    int n;
    while (scanf("%lf %d", &r, &n) == 2) {
        double area = 0.5 * n * r * r * sin((2.0 * pi) / n);
        printf("%.3lf\n", area);
    }
    return 0;
}
