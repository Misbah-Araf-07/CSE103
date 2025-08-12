#include <stdio.h>
#define INDEX 100

void input(int mat[INDEX][INDEX], int n, int m);
void output(int mat[INDEX][INDEX], int n, int m);
void addMatrices(int A[INDEX][INDEX], int B[INDEX][INDEX], int sum[INDEX][INDEX], int n, int m);

int main()
{
    int A[INDEX][INDEX], B[INDEX][INDEX], sum[INDEX][INDEX];
    int n, m;

    printf("Enter the number of rows and columns of matrices A and B:\n");
    scanf("%d %d", &n, &m);

    printf("Enter matrix A:\n");
    input(A, n, m);

    printf("Enter matrix B:\n");
    input(B, n, m);

    addMatrices(A, B, sum, n, m);

    printf("Matrix A:\n");
    output(A, n, m);

    printf("Matrix B:\n");
    output(B, n, m);

    printf("Sum of matrices A and B:\n");
    output(sum, n, m);

    return 0;
}

void input(int mat[INDEX][INDEX], int n, int m)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void output(int mat[INDEX][INDEX], int n, int m)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[INDEX][INDEX], int B[INDEX][INDEX], int sum[INDEX][INDEX], int n, int m)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}
