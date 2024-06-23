#include <stdio.h>

int check(int n, int matrix[][n], int brr[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != brr[i][j])
            {
                return 0;
                break;
            }
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the columns/rows of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int brr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = matrix[j][i];
        }
    }

    if (check(n, matrix, brr))
    {
        printf("The matrix is a symmetric matrix");
    }
    else
    {
        printf("The matrix is not a symmetric matrix");
    }

    return 0;
}