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
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}