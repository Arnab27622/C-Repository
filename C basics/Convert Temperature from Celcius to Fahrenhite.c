#include <stdio.h>
// Convert Temperature from Celcius to Fahrenhite
int main()
{
    float c, f; // declaring 2 vars
    printf("enter temperature\t");
    scanf("%f", &c);
    f = ((9 * c) / 5) + 32;
    printf("temperature in fahrenhite is %f", f);
    return 0;
}
