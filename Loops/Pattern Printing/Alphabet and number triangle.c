#include <stdio.h>
/*
    1
    AB
    123
    ABCD
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
            int d = a + 64;
            char ch = (char)d;
            if (i % 2 != 0)
            {
                printf("%d ", j);
            }
            else
            {
                printf("%c ", ch);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}