#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input for array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input for array element.\n");
            return 1;
        }
    }

    int key;
    printf("Enter key element: ");
    if (scanf("%d", &key) != 1)
    {
        printf("Invalid input for key element.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Search Successful, key '%d' found at index %d\n", key, i);
            return 0;
        }
    }

    printf("'%d' isn't present in the array\n", key);

    return 0;
}