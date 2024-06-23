#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        a += 2;
    }
    return 0;
}