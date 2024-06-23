#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of columns/rows : ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        int j = n - 1;
        while (k < j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;

            k++;
            j--;
        }
    }

    printf("The rotated matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}