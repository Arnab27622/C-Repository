#include <stdio.h>
/*
    1
    12
    123
    1234
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}