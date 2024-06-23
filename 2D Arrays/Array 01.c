// Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2)
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elments of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int l1, l2, r1, r2;
    printf("Enter the value of (l1,r1) : ");
    scanf("%d%d", &l1, &r1);
    printf("Enter the value of (l2,r2) : ");
    scanf("%d%d", &l2, &r2);

    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("The sum of the rectangle (l1,r1) to (l2,r2) is %d", sum);
    return 0;
}