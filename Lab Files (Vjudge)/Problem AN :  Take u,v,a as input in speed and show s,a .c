//Given three variables among initial speed u, final speed v, acceleration a, time t, and displacement s, find the missing two parameters using constant acceleration formulas and print results with three decimal precision.


#include <stdio.h>
#include <math.h>

int main() {
    int caseNum = 1, type;
    double u, v, a, t, s;

    while (scanf("%d", &type) == 1 && type != 0) {
        if (type == 1) {
            scanf("%lf %lf %lf", &u, &v, &t);
            a = (v - u) / t;
            s = u * t + 0.5 * a * t * t;
            printf("Case %d: %.3lf %.3lf\n", caseNum++, s, a);
        }
        else if (type == 2) {
            scanf("%lf %lf %lf", &u, &v, &a);
            t = (v - u) / a;
            s = u * t + 0.5 * a * t * t;
            printf("Case %d: %.3lf %.3lf\n", caseNum++, s, t);
        }
        else if (type == 3) {
            scanf("%lf %lf %lf", &u, &a, &s);
            v = sqrt(u * u + 2 * a * s);
            t = (v - u) / a;
            printf("Case %d: %.3lf %.3lf\n", caseNum++, v, t);
        }
        else if (type == 4) {
            scanf("%lf %lf %lf", &v, &a, &s);
            u = sqrt(v * v - 2 * a * s);
            t = (v - u) / a;
            printf("Case %d: %.3lf %.3lf\n", caseNum++, u, t);
        }
    }

    return 0;
}
