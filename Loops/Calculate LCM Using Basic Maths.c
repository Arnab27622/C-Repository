#include <stdio.h>
// Calculate LCM
int main()
{
    int x, y, max;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &x, &y);
    max = x < y ? y : x;
    for (int i = max; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            printf("LCM is %d", i);
            break;
        }
    }
    return 0;
}