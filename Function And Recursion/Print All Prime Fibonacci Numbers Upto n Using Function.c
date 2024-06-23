#include <stdio.h>
// Print All Prime Fibonacci Numbers Upto n Using Function
int prime(int n)
{
    int a = 0;
    if (n == 0 || n == 1)
    {
        a = 1;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter The Range : 1 to ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int c = a + b;
    for (int i = 3; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        if (prime(c))
        {
            printf("%d,", c);
        }
    }
    return 0;
}