#include <stdio.h>
int sparse(int m, int n, int matrix[][m])
{
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    return (count1 > count2);
}
int main()
{
    int m, n;
    printf("Enter the columns of the matrix: ");
    scanf("%d", &m);
    printf("Enter the rows of the matrix: ");
    scanf("%d", &n);

    int matrix[n][m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (sparse(m, n, matrix))
    {
        printf("The matrix is a sparse matrix.");
    }
    else
    {
        printf("The matrix is not a sparse matrix.");
    }
    return 0;
}