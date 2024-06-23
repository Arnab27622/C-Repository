#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Declare First Matrix
    int m, n;
    printf("Enter the number of columns of the first matrix : ");
    scanf("%d", &m);
    printf("Enter the number of rows of the first matrix : ");
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

    // Declare Second Matrix
    int p, q;
    printf("Enter the number of columns of the second matrix : ");
    scanf("%d", &p);
    printf("Enter the number of rows of the second matrix : ");
    scanf("%d", &q);

    int brr[q][p];
    printf("Enter the elements of the second matrix :\n");
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    int res[n][p]; // Declare Resultant Matrix

    if (m != q) // if col of 1st matrix != row of 2nd matrix then multiplication not possible
    {
        printf("Multiplication is not possible");
        exit(0);
    }
    else // Multiplication Programe
    {
        int cr = m; // it can be m or q
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < cr; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
    }

    // print the result
    printf("The result matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}