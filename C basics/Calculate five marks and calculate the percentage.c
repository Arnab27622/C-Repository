#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the marks : \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int percentage;
    percentage = (a + b + c + d + e) / 5;
    printf("The percentage is %d", percentage);
    return 0;
}