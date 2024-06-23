#include <stdio.h>
// only 1, 2 and 3 steps are allowed
int stairs(int n)
{
    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    int TotalWays = stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
    return TotalWays;
}
int main()
{
    int n;
    printf("Enter no of stairs : ");
    scanf("%d", &n);
    int Ways = stairs(n);
    printf("Number of ways are %d", Ways);
    return 0;
}