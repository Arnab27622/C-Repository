#include <stdio.h>
// Function to convert decimal to hexadecimal and store in an array
void decimalToHexadecimal(int n, char hexadecimalArray[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        int remainder = n % 16;

        if (remainder < 10)
        {
            hexadecimalArray[i] = remainder + '0';
        }
        else
        {
            hexadecimalArray[i] = remainder - 10 + 'A';
        }

        n /= 16;
    }
}

int main()
{
    int decimalNumber;

    // Get input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Determine the number of characters needed for the hexadecimal representation
    int size = sizeof(int) * 2;

    // Array to store hexadecimal representation
    char hexadecimalArray[size];

    // Convert decimal to hexadecimal
    decimalToHexadecimal(decimalNumber, hexadecimalArray, size);

    printf("Hexadecimal Representation: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", hexadecimalArray[i]);
    }
    return 0;
}
