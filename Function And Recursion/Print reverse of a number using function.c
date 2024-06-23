#include <stdio.h>
int reverse(int n)
{
    int r = 0;
    int ld = 0;
    while (n > 0)
    {
        r *= 10;
        ld = n % 10;
        r += ld;
        n /= 10;
    }
    return r;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The reverse of %d is %d", n, reverse(n));
    return 0;
}