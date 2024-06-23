#include <stdio.h>
// Function to convert decimal to octal and store in an array
void decimalToOctal(int n, int octalArray[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        octalArray[i] = n % 8;
        n /= 8;
    }
}

int main()
{
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Determine the number of bits needed based on the size of an int
    int size = sizeof(int) * 8;

    // Array to store Octal representation
    int octalArray[size];

    // Convert decimal to Octal
    decimalToOctal(decimalNumber, octalArray, size);

    printf("Octal Representation : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", octalArray[i]);
    }
    return 0;
}
