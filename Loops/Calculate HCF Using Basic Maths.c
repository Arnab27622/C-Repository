#include <stdio.h>
// Calculate HCF
int main()
{
    int x, y, min;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &x, &y);
    min = x > y ? y : x;
    for (int i = min; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            printf("HCF is %d", i);
            break;
        }
    }
    return 0;
}