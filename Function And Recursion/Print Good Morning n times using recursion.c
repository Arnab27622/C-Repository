#include <stdio.h>
void Greeting(int n)
{
    if (n == 0)
        return;
    printf("Good Morning\n");
    Greeting(n - 1);
    return;
}
int main()
{
    int n;
    printf("enter the range ");
    scanf("%d", &n);
    Greeting(n);
    return 0;
}