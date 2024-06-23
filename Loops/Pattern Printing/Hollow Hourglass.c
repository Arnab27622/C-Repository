#include <stdio.h>
int main()
{
    int n;
    printf("enter half of number of rows : ");
    scanf("%d", &n);
    int nsp = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * n - (2 * i - 1); k++)
        {
            if (i == 1 || k == 1 || k == 2 * n - (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nsp++;
        printf("\n");
    }
    int nsp2 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp2; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (i == n || k == 1 || k == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nsp2--;
        printf("\n");
    }
    return 0;
}