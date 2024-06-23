#include <stdio.h>
/*
    123456789
    1234 6789
    123   789
    12     89
    1       9
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d ", a);
            a++;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}