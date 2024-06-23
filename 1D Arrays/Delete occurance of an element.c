// Input an array of n elements and an item from the user. Delete the occurrences of the element from the array
#include <stdio.h>
void delete(int arr[], int *n, int item)
{
    int i, j;
    for (i = 0, j = 0; i < *n; i++)
    {
        // If the current element is not equal to the item, keep it
        if (arr[i] != item)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    // Update the size of the array after deletion
    *n = j;
}

int main()
{
    int n, item;
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the item to be deleted
    printf("Enter the item to be deleted: ");
    scanf("%d", &item);

    // Call the function to delete occurrences of the item from the array
    delete(arr, &n, item);

    // Display the updated array
    printf("Array after deleting %d:\n", item);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
