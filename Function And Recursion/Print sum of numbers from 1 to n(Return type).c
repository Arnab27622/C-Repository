#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    int recAns = n + sum(n - 1);
    return recAns;
}
int main()
{
    int n;
    printf("Enter the range 1 to ");
    scanf("%d", &n);
    int s = sum(n);
    printf("The sum is = %d", s);
    return 0;
}