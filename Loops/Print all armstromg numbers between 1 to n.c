#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, ld, digits, sum;
    printf("enter the range : 1 to ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        num = i;
        digits = (int)log10(num) + 1;
        while (num > 0)
        {
            ld = num % 10;
            sum = sum + round(pow(ld, digits));
            num = num / 10;
        }
        if (i == sum)
        {
            printf("%d is armstrong number\n", i);
        }
    }
    return 0;
}