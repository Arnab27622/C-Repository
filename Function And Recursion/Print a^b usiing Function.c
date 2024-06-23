#include <stdio.h>
#include <math.h>
int power(int a, int b)
{
    return pow(a, b);
}
int main()
{
    int a, b;
    printf("enter the base : ");
    scanf("%d", &a);
    printf("enter the exponential : ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("The answer is %d", p);
    return 0;
}