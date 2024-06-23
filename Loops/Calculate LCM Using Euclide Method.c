#include <stdio.h>
// Calculate LCM
int main()
{
    int x, y, gcd, lcm, numerator, denominator, remainder;
    printf("Enter A Number\n");
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        numerator = x;
        denominator = y;
    }
    else
    {
        numerator = y;
        denominator = x;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = (x * y) / gcd;
    printf("GCD of %d and %d is %d\n", x, y, gcd);
    printf("LCM of %d and %d is %d", x, y, lcm);
    return 0;
}