#include <stdio.h>
/*
    *
    *
  *****
    *
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = (n / 2) + 1;
            if (i == a || j == a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}