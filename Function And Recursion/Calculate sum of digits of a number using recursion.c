#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    return ((n % 10) + sum(n / 10));
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int s = sum(n);
    printf("The sum of the digits is %d", s);
    return 0;
}