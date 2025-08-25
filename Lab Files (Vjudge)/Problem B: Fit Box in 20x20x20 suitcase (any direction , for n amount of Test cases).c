
#include<stdio.h>

int main()
{
    int Tcase, L, W, H, CaseNum;
    scanf("%d", &Tcase);
    for( CaseNum = 1; CaseNum <= Tcase; CaseNum++)
    {
    scanf("%d %d %d", &L, &W, &H);
        if(L <= 20 && W <= 20 && H<= 20)
            printf("Case %d: good\n", CaseNum);
        else

            printf("Case %d: bad\n", CaseNum);
    }
    return 0;

}

