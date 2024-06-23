#include <stdio.h>
void even(int m, int n, int s)
{
    if (m > n)
    {
        printf("The sum of odd numbers is %d", s);
        return;
    }
    even(m + 2, n, s + m);
    return;
}
int main()
{
    int n;
    printf("Enter the range 1 to ");
    scanf("%d", &n);
    even(2, n, 0);
    return 0;
}