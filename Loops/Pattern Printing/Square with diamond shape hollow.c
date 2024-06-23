#include <stdio.h>
/*
******
**  **
*    *
**  **
******
*/
int main()
{
    int n;
    printf("Enter the number of lines : ");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    int nsp = 0;
    int nst = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }
        if (i < n / 2 + 1)
        {
            nst--;
            nsp += 2;
        }
        else
        {
            nst++;
            nsp -= 2;
        }
        printf("\n");
    }
}