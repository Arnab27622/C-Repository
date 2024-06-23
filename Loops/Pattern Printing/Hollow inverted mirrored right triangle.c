#include <stdio.h>
/*
    *****
     *  *
      * *
       **
        *
*/
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int nsp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            if (i == 1 || k == 1 || (k + i == n + 1))
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