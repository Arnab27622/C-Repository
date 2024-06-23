#include <stdio.h>

int check(int m, int n, int arr[][m], int brr[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != brr[i][j])
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

    int brr[n][m];
    printf("Enter the elements of the second matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    if (check(m, n, arr, brr))
    {
        printf("The matrices are equal");
    }
    else
    {
        printf("The matrices are not equal");
    }

    return 0;
}