#include <stdio.h>
int check(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int m, n;
    printf("Enter the lower limit : ");
    scanf("%d", &m);
    printf("Enter the upper limit : ");
    scanf("%d", &n);
    for (int i = m; i <= n; i++)
    {
        if (check(i))
        {
            printf("%d is an even number\n", i);
        }
        else
        {
            printf("%d is an odd number\n", i);
        }
    }
    return 0;
}