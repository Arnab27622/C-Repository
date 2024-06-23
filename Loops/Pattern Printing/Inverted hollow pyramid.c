#include <stdio.h>
/*
    *******
    *   *
    * *
    *
 */
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    int nsp = 0;
    for (int i = 1; i <= n; i++)
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
    return 0;
}