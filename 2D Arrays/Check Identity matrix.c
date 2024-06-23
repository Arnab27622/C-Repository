#include <stdio.h>

int Identity(int matrix[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Check if the main diagonal has ones and other elements are zero
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                return 0; // Not an identity matrix
            }
        }
    }
    return 1; // It is an identity matrix
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

    if (Identity(matrix, n))
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }
    return 0;
}