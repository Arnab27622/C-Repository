#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of columns of the matrix : ");
    scanf("%d", &m);
    printf("Enter number of rows of the matrix : ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elements of the first matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum2 += arr[i][j];
            }
        }
    }

    printf("The sum of elements of main diagonal is %d\n", sum1);
    printf("The sum of elements of minor diagonal is %d\n", sum2);
    return 0;
}