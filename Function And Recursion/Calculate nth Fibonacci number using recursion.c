#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int recAns = fibonacci(n - 1) + fibonacci(n - 2);
    return recAns;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int f = fibonacci(n);
    printf("The %dth fibonacci number is %d", n, f);
    return 0;
}