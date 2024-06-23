#include <stdio.h>
// Finding Absolute Value Of A Number
int main()
{
    int f; // declaring 1 vars
    printf("Enter a number\t");
    scanf("%d", &f);
    if (f < 0)
        f = f * (-1);
    printf("Absolute Value is %d", f);
    return 0;
}
