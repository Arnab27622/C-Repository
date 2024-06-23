#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size], freq[size];

    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        // Initially initialize frequencies to 1
        freq[i] = 1;
    }

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;

                // Make sure not to count frequency of same element again
                freq[j] = 0;
            }
        }

        // If frequency of current element is not counted
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}