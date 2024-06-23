#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the number\n");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int f = a + b;
    for (i = 3; i < n; i++)
    {
        a = b;
        b = f;
        f = a + b;
    }
    printf("the %d fibonacci number is %d", i, f);
    return 0;
}