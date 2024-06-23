#include <stdio.h>
// Solve Ackermann Function
int ack(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if ((m > 0) && (n == 0))
    {
        return ack(m - 1, 1);
    }
    else if ((m > 0) && (n > 0))
    {
        return ack(m - 1, ack(m, n - 1));
    }
}
int main()
{
    int m, n;
    printf("Enter Two Non-negative Integers : ");
    scanf("%d%d", &m, &n);
    int A = ack(m, n);
    printf("The Answer of The Function is %d", A);
    return 0;
}