#include <stdio.h>
int main()
{
    int n;
    printf("enter the range : 1 to ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        int a = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            sum = sum + i;
        }
    }
    printf("the sum of all prime numbers is %d", sum);
    return 0;
}