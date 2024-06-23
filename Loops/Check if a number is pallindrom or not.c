#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    int num = n;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    if (r == num)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}