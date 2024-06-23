#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // this will store value of *x that is value of a in temp
    *x = *y;       // this will store value of *y that is value of b in *x that is a
    *y = temp;     // this will store the value of temp in *y that is b
    return;
}

int main()
{
    int a, b;
    printf("Enter the number a : ");
    scanf("%d", &a);
    printf("Enter the number b : ");
    scanf("%d", &b);

    printf("Before swapping the numbers are %d and %d.\n", a, b);

    swap(&a, &b);

    printf("After swapping the numbers are\n");
    printf("%d and ", a);
    printf("%d", b);

    return 0;
}
