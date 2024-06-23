#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of columns of the array : ");
    scanf("%d", &m);
    printf("Enter number of rows of the array : ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elements of the first array :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int brr[n][m];
    printf("Enter the elements of the second array :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }

    printf("\n");
    printf("The result matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}