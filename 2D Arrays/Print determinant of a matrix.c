#include <stdio.h>

#define N 10

double determinant(int matrix[N][N], int n)
{
    if (n == 1)
    {
        return matrix[0][0];
    }
    else
    {
        double det = 0;
        int sign = 1;

        for (int i = 0; i < n; i++)
        {
            // Calculate the cofactor matrix
            int submatrix[N][N];
            for (int j = 1; j < n; j++)
            {
                int submatrix_col = 0;
                for (int k = 0; k < n; k++)
                {
                    if (k != i)
                    {
                        submatrix[j - 1][submatrix_col++] = matrix[j][k];
                    }
                }
            }

            // Recursively calculate the determinant
            det += sign * matrix[0][i] * determinant(submatrix, n - 1);

            // Change the sign for the next term
            sign = -sign;
        }

        return det;
    }
}

int main()
{
    int matrix[N][N], n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Check if the matrix is square
    if (n <= N)
    {
        double det = determinant(matrix, n);
        printf("Determinant: %.2f\n", det);
    }
    else
    {
        printf("Matrix is too large. Please enter a smaller square matrix.\n");
    }

    return 0;
}
