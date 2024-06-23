#include <stdio.h>
// Sum and Average of decimal numbers
int main()
{
    float a, b, c, sum, avg; // declaring 5 vars
    printf("enter three numbers\t");
    scanf("%f%f%f", &a, &b, &c);
    sum = a + b + c;
    avg = (a + b + c) / 3; // this will calculate sum and average
    printf("sum is %f and avg is %f", sum, avg);

    return 0;
}
