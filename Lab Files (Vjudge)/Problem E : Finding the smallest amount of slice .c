//

#include <stdio.h>

int main() {
    long long cuts[100];
    int count = 0;
    int i;

    while (1) {
        long long N;
        scanf("%lld", &N);
        if (N < 0)
            break;
        cuts[count++] = N;
    }

    for (i = 0; i < count; i++) {
        long long pieces = cuts[i] * (cuts[i] + 1) / 2 + 1;
        printf("%lld\n", pieces);
    }

    return 0;
}
