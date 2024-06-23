#include <stdio.h>

#define MAX_SIZE 32 // Maximum size for a 32-bit binary number

int main()
{
    int binary[MAX_SIZE];
    int size;

    printf("Enter the size of the binary number: ");
    scanf("%d", &size);

    // Ensure that the size is within the defined maximum
    if (size > 0 && size <= MAX_SIZE)
    {
        printf("Enter the binary number (from left to right): ");
        for (int i = 0; i < size; i++)
        {
            scanf("%1d", &binary[i]);

            // Validate binary digit (should be 0 or 1)
            if (binary[i] != 0 && binary[i] != 1)
            {
                printf("Invalid binary digit. Please enter 0 or 1.\n");
                return 1;
            }
        }

        int decimal = 0;
        for (int i = 0; i < size; i++)
        {
            decimal = decimal * 2 + binary[i];
        }

        printf("Decimal equivalent: %d\n", decimal);
    }
    else
    {
        printf("Invalid size. Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    return 0;
}
