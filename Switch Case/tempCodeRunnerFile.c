#include <stdio.h>
#include <stdlib.h>
// A Simple Arithmatic Calculator
int main()
{
    float num1, num2, result;
    char ch;
    printf("Enter first number\n");
    scanf("%f", &num1);
    printf("Enter second number\n");
    scanf("%f", &num2);
    printf("Enter the operation\n");
    scanf(" %c", &ch);
    result = 0;
    switch (ch)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Division isn't possible");
            exit(0);
        }
        else
        {
            result = num1 / num2;
        }
        break;
    case '%':
        result = (int)num1 % (int)num2;
        break;
    default:
        printf("Enter a valid operation\n");
    }
    printf("Result: %f %c %f = %f \n", num1, ch, num2, result);
    return 0;
}