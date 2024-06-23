#include <stdio.h>
// Area and Perimeter of Rectangle
int main()
{
    float a, b, area, peri; // declaring 4 vars
    printf("enter the sides\n");
    scanf("%f%f", &a, &b);
    area = a * b;
    peri = 2 * (a + b); // this will calculate area and perimeter
    printf("area is %f and peri is %f", area, peri);

    return 0;
}
