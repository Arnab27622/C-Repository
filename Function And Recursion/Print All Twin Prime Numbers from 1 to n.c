#include <stdio.h>
// Print All Twin Prime Numbers from 1 to n
int twinprime(int n) // Check Prime Number
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf(" Enter the last number : ");
    scanf(" %d", &num);
    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (twinprime(i) && twinprime(i + 2))
        {
            printf(" \n The Twin Prime Number is: (%d, %d) ", i, i + 2);
            count++;
        }
    }
    printf(" \n \n Total number of Twin Prime pairs: %d", count);
    return 0;
}