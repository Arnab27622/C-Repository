#include <stdio.h>
#include <math.h>
int main()
{
    int n, square_root;
    printf("enter the number : ");
    scanf("%d", &n);
    square_root = sqrt(n);
    printf("Square root of %d is %d", n, square_root);
    return 0;
}