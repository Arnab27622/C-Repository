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
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxSum = INT_MIN, index;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
            
            if (maxSum < arr[i][j])
            {
                maxSum = arr[i][j];
                index = i;
            }
        }
    }

    printf("The row number havig max sum is %d", index);
    return 0;
}