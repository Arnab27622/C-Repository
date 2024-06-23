#include <stdio.h>
/*
        *
       * *
      *   *
     *     *
      *   *
       * *
        *
*/
int main()
{
    int n;
    printf("Enter half of number of rows : ");
    scanf("%d", &n);
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nsp--;
        printf("\n");
    }
    int nsp2 = 1;
    int m = n - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= nsp2; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * m - (2 * i - 1); k++)
        {
            if (k == 1 || k == 2 * m - (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nsp2++;
        printf("\n");
    }
    return 0;
}