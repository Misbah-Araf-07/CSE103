//Given a sequence of match results (B, W, T, A), determine the final series outcome following the "Banglawash" rules.

#include <stdio.h>

int main()
{
    int T, N, i, caseNo = 1;
    char results[12];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        scanf("%s", results);
        int B_wins = 0, W_wins = 0, ties = 0, abandoned = 0;
        for (i = 0; i < N; i++)
        {
            switch (results[i])
            {
            case 'B':
                B_wins++;
                break;
            case 'W':
                W_wins++;
                break;
            case 'T':
                ties++;
                break;
            case 'A':
                abandoned++;
                break;
            }
        }

        int played = N - abandoned;
        int code;
        if (abandoned == N)
            code = 1;
        else if (B_wins == played)
            code = 2;
        else if (W_wins == played)
            code = 3;
        else if (B_wins == W_wins)
            code = 4;
        else if (B_wins > W_wins)
            code = 5;
        else
            code = 6;
        printf("Case %d: ", caseNo++);
        switch (code)
        {
        case 1:
            printf("ABANDONED\n");
            break;
        case 2:
            printf("BANGLAWASH\n");
            break;
        case 3:
            printf("WHITEWASH\n");
            break;
        case 4:
            printf("DRAW %d %d\n", B_wins, ties);
            break;
        case 5:
            printf("BANGLADESH %d - %d\n", B_wins, W_wins);
            break;
        case 6:
            printf("WWW %d - %d\n", W_wins, B_wins);
            break;
        }
    }
    return 0;
}
