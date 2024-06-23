#include <stdio.h>
/*
    12345
    23456
    34567
*/
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("enter number of columns : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < m + i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}