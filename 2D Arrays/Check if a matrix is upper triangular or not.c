#include <stdio.h>

int UpperTriangular(int matrix[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // Check for non-zero elements below the main diagonal
            if (matrix[i][j] != 0)
            {
                return 0; // Not an upper triangular matrix
            }
        }
    }
    return 1; // It is an upper triangular matrix
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

    if (UpperTriangular(matrix, n))
    {
        printf("The matrix is an upper triangular matrix.\n");
    }
    else
    {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    return 0;
}
