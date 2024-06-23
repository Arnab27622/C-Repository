// Rotate an array by k steps, where k is a non-negative integer and k can be greater than array size
#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j - 1];
        arr[j - 1] = temp;
    }
    return;
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

    int k;
    printf("Enter the number of steps you want to rotate : ");
    scanf("%d", &k);
    if (k > n)
    {
        k %= n;
    }

    reverse(arr, 0, n);
    reverse(arr, 0, k);
    reverse(arr, k, n);

    printf("The result array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}