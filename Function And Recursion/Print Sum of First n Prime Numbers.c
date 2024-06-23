#include <stdio.h>
// Print Sum of First n Prime Numbers
int prime(int n) // Check If Prime Number
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
int PrimeSum(int n, int s) // Calculate sum of all prime numbers
{
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
            s += i;
    }
    int sum = s;
    return sum;
}
int main()
{
    int n;
    printf("Enter the Range 1 to ");
    scanf("%d", &n);
    int s = PrimeSum(n, 0);
    printf("The Sum of Prime Numbers is %d", s);
    return 0;
}