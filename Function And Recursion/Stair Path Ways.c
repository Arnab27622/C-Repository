#include <stdio.h>
// only 1 and 2 steps are allowed
int stairs(int n)
{
    if (n <= 2)
        return n;
    int TotalWays = stairs(n - 1) + stairs(n - 2);
    return TotalWays;
}
int main()
{
    int n;
    printf("Enter No of stairs : ");
    scanf("%d", &n);
    int NoOfWays = stairs(n);
    printf("The number of ways are %d", NoOfWays);
    return 0;
}