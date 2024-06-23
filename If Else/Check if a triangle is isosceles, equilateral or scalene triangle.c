#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the sides : \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3)
    {
        printf("equilateral triangle\n");
    }
    if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("isoceles triangle\n");
    }
    else
    {
        printf("scalene triangle\n");
    }
    return 0;
}