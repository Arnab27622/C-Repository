#include <stdio.h>
// Swap Two Numbers Whihout Using Third Variable
int main()
{
    int a, b; // declacing 2 vars
    printf("Enter first number:\t");
    scanf("%d", &a);
    printf("Enter 2nd number:\t");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping: \n");
    printf("First number is %d\n", a);
    printf("Second number is %d", b);
    return 0;
}
