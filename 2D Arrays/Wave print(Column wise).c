#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The result is :\n");
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[j][i]);
            }
        }
    }
    return 0;
}