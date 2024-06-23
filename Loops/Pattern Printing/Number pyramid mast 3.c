#include <stdio.h>
/*
    123454321
    1234 4321
    123   321
    12     21
    1       1
*/
int main()
{
    int n;
    printf("Enter the of lines : ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        if (i <= n + 1)
            printf("%d ", i);
        else
            printf("%d ", 2 * (n + 1) - i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", j);
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d ", nst + 1 - l);
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}