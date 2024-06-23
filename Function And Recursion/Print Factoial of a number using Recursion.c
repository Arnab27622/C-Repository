#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    int recAns = n * factorial(n - 1);
    return recAns;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial of negative number isn't possible");
        exit(0);
    }
    else
    {
        int fact = factorial(n);
        printf("The factorial of %d is %d", n, fact);
    }

    return 0;
}