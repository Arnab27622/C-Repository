#include <stdio.h>
/*
    1
    13
    135
    1357
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}