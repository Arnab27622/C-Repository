#include <stdio.h>
// You are only allowed to go right and down
int maze(int n, int m)
{
    int rightways = 0;
    int downways = 0;
    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
    {
        rightways += maze(n, m - 1);
    }
    if (m == 1)
    {
        downways += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightways += maze(n, m - 1);
        downways += maze(n - 1, m);
    }
    int TotalWays = rightways + downways;
    return TotalWays;
}
int main()
{
    int n, m;
    printf("Enter No of rows : ");
    scanf("%d", &n);
    printf("Enter no of columns : ");
    scanf("%d", &m);
    int ways = maze(n, m);
    printf("Number of Total Ways is %d", ways);
    return 0;
}