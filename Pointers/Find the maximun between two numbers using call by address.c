#include <stdio.h>

void compare(int num1, int num2, int *max, int *min);

int main()
{
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    int max, min;

    compare(num1, num2, &max, &min);

    printf("The max between two nmubers is %d\n", max);
    printf("The min between two nmubers is %d\n", min);

    return 0;
}

void compare(int num1, int num2, int *max, int *min)
{
    *max = (num1 > num2) ? num1 : num2;
    *min = (num1 < num2) ? num1 : num2;
    return;
}
