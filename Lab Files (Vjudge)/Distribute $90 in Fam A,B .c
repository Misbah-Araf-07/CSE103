//Distrubute 90 dllar in two families acc their working hours
#include <stdio.h>

int main()
{
    int T,Fam_A,x, y, z;
    scanf("%d", &T);

    while (T > 0) {
        scanf("%d %d %d", &x, &y, &z);

        Fam_A = ( (2 * x - y) * z ) / (x + y);
        printf("%d\n", Fam_A);

        T--;
    }

    return 0;
}
