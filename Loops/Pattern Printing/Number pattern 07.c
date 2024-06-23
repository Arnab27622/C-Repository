#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    printf("Enter number of columns : ");
    do
    {
        scanf("%d", &m);
    } while (n % 2 == 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == j || j == (m + 1) - i)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}