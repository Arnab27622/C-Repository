#include <stdio.h>
// Find Sum and Product Of Two Numbers Using Call By Address
void SumProduct(int a, int b, int *sum, int *product)
{
    *sum = a + b;
    *product = a * b;
    return;
}
int main()
{
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    int sum, product;

    SumProduct(a, b, &sum, &product);
    
    printf("Sum of the Numbers is %d\n", sum);
    printf("Product of the Numbers is %d", product);
    return 0;
}