#include <stdio.h>
/*
    *
   * *
  *   *
 */
int main()
{
    int n;
    printf("Enter the of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= n / 2 - i + 1; j++)
        {
            printf(" ");
        }
        //printf("*");
        for (int k = 1; k <= (2 * i) - 3; k++)
        {
            printf(" ");
        }
        if (i != 1)
            printf("*");
        printf("\n");
    }
    return 0;
}