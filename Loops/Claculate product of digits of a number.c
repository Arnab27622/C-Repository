#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    long int product = 1;
    int ld = 0; // id is least digit of the given number
    product = (n == 0) ? 0 : 1;
    while (n > 0)
    {
        ld = n % 10;
        product = product * ld;
        n = n / 10;
    }
    printf("The product of digits of given number is %ld", product);
    return 0;
}