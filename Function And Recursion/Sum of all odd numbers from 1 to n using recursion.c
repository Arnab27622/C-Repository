#include <stdio.h>
void odd(int m, int n, int s)
{
    if (m > n)
    {
        printf("The sum of odd numbers is %d", s);
        return;
    }
    odd(m + 2, n, s + m);
    return;
}
int main()
{
    int n;
    printf("Enter the range 1 to ");
    scanf("%d", &n);
    odd(1, n, 0);
    return 0;
}