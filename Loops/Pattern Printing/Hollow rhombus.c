#include <stdio.h>
/*
        ****
       *  *
      *  *
     ****
*/
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            if (i == 1 || i == n || k == 1 || k == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nsp--;
        printf("\n");
    }
    return 0;
}