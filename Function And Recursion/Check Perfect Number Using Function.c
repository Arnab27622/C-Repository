#include <stdio.h>
int isPerfect(int num)
{
    int i, sum, n;
    sum = 0;
    n = num;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return (num == sum);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }

    return 0;
}