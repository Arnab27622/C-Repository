#include <stdio.h>
// Calculate HCF
int main()
{
    int x, y;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &x, &y);
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    printf("HCF is %d", y);
    return 0;
}