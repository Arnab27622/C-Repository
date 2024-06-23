#include <stdio.h>

int LowerTriangular(int matrix[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (LowerTriangular(matrix, n))
    {
        printf("The matrix is a lower triangular matrix.\n");
    }

    else
    {
        printf("The matrix is not a lower triangular matrix.\n");
    }
    return 0;
}