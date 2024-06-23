#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int recAns = a * power(a, b - 1);
    return recAns;
}
int main()
{
    int a, b;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the exponential : ");
    scanf("%d", &b);
    long int p = power(a, b);
    printf("The %d^%d  is = %ld\n", a, b, p);
    return 0;
}