#include <stdio.h>
void OnesComplement(int num, int binary[], int size)
{
    int i;
    // Convert the decimal number to binary and store it in the array
    for (i = size - 1; i >= 0; i--)
    {
        binary[i] = num % 2;
        num /= 2;
    }

    // Find the 1's complement by flipping each bit
    for (i = 0; i < size; i++)
    {
        binary[i] = (binary[i] == 0) ? 1 : 0;
    }
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Assuming a 16-bit binary representation
    int binary[16];

    // Call the function to find the 1's complement
    OnesComplement(num, binary, 16);

    // Display the original decimal number and its 1's complement in binary
    printf("Original Decimal: %d\n", num);
    printf("1's Complement  : ");
    for (int i = 0; i < 16; i++)
    {
        printf("%d", binary[i]);
    }

    return 0;
}
