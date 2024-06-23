#include <stdio.h>
void findTwosComplement(int binary[], int size)
{
    int i;
    // Find the rightmost 1 in the binary representation
    for (i = size - 1; i >= 0; i--)
    {
        if (binary[i] == 1)
        {
            break;
        }
    }

    // Flip all the bits to the left of the rightmost 1
    for (int j = i - 1; j >= 0; j--)
    {
        binary[j] = (binary[j] == 0) ? 1 : 0;
    }
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int size = sizeof(int) * 8;

    int binary[size];
    int i = 0;

    // Handle negative numbers
    if (num < 0)
    {
        printf("Negative numbers are not supported in this example.\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Pad with zeros if necessary
    while (i < size)
    {
        binary[i] = 0;
        i++;
    }

    // Print the binary representation
    printf("Binary representation: ");
    for (int j = size - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    // Calculate and print the 2's complement
    findTwosComplement(binary, size);

    printf("2's complement: ");
    for (int j = size - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
