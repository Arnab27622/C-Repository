#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    int recAns = n * fact(n - 1);
    return recAns;
}
int nCr(int n, int r)
{
    int nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}
int main()
{
    int n, r;
    printf("enter value of n and r : ");
    scanf("%d%d", &n, &r);
    printf("the answer is %d", nCr(n, r));
    return 0;
}