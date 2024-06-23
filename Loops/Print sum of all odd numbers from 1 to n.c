#include <stdio.h>
int main()
{
    int n;
    printf("enter the range 1 to ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("the sum of natural numbers is %d", sum);
    return 0;
}