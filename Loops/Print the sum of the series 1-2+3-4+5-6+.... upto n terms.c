#include <stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("The sum is %d", sum);
    return 0;
}