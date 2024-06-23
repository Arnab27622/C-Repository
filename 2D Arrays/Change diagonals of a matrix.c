#include <stdio.h>

void changeDiagonals(int matrix[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - i - 1];
        matrix[i][n - i - 1] = temp;
    }
}

void display(int matrix[][100], int n)
{
    printf("Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[100][100], n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal ");
    display(matrix, n);

    changeDiagonals(matrix, n);

    printf("\nAfter changing diagonals\n");
    display(matrix, n);

    return 0;
}
