#include <stdio.h>
/*
    *****
     ***
      * 
     ***
    *****
*/
int main()
{
    int n;
    printf("enter number of lines : ");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    int nsp = 0;
    int nst = n;
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
            nst -= 2;
            nsp++;
        }
        else
        {
            nst += 2;
            nsp--;
        }
        printf("\n");
    }
    return 0;
}