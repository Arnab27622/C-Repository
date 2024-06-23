#include <stdio.h>
/*
        *
       ***
      *****
       ***
        *
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    int nst = 1;
    int nsp = n / 2;
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
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}