#include <stdio.h>
// Calculate Area And Perimeter Of A Rectangle Using Call By Address
void AreaPeri(int length, int width, int *area, int *peri)
{
    *area = length * width;
    *peri = 2 * (length + width);
    return;
}
int main()
{
    int a, b, area, perimeter;
    printf("Enter Sides of The Rectangle : ");
    scanf("%d%d", &a, &b);
    AreaPeri(a, b, &area, &perimeter);
    printf("Area of The Rectangle is %d\n", area);
    printf("Perimeter of The Rectangle is %d", perimeter);
    return 0;
}