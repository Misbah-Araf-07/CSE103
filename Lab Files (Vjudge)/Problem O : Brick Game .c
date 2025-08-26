//

#include <stdio.h>

int main() {
    int T,N,i,j,Age_Captain;
    int ages[11];

    scanf("%d", &T);

    for (i = 1; i <= T; i++) {
        scanf("%d", &N);

        for (j = 0; j < N; j++) {
            scanf("%d", &ages[j]);
        }

         Age_Captain = ages[N / 2];

        printf("Case %d: %d\n", i, Age_Captain);
    }

    return 0;
}
