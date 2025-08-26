//Given a rectangular soya milk packet of length ll, width ww, height hh, tilted at angle θ degrees, compute the remaining volume of milk in millilitres with three decimal places.

#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)

int main() {
    int l, w, h, angle_dgr;
    double volume, angle_rad, angle_stop;

    while (scanf("%d %d %d %d", &l, &w, &h, &angle_dgr) == 4) {
        angle_rad = angle_dgr * pi / 180.0;
        angle_stop = atan((double)h / l) * 180.0 / pi;

        if (angle_dgr == 0) {
            volume = (double)l * w * h;

        } else if (angle_dgr < angle_stop) {
            double y = l * tan(angle_rad);
            volume = l * w * (h - y / 2.0);

        } else {
            double x = h / tan(angle_rad);
            volume = w * h * x / 2.0;
        }

        printf("%.3lf mL\n", volume);
    }

    return 0;
}
