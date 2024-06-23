#include <stdio.h>
// Check If A Number Is Automorphic Or Not
int main()
{
    long int n, num, sqr;
    int temp, rem, f = 0;
    printf("Enter A Number\n");
    scanf("%ld", &n);
    num = n;
    sqr = n * n;
    temp = 10;
    while (n > 0)
    {
        rem = sqr % temp;
        if (num == rem)
        {
            f = 1;
            break;
        }
        n = n / 10;
        temp = temp * 10;
    }
    if (f == 1)
        printf("%ld is A Automorphic Number\n", num);
    else
        printf("%ld is not A Automorphic Number\n", num);
    printf("Square of %ld is %ld", num, sqr);
    return 0;
}