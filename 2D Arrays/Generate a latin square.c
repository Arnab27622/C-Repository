#include <stdio.h>

void generateLatinSquare(int n, int square[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            square[i][j] = (i + j) % n + 1;
        }
    }
}

void printLatinSquare(int n, int square[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the order of the Latin square: ");
    scanf("%d", &n);

    // Check if the order is greater than 0
    if (n <= 0)
    {
        printf("Order must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Create a 2D array to store the Latin square
    int latinSquare[n][n];

    // Generate and print the Latin square
    generateLatinSquare(n, latinSquare);
    printf("Latin Square of order %d:\n", n);
    printLatinSquare(n, latinSquare);

    return 0;
}
