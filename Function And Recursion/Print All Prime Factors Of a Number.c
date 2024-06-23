#include <stdio.h>
// Print All Prime Factors Of a Number
int isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
factor(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
            {
                printf("%d,", i);
            }
        }
    }
    return;
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("The Prime Factors Of %d are ", n);
    factor(n);
    return 0;
}