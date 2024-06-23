// Input an array of n elements remove all duplicate elements and print the new array.
#include <stdio.h>
void delete(int arr[], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n;)
        {
            // If a duplicate is found, remove it
            if (arr[i] == arr[j])
            {
                for (int k = j; k < *n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
            }
            else
            {
                j++;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    delete (arr, &n);

    printf("Array after deleting duplicate elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}