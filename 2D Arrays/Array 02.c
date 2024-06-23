// Generate a n x n matrix filled with elements from 1 to n2 in spiral order
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the rows/columns of the matrix : ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the matrix :\n");
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int telement = n * n;
    int count = 0;
    while (count < telement)
    {
        // scan the minimum row
        for (int j = minc; j <= maxc && count < telement; j++)
        {
            scanf("%d", &arr[minr][j]);
            count++;
        }
        minr++;
        // scan the maximum column
        for (int i = minr; i <= maxr && count < telement; i++)
        {
            scanf("%d", &arr[i][maxc]);
            count++;
        }
        maxc--;
        // scan the maximum row
        for (int j = maxc; j >= minc && count < telement; j--)
        {
            scanf("%d", &arr[maxr][j]);
            count++;
        }
        maxr--;
        // scan the minimum column
        for (int i = maxr; i >= minr && count < telement; i--)
        {
            scanf("%d", &arr[i][minc]);
            count++;
        }
        minc++;
    }

    printf("The result matrix is :\n");
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