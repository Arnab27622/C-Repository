#include <stdio.h>
/*
    *     *
    **   **
    *** ***
    *******
    *** ***
    **   **
    *     *
*/
int main()
{
    int n;
    printf("enter no of lines ");
    scanf("%d", &n);
    int nst = 1;
    int nsp = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("* ");
        }
        nst++;
        nsp -= 2;
        printf("\n");
    }
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("* ");
    }
    printf("\n");
    int nst2 = n;
    int nsp2 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst2; j++)
        {
            printf("* ");
        }
        for (int k = 1; k <= nsp2; k++)
        {
            printf("  ");
        }
        for (int l = 1; l <= nst2; l++)
        {
            printf("* ");
        }
        nst2--;
        nsp2 += 2;
        printf("\n");
    }
    return 0;
}