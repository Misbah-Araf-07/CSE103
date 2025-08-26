// Given the length (L) of the Bangladesh national flag, compute the area of the red circle and the remaining green area, considering the flag is a 10:6 rectangle and the circle has radius L/5, and print both areas to two decimal places.


#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)

int main() {
    int Tcase, i;
    double l, w, r;
    double Rect_Area, Red_Area, Green_Area;

    scanf("%d", &Tcase);
    

    for (i = 0; i < Tcase; i++) {
        scanf("%lf", &l);
        w = (6 / 10.0) * l;
        r = l / 5.0;
        Rect_Area = l * w;
        Red_Area = PI * r * r;
        Green_Area = Rect_Area - Red_Area;
        
        printf("%.2lf %.2lf\n", Red_Area, Green_Area);
    }
    return 0;
}
