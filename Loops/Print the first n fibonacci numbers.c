#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the number\n");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int f = a + b;
    printf("the fibonacci series is %d, %d, ", a, b);
    for (i = 3; i <= n; i++)
    {
        printf("%d, ", f);
        a = b;
        b = f;
        f = a + b;
    }
    return 0;
}