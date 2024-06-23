#include <stdio.h>
// You are only allowed to go right and down
int maze(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec)
        return 1;
    if (cc == ec)
    {
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cr == er)
    {
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
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
    int ways = maze(1, 1, n, m);
    printf("Number of Total Ways is %d", ways);
    return 0;
}