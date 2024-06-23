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
    int n; // n must be a odd number
    printf("Enter Number of Lines : ");
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0);
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        if (i < n / 2 + 1)
            nst += 2;
        else
            nst -= 2;
        printf("\n");
    }
    return 0;
}