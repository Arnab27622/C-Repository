#include <stdio.h>

void generateMagicSquare(int n)
{
    int magicSquare[n][n];

    // Initialize the magic square with 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magicSquare[i][j] = 0;

    // Set the position for the first number
    int i = n / 2;
    int j = n - 1;

    // Fill the magic square
    for (int num = 1; num <= n * n;)
    {
        if (i == -1 && j == n)
        {
            j = n - 2;
            i = 0;
        }
        else
        {
            // Wrap around the row if it goes out of bounds
            if (j == n)
                j = 0;

            // Wrap around the column if it goes out of bounds
            if (i < 0)
                i = n - 1;
        }

        // If the cell is already filled, move to the next position
        if (magicSquare[i][j] != 0)
        {
            j -= 2;
            i++;
            continue;
        }
        else
        {
            magicSquare[i][j] = num++;
        }

        j++;
        i--;
    }

    // Print the magic square
    printf("Magic Square of order %d:\n", n);
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
            printf("%3d ", magicSquare[x][y]);
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the order of the magic square (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Please enter an odd number for the order of the magic square.\n");
        return 1;
    }

    generateMagicSquare(n);

    return 0;
}
