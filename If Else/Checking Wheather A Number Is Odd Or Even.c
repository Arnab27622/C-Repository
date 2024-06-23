#include <stdio.h>
// Checking Wheather A Number Is Odd Or Even
int main()
{
    int n; // declaring 1 vars
    printf("Enter a number\t");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("The Number is Even");
    else
        printf("The Number is Odd");

    return 0;
}
