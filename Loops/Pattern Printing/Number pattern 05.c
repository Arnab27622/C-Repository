#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("Enter number of columns : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == (n + 1) / 2 && j == (m + 1) / 2)
            {
                printf("0");
            }
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}