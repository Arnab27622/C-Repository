#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, p;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("Enter the power : ");
    scanf("%d", &y);
    p = pow(x, y);
    printf("%d ^ %d is %d", x, y, p);
    return 0;
}