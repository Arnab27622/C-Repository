#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int recAns = n * fact(n - 1);
    return recAns;
}
int combination(int n, int r)
{
    int nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}
int main()
{
    int n;
    printf("entre the number of lines : ");
    scanf("%d", &n);
    int nsp = n - 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            int iCk = combination(i, k);
            printf("%d ", iCk);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}