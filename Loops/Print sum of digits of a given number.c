#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    int sum = 0;
    int ld = 0; // id is least digit of the given number

    while (n > 0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("The sum of digits of given number is %d", sum);
    return 0;
}