#include <stdio.h>
void count(int n, int c)
{
    if (n == 0)
    {
        printf("The number of digits is %d", c);
        return;
    }
    count(n / 10, c + 1);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    count(n, 0);
    return 0;
}