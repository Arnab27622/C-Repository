#include <stdio.h>
// function to calculate the factorial
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int factorial = n * fact(n - 1);
    return factorial;
}
// function to check if a number is a strong number or not
int Check(int n)
{
    int num = n;
    int sum = 0;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        sum += fact(rem);
        n /= 10;
    }
    return (num==sum);
}
int main()
{
    int m, n;
    printf("Enter the lower limit : ");
    scanf("%d", &m);
    printf("Enter the uppre limit : ");
    scanf("%d", &n);
    for (int i = m; i <= n; i++)
    {
        if (Check(i))
        {
            printf("%d is a strong number.\n", i);
        }
    }
    return 0;
}