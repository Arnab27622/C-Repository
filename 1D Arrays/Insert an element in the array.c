#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int insertNumber(int array[], int size, int position, int number)
{
    if (position < 0 || position > size)
    {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = size - 1; i >= position; i--)
    {
        array[i + 1] = array[i];
    }

    array[position] = number;
    return 1;
}

int main()
{
    int array[100];
    int size, position, number;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array before insertion:\n");
    display(array, size);

    printf("\nEnter the position to insert the number: ");
    scanf("%d", &position);
    printf("Enter the number to insert: ");
    scanf("%d", &number);

    if (insertNumber(array, size, position, number))
    {
        size++;
        printf("Updated array after insertion:\n");
        display(array, size);
    }
    else
    {
        exit(0);
    }

    return 0;
}
