#include <stdio.h>
int isPrime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    return 0;
}