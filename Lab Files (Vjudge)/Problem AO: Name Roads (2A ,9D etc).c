//Given total roads RR and allocated unique integers NN, find the minimum number of single-character suffixes (A-Z) needed to name all roads uniquely, or print "impossible" if it can't be done.



#include <stdio.h>

int main() {
    int R, N, caseNum = 1;

    while (scanf("%d %d", &R, &N) == 2) {
        if (R == 0 && N == 0)
            break;

        printf("Case %d: ", caseNum++);

        if (N >= R) {
            printf("0\n");
        } else {
            int needed = R - N;
            if (needed > 26 * N) {
                printf("impossible\n");
            } else {
                int suffixes = (needed + N - 1) / N;
                printf("%d\n", suffixes);
            }
        }
    }

    return 0;
}
