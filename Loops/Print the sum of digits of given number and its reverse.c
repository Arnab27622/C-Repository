#include <stdio.h>
int main()
{
    int n, sum;
    printf("enter a number\n");
    scanf("%d", &n);
    int N = n;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    sum = N + r;
    printf("The sum is %d", sum);
    return 0;
}