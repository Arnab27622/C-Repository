#include <stdio.h>
#include <windows.h>
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
    printf("Enter the number of lines : ");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    int nst = n / 2 + 1;
    int nsp = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            Sleep(1000);
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            Sleep(1000);
            printf("*");
        }
        if (i < n / 2 + 1)
        {
            nst--;
            nsp--;
        }
        else
        {
            nst++;
            nsp++;
        }
        printf("\n");
    }
    return 0;
}