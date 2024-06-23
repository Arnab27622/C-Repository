#include <stdio.h>
// Function to convert decimal to binary and store in an array
void decimalToBinary(int n, int binaryArray[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        binaryArray[i] = n % 2;
        n /= 2;
    }
}

int main()
{
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Determine the number of bits needed based on the size of an int
    int size = sizeof(int) * 8;

    // Array to store binary representation
    int binaryArray[size];

    // Convert decimal to binary
    decimalToBinary(decimalNumber, binaryArray, size);

    printf("Binary Representation : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", binaryArray[i]);
    }
    return 0;
}
