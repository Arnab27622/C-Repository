#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    float t, r1, r2;
    printf("Enter values\n");
    scanf("%d%d%d", &a, &b, &c);
    t = b * b - 4 * a * c;
    if (t < 0)
    {
        printf("-ve value is not possible");
        exit(0);
    }
    r1 = (-b + sqrt(t)) / (2 * a);
    r2 = (-b - sqrt(t)) / (2 * a);
    printf("The roots are %f and %f", r1, r2);
    return 0;
}
