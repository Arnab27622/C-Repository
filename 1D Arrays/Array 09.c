// Write a programme to reverse the contents of an array without using a second array
#include <stdio.h>
void reverse(int arr[], int n)
{
    int temp;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array before reverse: ");
    printArray(arr, n);
    printf("\n");

    reverse(arr, n);

    printf("The Reversed array is : ");
    printArray(arr, n);
    return 0;
}