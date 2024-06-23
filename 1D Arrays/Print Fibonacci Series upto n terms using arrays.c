#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of terms in the Fibonacci series : ");
    scanf("%d", &n);

    //Base cases
    if (n <= 0)
    {
        printf("invalid, Please enter a positive integer");
        exit(0);
    }

    int fib[n];

    // Initialize the first two terms of the Fibonacci series
    fib[0] = 0;
    if (n >= 2)
        fib[1] = 1;

    // Generate the Fibonacci series using a loop
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Thr fibonacci Series is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", fib[i]);
    }
    return 0;
}