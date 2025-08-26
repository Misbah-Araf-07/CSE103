//Given an initial temperature in Celsius and an increase in temperature in Fahrenheit, calculate the new temperature in Celsius after the increase.
#include <stdio.h>

int main()
{
    int T,d,i;
    float C,F,C_2,F_2;

    scanf("%d", &T);
    for(i=1;i<=T;i++){

      scanf("%f %d", &C, &d);
      F = ((9.0 / 5.0) * C) + 32;
      F_2 = F+d;
      C_2 = (5.0 / 9.0) * (F_2 - 32);

      printf("Case %d: %.2f\n", i, C_2);
    }

    return 0;
}


