#include <stdio.h>

void spiral(int m, int n, int arr[][m])
{
    int maxr = n - 1;
    int minr = 0;
    int maxc = m - 1;
    int minc = 0;
    int totalelements = n * m;
    int count = 0;
    printf("The result is :\n");
    while (count < totalelements)
    {
        // print the minimum row
        for (int j = minc; j <= maxc && count < totalelements; j++)
        {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        // print the maximum column
        for (int i = minr; i <= maxr && count < totalelements; i++)
        {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for (int j = maxc; j >= minc && count < totalelements; j--)
        {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
        // print the minimum column
        for (int i = maxr; i >= minr && count < totalelements; i--)
        {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }
}

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

    spiral(m, n, arr);
    return 0;
}