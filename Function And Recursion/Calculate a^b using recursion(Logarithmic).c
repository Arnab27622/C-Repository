#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int x = power(a, b / 2);
    if (b % 2 == 0) // b is even
        return x * x;
    else
        return x * x * a;
}
int main()
{
    int a, b;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the exponential : ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("The answer is %d", p);
    return 0;
}