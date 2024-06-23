#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input for array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
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

    int first = 0;
    int last = n - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == key)
        {
            printf("Search Successful, key %d found at index %d\n", key, mid);
            return 0;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    printf("Key not found! '%d' isn't present in the array\n", key);

    return 0;
}
