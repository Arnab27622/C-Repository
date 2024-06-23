#include <stdio.h>
/*
   ****
    ***
     **
      *
     **
    ***
   ****
 */
int main()
{
    int n;
    printf("Enter Number of Lines : ");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    int nst = n / 2 + 1;
    int nsp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        if (i < n / 2 + 1)
        {
            nst--;
            nsp++;
        }
        else
        {
            nst++;
            nsp--;
        }
        printf("\n");
    }
    return 0;
}