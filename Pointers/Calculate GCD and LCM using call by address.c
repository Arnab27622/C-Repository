#include <stdio.h>
// Calculate GCD and LCM using call by Address
int findGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int findLCM(int a, int b)
{
    return (a * b) / findGCD(a, b);
}

void calculate(int num1, int num2, int *gcd, int *lcm)
{
    *gcd = findGCD(num1, num2);
    *lcm = findLCM(num1, num2);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    int gcd, lcm;

    calculate(num1, num2, &gcd, &lcm);

    printf("GCD (HCF) of %d and %d is : %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is : %d\n", num1, num2, lcm);
    return 0;
}