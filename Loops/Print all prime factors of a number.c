#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("The prime factors are ");
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
        if (n % i == 0)
        {
            if (a == 0)
            {
                printf("%d,", i);
            }
        }
    }
    return 0;
}