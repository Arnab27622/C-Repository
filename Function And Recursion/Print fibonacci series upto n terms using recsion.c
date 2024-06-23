#include <stdio.h>

void printFibonacci(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d,", a);
        printFibonacci(n - 1, b, a + b);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer for the number of terms.\n");
        return 1;
    }

    printf("Fibonacci series up to %d terms: ", n);

    printFibonacci(n, 0, 1);

    return 0;
}
