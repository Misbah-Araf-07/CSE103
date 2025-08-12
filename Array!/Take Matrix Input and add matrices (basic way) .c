#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);

    int a[r][c], b[r][c], sum[r][c], i=0,j=0;    
    printf("Enter elements of Matrix A (elements=%d):  ",r*c);
    
    for (i = 0; i < r; i++) 
        {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

        }

        

    printf("Enter elements of Matrix B (elements=%d):  ",r*c);
    for (i = 0; i < r; i++)
    {

        {
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
        }
    }

    
    
    printf("Sum of the matrx:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
            }
        printf("\n");
    }

    return 0;
}
