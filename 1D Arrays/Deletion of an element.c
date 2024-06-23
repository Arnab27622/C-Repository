#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void deleteNumber(int array[], int size, int position)
{
    if (position < 0 || position > size)
    {
        printf("Invalid position\n");
        return;
    }
    else
    {
        for (int i = position; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
    }
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

    printf("\nEnter the position to delete the number: ");
    scanf("%d", &position);

    printf("Array before deletion:\n");
    display(array, size);

    deleteNumber(array, size, position);
    size--;
    printf("Updated array after deletion:\n");
    display(array, size);

    return 0;
}
