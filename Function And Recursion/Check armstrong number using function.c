#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    originalNum = num;
    digits = (int)log10(num) + 1;
    while (num > 0)
    {
        lastDigit = num % 10;
        sum += round(pow(lastDigit, digits));
        num /= 10;
    }
    return (originalNum == sum);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    return 0;
}