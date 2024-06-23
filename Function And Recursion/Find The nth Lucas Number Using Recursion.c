#include <stdio.h>
// Find The nth Lucas Number Using Recursion
int Lucas(int n)
{
    if (n == 1)
        return 2;
    if (n == 2)
        return 1;
    int recAns = Lucas(n - 1) + Lucas(n - 2);
    return recAns;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int l = Lucas(n);
    printf("The %d Lucas Number is %d", n, l);
    return 0;
}