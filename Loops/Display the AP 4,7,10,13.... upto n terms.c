#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        a += 3;
    }
    return 0;
}