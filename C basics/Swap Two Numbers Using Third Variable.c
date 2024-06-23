#include <stdio.h>
// Swap Two Numbers Using Third Variable
int main()
{
    int a, b, swap; // declacing 3 vars
    printf("Enter first number:\t");
    scanf("%d", &a);
    printf("Enter 2nd number:\t");
    scanf("%d", &b);
    swap = a;
    a = b;
    b = swap;
    printf("After Swapping: \n");
    printf("First number is %d\n", a);
    printf("Second number is %d", b);
    return 0;
}
