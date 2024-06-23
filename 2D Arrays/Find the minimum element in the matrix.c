#include <stdio.h>
#include <limits.h>
int main()
{
    int m, n;
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int min = INT_MAX;
    int indexcol, indexrow;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
                indexrow = i;
                indexcol = j;
            }
        }
    }

    printf("The min element is %d and it's index is (%d,%d)", min, indexrow, indexcol);
    return 0;
}